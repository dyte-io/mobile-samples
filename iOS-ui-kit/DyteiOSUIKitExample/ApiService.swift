//
//  ApiService.swift
//  DyteUIKitExample
//
//  Created by Shaunak Jagtap on 27/01/23.
//

import Foundation
import DyteiOSCore


struct CreateMeetingResponse: Codable {
    var success: Bool?
    var data: CreateMeetingResponseData?
}

struct CreateMeetingResponseData: Codable {
    var preferred_region: String?
    var record_on_start: Bool?
    var id: String?
    var created_at: String?
    var updated_at: String?
}

struct CreateParticipantResponse: Codable {
    var success: Bool?
    var data: CreateParticipantResponseData?
}

struct CreateParticipantResponseData: Codable {
    var id: String?
    var name: String?
    var picture: String?
    var client_specific_id: String?
    var preset_name: String?
    var created_at: String?
    var updated_at: String?
    var token: String?
}

struct ApiService {
    
    func createParticipant( meetingId: String, createParticipantRequest: CreateParticipantRequest, success:@escaping(CreateParticipantResponse) -> Void, failure:@escaping(String) -> Void) {
        guard let url = URL(string:
                                "https://\(Constants.IP_ADDRESS)/meetings/\(meetingId)/participants") else {
            return
        }
        
        if let params = ["preset_name" : createParticipantRequest.preset_name ?? "",
                         "client_specific_id": createParticipantRequest.client_specific_id,
                         "name" : createParticipantRequest.name ?? ""
        ] as? [String: Any] {
            NetworkManager.shared.postData(url: url, params: params, success: success, failure: failure)
        } else {
            print("Error: not able to create params for CreateMeetingApiService")
        }
    }
    
    func createMeeting(createMeetingRequest: CreateMeetingRequest, success:@escaping(CreateMeetingResponse) -> Void, failure:@escaping(String) -> Void) {
        guard let url = URL(string: "https://\(Constants.IP_ADDRESS)/meetings") else {
            return
        }
        
        if let params = ["title" : createMeetingRequest.title,
                         "preferred_region" : createMeetingRequest.preferred_region ,
                         "record_on_start" : false,
                         "live_stream_on_start" : false] as? [String: Any] {
            NetworkManager.shared.postData(url: url, params: params, success: success, failure: failure)
        } else {
            print("Error: not able to create params for CreateMeetingApiService")
        }
    }
    
}
