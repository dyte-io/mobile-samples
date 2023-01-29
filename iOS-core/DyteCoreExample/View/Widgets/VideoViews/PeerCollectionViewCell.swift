//
//  PeerCollectionViewCell.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 26/07/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore

class PeerCollectionViewCell: UICollectionViewCell {
    @IBOutlet weak var videoView: UIView!
    @IBOutlet weak var hideButton: UIButton!
    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var mutebutton: UIButton!
    private var audioEnabled = true
    private var videoEnabled = true
    @IBOutlet weak var statusStack: UIStackView!
    var participant: DyteMeetingParticipant?
    
    override func awakeFromNib() {
        super.awakeFromNib()
        mutebutton.setTitle("", for: .normal)
        hideButton.setTitle("", for: .normal)
    }
    
    @IBAction func videoAction(_ sender: Any) {
        if videoEnabled {
            videoEnabled = false
            do {
                try participant?.disableVideo()
            } catch {
                print(error.localizedDescription)
            }
            hideButton.setImage(UIImage(systemName: "video.slash"), for: .normal)
        } else {
            videoEnabled = true
            //TODO: enableVideo
//            participant?.enableVideo()
            hideButton.setImage(UIImage(systemName: "video"), for: .normal)
        }
    }
    
    @IBAction func audioAction(_ sender: Any) {
        if audioEnabled {
            audioEnabled = false
            do {
                try participant?.disableAudio()
            } catch {
                print(error.localizedDescription)
            }
            mutebutton.setImage(UIImage(systemName: "volume.slash"), for: .normal)
        } else {
            audioEnabled = true
            //TODO: enableAudio
//            participant?.enableAudio()
            mutebutton.setImage(UIImage(systemName: "volume.3"), for: .normal)
        }
    }
}
