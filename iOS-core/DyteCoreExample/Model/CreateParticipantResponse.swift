//
//  CreateParticipantResponse.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 12/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit

struct CreateParticipantResponse: Codable {
    var authResponse: Auth?
}

struct Auth: Codable {
    var userAdded: Bool?
    var authToken: String?
    var id: String?
}
