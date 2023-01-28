// To parse this JSON data, do
//
//     final allMeetings = allMeetingsFromMap(jsonString);

import 'dart:convert';

class AllMeetings {
  AllMeetings({
    required this.success,
    required this.message,
    required this.data,
  });

  final bool success;
  final String message;
  final Data data;

  factory AllMeetings.fromJson(String str) =>
      AllMeetings.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory AllMeetings.fromMap(Map<String, dynamic> json) => AllMeetings(
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
    required this.total,
    required this.meetings,
  });

  final int total;
  final List<Meeting> meetings;

  factory Data.fromJson(String str) => Data.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory Data.fromMap(Map<String, dynamic> json) => Data(
        total: json["total"],
        meetings:
            List<Meeting>.from(json["meetings"].map((x) => Meeting.fromMap(x))),
      );

  Map<String, dynamic> toMap() => {
        "total": total,
        "meetings": List<dynamic>.from(meetings.map((x) => x.toMap())),
      };
}

class Meeting {
  Meeting({
    required this.id,
    required this.title,
    required this.roomName,
    required this.status,
    required this.createdAt,
  });

  final String id;
  final String title;
  final String roomName;
  final String status;
  final DateTime createdAt;

  factory Meeting.fromJson(String str) => Meeting.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory Meeting.fromMap(Map<String, dynamic> json) => Meeting(
        id: json["id"],
        title: json["title"],
        roomName: json["roomName"],
        status: json["status"],
        createdAt: DateTime.parse(json["createdAt"]),
      );

  Map<String, dynamic> toMap() => {
        "id": id,
        "title": title,
        "roomName": roomName,
        "status": status,
        "createdAt": createdAt.toIso8601String(),
      };
}
