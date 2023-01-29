import 'dart:convert';

class MeetingDetails {
  MeetingDetails({
    required this.success,
    required this.message,
    required this.data,
  });

  final bool success;
  final String message;
  final Data data;

  factory MeetingDetails.fromJson(String str) =>
      MeetingDetails.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory MeetingDetails.fromMap(Map<String, dynamic> json) => MeetingDetails(
        success: json["success"],
        message: json["message"],
        data: Data.fromMap(json["data"]),
      );

  Map<String, dynamic> toMap() => {
        "success": success,
        "message": message,
        "data": data.toMap(),
      };
}

class Data {
  Data({
    required this.meeting,
  });

  final Meeting meeting;

  factory Data.fromJson(String str) => Data.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory Data.fromMap(Map<String, dynamic> json) => Data(
        meeting: Meeting.fromMap(json["meeting"]),
      );

  Map<String, dynamic> toMap() => {
        "meeting": meeting.toMap(),
      };
}

class Meeting {
  Meeting({
    required this.id,
    required this.title,
    required this.roomName,
    required this.status,
    required this.createdAt,
    required this.recordOnStart,
    required this.liveStreamOnStart,
    required this.participants,
  });

  final String id;
  final String title;
  final String roomName;
  final String status;
  final DateTime createdAt;
  final bool recordOnStart;
  final bool liveStreamOnStart;
  final List<dynamic> participants;

  factory Meeting.fromJson(String str) => Meeting.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory Meeting.fromMap(Map<String, dynamic> json) => Meeting(
        id: json["id"],
        title: json["title"] ?? '',
        roomName: json["roomName"],
        status: json["status"],
        createdAt: DateTime.parse(json["createdAt"]),
        recordOnStart: json["recordOnStart"],
        liveStreamOnStart: json["liveStreamOnStart"],
        participants:
            List<dynamic>.from(json["participants"] ?? [].map((x) => x)),
      );

  Map<String, dynamic> toMap() => {
        "id": id,
        "title": title,
        "roomName": roomName,
        "status": status,
        "createdAt": createdAt.toIso8601String(),
        "recordOnStart": recordOnStart,
        "liveStreamOnStart": liveStreamOnStart,
        "participants": List<dynamic>.from(participants.map((x) => x)),
      };
}
