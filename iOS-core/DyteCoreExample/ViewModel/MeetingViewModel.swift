//
//  MeetingViewModel.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 18/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//
import DyteiOSCore
import UIKit

protocol MeetingDelegate {
    func refreshList()
    func onMeetingRoomLeft()
    func onMeetingRoomJoined()
    func onMeetingInitFailed()
}

protocol ChatDelegate {
    func refreshMessages()
}

protocol PollDelegate {
    func refreshPolls(pollMessages: [DytePollMessage])
}


protocol ParticipantsDelegate {
    func refreshList()
}

final class MeetingViewModel {
    private var dyteMobileClient: DyteMobileClient?

    init(dyteClient: DyteMobileClient) {
        self.dyteMobileClient = dyteClient
    }
    
    var meetingDelegate : MeetingDelegate?
    var chatDelegate : ChatDelegate?
    var pollDelegate : PollDelegate?
    var participantsDelegate : ParticipantsDelegate?
    var participants = [DyteMeetingParticipant]()
    var screenshares = [DyteMeetingParticipant]()
    var participantDict = [String: UIView]()
    var audioEnabled = true
    var videoEnabled = true
    var isFrontCam = true
    
    private func refreshData() {
        participants.removeAll()
        if let array = dyteMobileClient?.participants.joined {
            participants = array
            participants = participants.sorted(by: { $0.id > $1.id })
        }
        
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
    }
    
    private func refreshPolls(pollMessages: [DytePollMessage]) {
        pollDelegate?.refreshPolls(pollMessages: pollMessages)
    }
    
    private func refreshMessages() {
        chatDelegate?.refreshMessages()
    }

}

extension MeetingViewModel: DyteParticipantEventsListener {
    func onAudioUpdate(audioEnabled: Bool, participant: DyteMeetingParticipant) {
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
    }
    
    func onGridUpdated(gridInfo: GridInfo) {
        
    }
    
    func onVideoUpdate(videoEnabled: Bool, participant: DyteMeetingParticipant) {
        
    }
    
    func onActiveParticipantsChanged(active: [DyteMeetingParticipant]) {
        
    }
    
    func onWaitListParticipantAccepted(participant: DyteMeetingParticipant) {
        
    }
    
    func onWaitListParticipantClosed(participant: DyteMeetingParticipant) {
        
    }
    
    func onWaitListParticipantJoined(participant: DyteMeetingParticipant) {
        
    }
    
    func onWaitListParticipantRejected(participant: DyteMeetingParticipant) {
        
    }
    
    func onUpdate(participants: DyteRoomParticipants) {
        for participant in participants.joined {
            participantDict[participant.id] = UIView()
        }
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
        
        screenshares.removeAll()
        if let screenShares = dyteMobileClient?.participants.screenshares {
            for ssParticipant in screenShares {
                screenshares.append(ssParticipant)
            }
            refreshData()
        }
    }
    
    func onParticipantsUpdated(participants: DyteRoomParticipants, isNextPagePossible: Bool, isPreviousPagePossible: Bool) {
        for participant in participants.joined {
            participantDict[participant.id] = UIView()
        }
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
    }
    
    func onParticipantPinned(participant: DyteMeetingParticipant) {
        
    }
    
    func onParticipantUnpinned() {
        
    }
    
    func onScreenSharesUpdated() {
        screenshares.removeAll()
        if let screenShares = dyteMobileClient?.participants.screenshares {
            for ssParticipant in screenShares {
                screenshares.append(ssParticipant)
            }
            refreshData()
        }
    }
    
    func onActiveSpeakerChanged(participant: DyteMeetingParticipant) {
        
    }
    
    func onNoActiveSpeaker() {
        
    }
    
    func videoUpdate(videoEnabled: Bool, participant: DyteMeetingParticipant) {
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
    }
}

extension MeetingViewModel: DyteSelfEventsListener {
    func onMeetingRoomLeaveStarted() {
        
    }
    
    func onStoppedPresenting() {
        
    }
    
    func onWebinarPresentRequestReceived() {
    
    }
    
    func onMeetingRoomJoinedWithoutCameraPermission() {
        
    }
    
    func onMeetingRoomJoinedWithoutMicPermission() {
        
    }
    
    func onWaitListStatusUpdate(waitListStatus: WaitListStatus) {
        
    }
    
    func onRoomJoined() {
        meetingDelegate?.onMeetingRoomJoined()
    }
    
    func onUpdate(participant: DyteMeetingParticipant) {
        
    }
    
    func onAudioDevicesUpdated() {
        
    }
    
    func onProximityChanged(isNear: Bool) {
        
    }
    
    func onAudioUpdate(audioEnabled: Bool) {
        self.audioEnabled = audioEnabled
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
    }
    
    func onVideoUpdate(videoEnabled: Bool) {
        self.videoEnabled = videoEnabled
        meetingDelegate?.refreshList()
        participantsDelegate?.refreshList()
    }
}

