//
//  DyteUtils.swift
//  iosApp
//
//  Created by Swapnil Madavi on 26/09/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore

//TODO:Remove Utils and integrate in app
class DyteUtils {
    static func canLocalUserDisableParticipantAudio(_ localUser: DyteSelfParticipant) -> Bool {
        return localUser.permissions.hostPermissions.canDisableParticipantAudio
    }
    
    static func canLocalUserDisableParticipantVideo(_ localUser: DyteSelfParticipant) -> Bool {
        return localUser.permissions.hostPermissions.canDisableParticipantVideo
    }
    
    static func canLocalUserKickParticipant(_ localUser: DyteSelfParticipant) -> Bool {
        return localUser.permissions.hostPermissions.canKickParticipant
    }
    
    static func canPinParticipant(_ localUser: DyteSelfParticipant) -> Bool {
        return localUser.permissions.hostPermissions.canPinParticipant
    }
}
