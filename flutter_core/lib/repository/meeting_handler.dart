import 'dart:convert';
import 'dart:developer';
import 'dart:io';

import 'package:flutter_core/models/total_meetings.dart';
import 'package:flutter_core/secrets.dart';
import 'package:http/http.dart' as http;
import 'package:uuid/uuid.dart';

import '../models/meeting_details.dart';
import '../models/participant_details.dart';

class MeetingRepository {
  final headers = {
    HttpHeaders.authorizationHeader: apiKey,
    HttpHeaders.contentTypeHeader: 'application/json',
    HttpHeaders.acceptHeader: 'application/json',
  };

  Future<MeetingDetails?> createMeeting() async {
    final response = await http.post(
        Uri.parse('$baseUrl/organizations/$orgId/meeting'),
        headers: headers);

    if (response.statusCode == 200 || response.statusCode == 201) {
      log(response.body);
      return MeetingDetails.fromJson(response.body);
    } else {
      log(response.statusCode.toString());
      log(response.headers.toString());
      log(response.request!.url.toString());
    }
    return null;
  }

  Future<String?> getMeetingIdFromRoomName(String roomName) async {
    log("Room Name $roomName");
    final response = await http.post(
      Uri(
        scheme: 'https',
        host: 'api.cluster.dyte.in',
        path: 'v1/organizations/$orgId/meetings',
      ),
      headers: headers,
    );

    if (response.statusCode == 200 || response.statusCode == 201) {
      log(response.body);
      return AllMeetings.fromJson(response.body).data.meetings[0].id;
    } else {
      log(response.statusCode.toString());
      log(response.headers.toString());
      log(response.request!.url.toString());
    }
    return null;
  }

  Future<ParticipantTokens?> addAParticipant(String name, String meetId) async {
    final id = const Uuid().v1();
    final payload = {
      "clientSpecificId": id,
      "userDetails": {"name": name},
      "roleName": "participant",
    };
    final response = await http.post(
      Uri.parse('$baseUrl/organizations/$orgId/meetings/$meetId/participant'),
      headers: headers,
      body: json.encode(payload),
    );
    if (response.statusCode == 200 || response.statusCode == 201) {
      return ParticipantTokens.fromJson(response.body);
    } else {
      log(response.statusCode.toString());
      log(response.headers.toString());
      log(response.request!.url.toString());
      log(response.body);
    }
    return null;
  }
}
