//
//  NetworkManager.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 09/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit

final class NetworkManager {
    static let shared = NetworkManager()
    private init() {}
    
    func getData<T:Decodable>(url:URL, success:@escaping(T) -> Void, failure:@escaping(String) -> Void)
    {
        let task = URLSession.shared.dataTask(with: url) { [weak self] (data, response, error) in
            if let smResponse = response as? HTTPURLResponse, (200...299).contains(smResponse.statusCode)
            {
                self?.handleData(data: data, success: success, failure: failure)
            }
            else
            {
                DispatchQueue.main.async {
                    failure("Error: networkError");
                }
            }
        }
        task.resume()
    }
    
    func postData<T:Decodable>(url:URL, params: [String:Any], success:@escaping(T) -> Void, failure:@escaping(String) -> Void) {
        var request = URLRequest(url: url)
        request.httpMethod = "POST"
        request.setValue("Application/json", forHTTPHeaderField: "Content-Type")
        guard let httpBody = try? JSONSerialization.data(withJSONObject: params, options: []) else {
            return
        }
        request.httpBody = httpBody
        
        let session = URLSession.shared
        session.dataTask(with: request) { [weak self] (data, response, error) in
            if let smResponse = response as? HTTPURLResponse
            {
                if (200...299).contains(smResponse.statusCode) {
                    self?.handleData(data: data, success: success, failure: failure)
                } else {
                    print("Error: \(smResponse.statusCode)")
                    failure("Error: \(smResponse.statusCode)");
                }
                
            }
            else
            {
                DispatchQueue.main.async {
                    failure("Error: networkError");
                }
            }
        }.resume()
    }
    
    func handleData<T:Decodable>(data: Data?, success:@escaping(T) -> Void, failure:@escaping(String) -> Void) {
        do {
            if let data = data
            {
                let topLevelObject = try JSONDecoder().decode(T.self, from: data)
                    DispatchQueue.main.async {
                        success(topLevelObject)
                    }
            }
            else
            {
                DispatchQueue.main.async {
                    failure("Error: networkDataError");
                }
            }
        } catch let DecodingError.dataCorrupted(context) {
            print(context)
        } catch let DecodingError.keyNotFound(key, context) {
            print("Key '\(key)' not found:", context.debugDescription)
            print("codingPath:", context.codingPath)
        } catch let DecodingError.valueNotFound(value, context) {
            print("Value '\(value)' not found:", context.debugDescription)
            print("codingPath:", context.codingPath)
        } catch let DecodingError.typeMismatch(type, context)  {
            print("Type '\(type)' mismatch:", context.debugDescription)
            print("codingPath:", context.codingPath)
        } catch {
            print("error: ", error)
        }
    }
    
}
