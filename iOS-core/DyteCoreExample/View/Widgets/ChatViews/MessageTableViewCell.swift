//
//  MessageTableViewCell.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 19/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore

class MessageTableViewCell: UITableViewCell {

    var message: DyteChatMessage? {
        didSet {
            updateUI()
        }
    }
    
    @IBOutlet weak var profileImageView: UIImageView!
    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var messageLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
//        profileImageView.layer.cornerRadius = profileImageView.frame.height / 2
//        profileImageView.layer.masksToBounds = true
    }
    
    fileprivate func updateUI() {
        if let msg = message {
            self.nameLabel.text = "\(msg.displayName) \(msg.time)"
            profileImageView.isHidden = true
            switch msg.type {
            case .text:
                if let textMsg = msg as? DyteTextMessage {
                    self.messageLabel.text = textMsg.message
                }
            case .file:
                if let fileMsg = msg as? DyteFileMessage {
                    self.messageLabel.text = fileMsg.name
                }
            case .image:
                profileImageView.isHidden = false
                if let imgMsg = msg as? DyteImageMessage {
                    self.messageLabel.text = imgMsg.fileName
                    ImageLoader.shared.obtainImageWithPath(imagePath: imgMsg.link , completionHandler: { [weak self] image in
                        self?.profileImageView?.image = image
                    })
                }
            default:
                print("Error! Message type unknown!")
            }
        }
    }

}
