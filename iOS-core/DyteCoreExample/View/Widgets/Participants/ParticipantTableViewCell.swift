//
//  ParticipantTableViewCell.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 22/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore

class ParticipantTableViewCell: UITableViewCell {

    @IBOutlet weak var videoImageView: UIImageView!
    @IBOutlet weak var micImageView: UIImageView!
    @IBOutlet weak var usertitleLabel: UILabel!
    @IBOutlet weak var profileImageView: UIImageView!
    @IBOutlet weak var moreOptionsImageView: UIImageView!
    
    var participant: DyteMeetingParticipant? {
        didSet {
            updateUI()
        }
    }
    override func awakeFromNib() {
        super.awakeFromNib()
        //Round image
//        profileImageView.layer.borderWidth = 1
//        profileImageView.layer.masksToBounds = false
//        profileImageView.layer.borderColor = UIColor.black.cgColor
//        profileImageView.layer.cornerRadius = micImageView.frame.height/2
//        profileImageView.clipsToBounds = true
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
        // Configure the view for the selected state
    }
    
    private func updateUI() {
        ImageLoader.shared.obtainImageWithPath(imagePath: participant?.picture ?? "") { [weak self] image in
            self?.profileImageView.image = image
        }
        usertitleLabel.text = participant?.name
        let micEnabled = participant?.audioEnabled ?? false
        let videoEnabled = participant?.videoEnabled ?? false
        micImageView.image = UIImage(systemName: micEnabled ? "mic" : "mic.slash")
        videoImageView.image = UIImage(systemName: videoEnabled ? "video" : "video.slash")
    }
}
