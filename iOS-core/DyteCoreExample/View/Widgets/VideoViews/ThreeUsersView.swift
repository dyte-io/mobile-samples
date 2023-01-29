//
//  ThreeUsersView.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 27/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore
class ThreeUsersView: UIView {
    @IBOutlet weak var peerOneVideoView: UIView!
    @IBOutlet weak var peerOneHideButton: UIButton!
    @IBOutlet weak var peerOneNameLabel: UILabel!
    @IBOutlet weak var peerOneMutebutton: UIButton!
    @IBOutlet weak var peerOneStatusStack: UIStackView!
    
    @IBOutlet weak var peerTwoVideoView: UIView!
    @IBOutlet weak var peerTwoHideButton: UIButton!
    @IBOutlet weak var peerTwoNameLabel: UILabel!
    @IBOutlet weak var peerTwoMutebutton: UIButton!
    @IBOutlet weak var peerTwoStatusStack: UIStackView!
    
    @IBOutlet weak var selfVideoView: UIView!
    @IBOutlet weak var selfViewNameLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
    }

    
    override init(frame: CGRect) {
        super.init(frame: frame)
        comminInit()
    }
    
    required init?(coder: NSCoder) {
        super.init(coder: coder)
        comminInit()
    }
    
    func comminInit() {
        let viewFromXib = Bundle.main.loadNibNamed("ThreeUsersView", owner: self, options: nil)![0] as! UIView
        viewFromXib.frame = self.bounds
        addSubview(viewFromXib)
    }
    
    func setupUI() {
        peerOneMutebutton.setTitle("", for: .normal)
        peerOneHideButton.setTitle("", for: .normal)
        peerTwoMutebutton.setTitle("", for: .normal)
        peerTwoHideButton.setTitle("", for: .normal)
    }
    
    func renderUI(participants: [DyteMeetingParticipant]) {
        if participants.count > 0 {
            let participant = participants[0]
            self.peerOneNameLabel.text = participant.name

            peerOneHideButton.setImage(UIImage(systemName: participant.videoEnabled ? "video" : "video.slash"), for: .normal)
            let participantAudioEnabled = participant.audioEnabled
            peerOneMutebutton.setImage(UIImage(systemName: participantAudioEnabled ? "volume.3" : "volume.slash"), for: .normal)
            
            let dyteView = DyteIOSVideoUtils().getVideoView(participant: participant)
            dyteView.frame = peerOneVideoView.bounds
            peerOneVideoView.addSubview(dyteView)
        }
        if participants.count > 1 {
            let participant = participants[1]
            self.peerTwoNameLabel.text = participant.name
            let participantVideoEnabled = participant.videoEnabled

            peerTwoHideButton.setImage(UIImage(systemName: participantVideoEnabled ? "video" : "video.slash"), for: .normal)
            let participantAudioEnabled = participant.audioEnabled
            peerTwoMutebutton.setImage(UIImage(systemName: participantAudioEnabled ? "volume.3" : "volume.slash"), for: .normal)
            let dyteView = DyteIOSVideoUtils().getVideoView(participant: participant)
            dyteView.frame = peerTwoVideoView.bounds
            peerTwoVideoView.addSubview(dyteView)
        }
        
        if participants.count > 2 {
            let participant = participants[2]
            self.selfViewNameLabel.text = participant.name
            let dyteView = DyteIOSVideoUtils().getVideoView(participant: participant)
            dyteView.frame = selfVideoView.bounds
            selfVideoView.addSubview(dyteView)
        }
    }
}
