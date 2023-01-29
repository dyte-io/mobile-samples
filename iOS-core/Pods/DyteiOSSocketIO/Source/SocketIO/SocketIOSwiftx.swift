import Foundation

@objc
public enum SocketIoTransport: Int {
  case websocket
  case polling
  case undefined
}

@objc
public enum SocketEvent: Int {
  case connect = 1
  case connecting
  case disconnect
  case error
  case message
  case reconnect
  case reconnectAttempt
  case ping
  case pong
}

@objc
public class SocketIo: NSObject {
  private let socketManager: SocketManager
  private let socket: SocketIOClient

  @objc
  public init(
    endpoint: String,
    queryParams: [String: Any]?,
    transport: SocketIoTransport
  ) {
   do {
        var configuration: SocketIOClientConfiguration = [ .compress ]
        if let queryParams = queryParams {
          configuration.insert(.connectParams(queryParams))
        }

        //TODO: Remove this later
        configuration.insert(.log(true))
        configuration.insert(.compress)

        switch transport {
            case .polling:
              DefaultSocketLogger.Logger.log(("Swift: transport type: polling"), type: "SocketIOClient")
              configuration.insert(.forcePolling(true))
            case .websocket:
              DefaultSocketLogger.Logger.log(("Swift: transport type: websockets"), type: "SocketIOClient")
              configuration.insert(.forceWebsockets(true))
            case .undefined: do {}
        }

        socketManager = SocketManager(socketURL: URL(string: endpoint)!,
                                      config: configuration)
        socket = socketManager.defaultSocket

        socket.on(clientEvent: .connect) {data, ack in
            DefaultSocketLogger.Logger.log(("Swift: socket connected"), type: "SocketIOClient")
        }
   }
  }

  @objc
  public func connect() {
    do {
        socket.connect()
    }
  }

  @objc
  public func disconnect() {
    socket.disconnect()
  }

  @objc
  public func ackCall(data: Array<Any>, ack: String) {
      if let ackCallback = (data[1] as? AckCallback) {
        do {
            ackCallback([ack])
        }
      } else {
        DefaultSocketLogger.Logger.log(("Swift: Did not cast!"), type: "SocketIOClient")
      }
  }

  @objc
  public func isConnected() -> Bool {
    return socket.status == SocketIOStatus.connected
  }

  @objc
  public func onCustom(event: String, action: @escaping (Array<Any>) -> Void) {
      socket.on(event) { data, emitter in
  //       let jsonData = try! JSONSerialization.data(withJSONObject: data[0], options: .prettyPrinted)
  //       let jsonString = String(data: jsonData, encoding: .utf8)!
        let _ = action(data)
      }
  }

  @objc
  public func on(socketEvent: SocketEvent, action: @escaping NormalCallback) {
    let clientEvent: SocketClientEvent
    switch socketEvent {
    case .connect:
      DefaultSocketLogger.Logger.log(("Swift: connect"), type: "SocketIOClient")
      clientEvent = .connect
      break
    case .connecting:
      DefaultSocketLogger.Logger.log(("Swift: connecting"), type: "SocketIOClient")
      socket.on(clientEvent: .statusChange) { [weak self] data, ack in
        if self?.socket.status == .connecting {
          action(data, ack)
        }
      }
      return
    case .disconnect:
      DefaultSocketLogger.Logger.log(("Swift: disconnect"), type: "SocketIOClient")
      clientEvent = .disconnect
      break
    case .error:
      DefaultSocketLogger.Logger.log(("Swift: error"), type: "SocketIOClient")
      clientEvent = .error
      break
    case .message:
     DefaultSocketLogger.Logger.log(("Swift: message"), type: "SocketIOClient")
        socket.on("event://server-simple-message", callback: { data, ack in
           ack.with(1)
            action(data, ack)
        })
      return
    case .reconnect:
      DefaultSocketLogger.Logger.log(("Swift: reconnect"), type: "SocketIOClient")
      clientEvent = .reconnect
      break
    case .reconnectAttempt:
      DefaultSocketLogger.Logger.log(("Swift: reconnectAttempt"), type: "SocketIOClient")
      clientEvent = .reconnectAttempt
      break
    case .pong:
      DefaultSocketLogger.Logger.log(("Swift: pong"), type: "SocketIOClient")
      clientEvent = .pong
      break
    default:
      DefaultSocketLogger.Logger.log(("Swift: default"), type: "SocketIOClient")
      return
    }
    socket.on(clientEvent: clientEvent) { data, ack in
      action(data, ack)
    }
  }

  @objc
    public func emit(event: String, data: Array<Any>) {
    var result = Array<Any>()
    for i in (0...(data.count - 1)) {
      let item = data[i]
      if let itemData = (item as? String)?.data(using: .utf8) {
        do {
          let itemObject = try JSONSerialization.jsonObject(with: itemData, options: []) as? [String: Any]
          result.append(itemObject as Any)
        } catch {
            DefaultSocketLogger.Logger.log("Swift: emit() error: \(error.localizedDescription)", type: "SocketIOClient")
        }
      } else {
        result.append(item)
      }
    }
    socket.emit(event, result)
  }

    func test(input: Array<Any>) {
        DefaultSocketLogger.Logger.log(("TESTING ACK"), type: "SocketIOClient")
    }

    @objc
    public func emitAck(event: String, data: String, callback: @escaping (Array<Any>) -> ()) {
        DefaultSocketLogger.Logger.log("Event: \(event)", type: "SocketIOClient")
        DefaultSocketLogger.Logger.log("Data: \(data)", type: "SocketIOClient")
        DefaultSocketLogger.Logger.log("Socket status: \(socket.status)", type: "SocketIOClient")
        socket.emitWithAck(event, [data]).timingOut(after: 2, callback: { res in
            DefaultSocketLogger.Logger.log("Response: \(res.description)", type: "SocketIOClient")
            callback(res)
        })
    }

  @objc
  public func emit(event: String, string: String) {
    //TODO:Fix this with actual ack
    socket.emitWithAck(event, [string]).timingOut(after: 10, callback: test)
  }
}

private extension UUID {
  func add(to array: inout Array<UUID>) {
    array.append(self)
  }
}

private extension SocketIOClient {
  func off(ids: Array<UUID>) {
    for id in ids {
      off(id: id)
    }
  }
}

