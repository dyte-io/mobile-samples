//
//  TwoUsersView.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 27/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore
class TwoUsersView: UIView {
    @IBOutlet weak var videoView: UIView!

    @IBOutlet weak var hideButton: UIButton!
    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var mutebutton: UIButton!
    private var audioEnabled = true
    private var videoEnabled = true
    @IBOutlet weak var statusStack: UIStackView!
    @IBOutlet weak var smallVideoView: UIView!

    @IBOutlet weak var smallViewNameLabel: UILabel!
    
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
        let viewFromXib = Bundle.main.loadNibNamed("TwoUsersView", owner: self, options: nil)![0] as! UIView
        viewFromXib.frame = self.bounds
        addSubview(viewFromXib)
    }
    
    func setupUI() {
        mutebutton.setTitle("", for: .normal)
        hideButton.setTitle("", for: .normal)
    }
    
    func renderUI(participants: [DyteMeetingParticipant]) {
        if participants.count > 0 {
            let participant = participants[0]
            let participantVideoEnabled = participant.videoEnabled
            self.hideButton.setImage(UIImage(systemName: participantVideoEnabled ? "video" : "video.slash"), for: .normal)
            let participantAudioEnabled = participant.audioEnabled
            self.mutebutton.setImage(UIImage(systemName: participantAudioEnabled ? "volume.3" : "volume.slash"), for: .normal)
            self.nameLabel.text = participant.name
            let dyteView = DyteIOSVideoUtils().getVideoView(participant: participant)
            dyteView.frame = videoView.bounds
            videoView.addSubview(dyteView)
        }
        
        if participants.count > 1 {
            let participant = participants[1]
            self.smallViewNameLabel.text = participant.name
            let dyteView = DyteIOSVideoUtils().getVideoView(participant: participant)
            dyteView.frame = smallVideoView.bounds
            smallVideoView.addSubview(dyteView)
        }
    }
}
