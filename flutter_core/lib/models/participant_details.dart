// To parse this JSON data, do
//
//     final ParticipantTokens = ParticipantTokensFromMap(jsonString);

import 'dart:convert';

class ParticipantTokens {
  ParticipantTokens({
    required this.success,
    required this.message,
    required this.data,
  });

  final bool success;
  final String message;
  final Data data;

  factory ParticipantTokens.fromJson(String str) =>
      ParticipantTokens.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory ParticipantTokens.fromMap(Map<String, dynamic> json) =>
      ParticipantTokens(
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
    required this.authResponse,
  });

  final AuthResponse authResponse;

  factory Data.fromJson(String str) => Data.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory Data.fromMap(Map<String, dynamic> json) => Data(
        authResponse: AuthResponse.fromMap(json["authResponse"]),
      );

  Map<String, dynamic> toMap() => {
        "authResponse": authResponse.toMap(),
      };
}

class AuthResponse {
  AuthResponse({
    required this.userAdded,
    required this.id,
    required this.authToken,
  });

  final bool userAdded;
  final String id;
  final String authToken;

  factory AuthResponse.fromJson(String str) =>
      AuthResponse.fromMap(json.decode(str));

  String toJson() => json.encode(toMap());

  factory AuthResponse.fromMap(Map<String, dynamic> json) => AuthResponse(
        userAdded: json["userAdded"],
        id: json["id"],
        authToken: json["authToken"],
      );

  Map<String, dynamic> toMap() => {
        "userAdded": userAdded,
        "id": id,
        "authToken": authToken,
      };
}
