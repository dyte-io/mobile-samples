//
//  CreatePollViewController.swift
//  iosApp
//
//  Created by Swapnil Madavi on 06/09/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore

//TODO: Implement ability to add-remove options
class CreatePollViewController: UIViewController {
    
    @IBOutlet weak var questionTextField: UITextField!
    @IBOutlet weak var pollOptionsContainer: UIStackView!
    @IBOutlet weak var anonymousPollSwitch: UISwitch!
    @IBOutlet weak var hideResultsBeforeVoteSwitch: UISwitch!
    
    var dyteMobileClient: DyteMobileClient?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
        
        // Setting self as UITextFieldDelegate
        questionTextField.delegate = self
        for textField in pollOptionsContainer.arrangedSubviews {
            (textField as! UITextField).delegate = self
        }
    }
    
    @IBAction func closeButtonAction(_ sender: UIButton) {
        dismiss(animated: true)
    }
    
    @IBAction func createPollButtonAction(_ sender: UIButton) {
        let question = questionTextField.text?.trimmingCharacters(in: .whitespaces) ?? ""
        let options = getPollOptions()
        let anonymousPoll = anonymousPollSwitch.isOn
        let hideResultsBeforeVote = hideResultsBeforeVoteSwitch.isOn
        do {
            try dyteMobileClient?.polls.create(question: question, options: options, anonymous: anonymousPoll, hideVotes: hideResultsBeforeVote)
            dismiss(animated: true)
        } catch {
            print(error.localizedDescription)
        }
        
    }
    
    private func getPollOptions() -> [String] {
        var pollOptions: [String] = []
        let optionTextFields = pollOptionsContainer.arrangedSubviews
        for textField in optionTextFields {
            pollOptions.append((textField as! UITextField).text?.trimmingCharacters(in: .whitespaces) ?? "")
        }
        return pollOptions
    }
}

extension CreatePollViewController: UITextFieldDelegate {
    //TODO: Can store currentTextField index and use +1 to assign first responder to the next textField in StackView
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        textField.resignFirstResponder()
        return true
    }
}
