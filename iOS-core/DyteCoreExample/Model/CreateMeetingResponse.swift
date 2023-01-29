//
//  CreateMeetingResponse.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 09/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

struct CreateMeetingResponse: Codable {
    var meeting: MeetingResponse?
}

struct MeetingResponse: Codable {
    var id: String?
    var title: String?
    var roomName: String?
    var status: String?
    var createdAt: String?
}