extension MeetingViewModel: DyteMeetingRoomEventsListener {
    func onChatUpdates(messages: [DyteChatMessage]) {
        chatDelegate?.refreshMessages()
    }
    
    func onMeetingRecordingStateUpdated(state: DyteRecordingState) {
        refreshData()
    }
    
    func onNewChatMessage(message: DyteChatMessage) {
        
    }
    
    func onNewPoll(poll: DytePollMessage) {
        
    }
    //
    func onPollUpdates(pollMessages: [DytePollMessage]) {
        refreshPolls(pollMessages: pollMessages)
    }
    
    func onWaitingRoomEntered() {
        
    }
    
    func onWaitingRoomEntryAccepted() {
        
    }
    
    func onWaitingRoomEntryRejected() {
        
    }
    
    func onHostKicked() {
        do {
            try dyteMobileClient?.leaveRoom()
        } catch {
            print(error.localizedDescription)
        }
    }
    
    func onMeetingRecordingStopError(e: KotlinException) {
        Utils.displayAlert(alertTitle: Constants.errorTitle, message: Constants.recordingError)
    }
    
    func onMeetingRoomDisconnected() {
        participantDict.removeAll()
        participants.removeAll()
    }
    
    
    func onMeetingInitCompleted() {
        do {
            try self.dyteMobileClient?.joinRoom()
        } catch {
            print(error.localizedDescription)
        }
    }
    
    func onMeetingInitFailed(exception: KotlinException) {
        print("Error: onMeetingInitFailed: \(exception.message ?? "")")
        meetingDelegate?.onMeetingInitFailed()
    }
    
    func onMeetingInitStarted() {
        //1
    }

    
    func onMeetingRecordingEnded() {
        refreshData()
    }
    
    func onMeetingRecordingStarted() {
        refreshData()
    }
    
    func onMeetingRoomJoinFailed(exception: KotlinException) {
        print("Error: onMeetingRoomJoinFailed: \(exception.message ?? "")")
    }
    
    func onMeetingRoomJoinStarted() {
        //1
    }
    
    func onMeetingRoomJoined() {
        meetingDelegate?.onMeetingRoomJoined()
    }
    
    func onMeetingRoomLeft() {
        meetingDelegate?.onMeetingRoomLeft()
    }
    
    func onParticipantJoin(participant: DyteMeetingParticipant) {
        var peerExist = false
        let nib = UINib(nibName: "PeerCollectionViewCell", bundle: nil)
        if let videoView = nib.instantiate(withOwner: meetingDelegate, options: nil).first as? PeerCollectionViewCell {
            participantDict[participant.id] = videoView
        }
        
        for lParticipant in participants {
            if lParticipant.id == participant.id {
                peerExist = true
            }
        }
        if !peerExist {
            participants.append(participant)
            refreshData()
        }
    }
    
    func onParticipantLeave(participant: DyteMeetingParticipant) {
        //remove participant.videoTrack to renderer
        if let index = participants.firstIndex(of: participant) {
            participants.remove(at: index)
            participantDict.removeValue(forKey: participant.id)
        }
        refreshData()
    }
    
    func onParticipantUpdated(participant: DyteMeetingParticipant) {
        //7
        refreshData()
    }
    
    func onParticipantsUpdated(participants: DyteRoomParticipants, enabledPaginator: Bool) {
        //4,8
        self.participants = participants.joined
        self.participants.append(contentsOf: participants.screenshares)
        refreshData()
    }
    
    func onPermissionDenied() {
        
    }
    
    func onPermissionDeniedAlways() {
        
    }
    
    func onPollUpdates(newPoll: Bool, pollMessages: [DytePollMessage], updatedPollMessage: DytePollMessage?) {
        refreshPolls(pollMessages: pollMessages)
    }
    
}

extension MeetingViewModel: DyteParticipantUpdateListener {
    func onAudioUpdate(participant: DyteMeetingParticipant, isEnabled: Bool) {
        
    }
    
    func onPinned(participant: DyteMeetingParticipant) {
        
    }
    
    func onScreenShareEnded(participant: DyteMeetingParticipant) {
        screenshares.removeAll()
        if let screenShares = dyteMobileClient?.participants.screenshares {
            for ssParticipant in screenShares {
                screenshares.append(ssParticipant)
            }
            refreshData()
        }
    }
    
    func onScreenShareStarted(participant: DyteMeetingParticipant) {
        screenshares.removeAll()
        if let screenShares = dyteMobileClient?.participants.screenshares {
            for ssParticipant in screenShares {
                screenshares.append(ssParticipant)
            }
            refreshData()
        }
    }
    
    func onUnpinned(participant: DyteMeetingParticipant) {
        
    }
    
    func onVideoUpdate(participant: DyteMeetingParticipant, isEnabled: Bool) {
        
    }
    
    
}
