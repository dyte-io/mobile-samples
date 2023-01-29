//
//  ViewController.swift
//  DyteiOSUIKitExample
//
//  Created by sudhir kumar on 27/01/23.
//

import UIKit
import DyteUiKit
import DyteiOSCore

class ViewController: UIViewController {
        
    @IBOutlet weak var meetingCodeTextField: UITextField!
    @IBOutlet weak var meetingNameTextField: UITextField!
    
    @IBOutlet weak var userNameTextField: UITextField!
    @IBOutlet weak var joinUserNameTextField: UITextField!
    private var meetingSetupViewModel =  MeetingSetupViewModel()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        meetingSetupViewModel.meetingSetupDelegate = self
        let tap = UITapGestureRecognizer(target: self, action: #selector(UIInputViewController.dismissKeyboard))
        view.addGestureRecognizer(tap)
        meetingCodeTextField.text = Constants.MEETING_ROOM_NAME
    }
    
    @IBAction func joinMeeting(_ sender: Any) {
        meetingCodeTextField.resignFirstResponder()
        self.view.showActivityIndicator()
        goToMeetingRoom(authToken: Constants.AUTH_TOKEN)
//        self.meetingSetupViewModel.joinCreatedMeeting(displayName: self.joinUserNameTextField.text, meetingID: meetingCodeTextField.text)
    }
    
    
    @IBAction func startMeeting(_ sender: Any) {

        meetingNameTextField.resignFirstResponder()
        if let text = meetingNameTextField.text, !text.isEmpty {
            self.view.showActivityIndicator()
            let req = CreateMeetingRequest(title: meetingNameTextField.text ?? "", preferred_region: "ap-south-1")
            meetingSetupViewModel.startMeeting(request: req)
        } else {
            Utils.displayAlert(alertTitle: "Error", message: "Meeting Name Required")
        }
    }
    
    func goToMeetingRoom(authToken: String) {
        let controller = SetupViewController(authtoken: authToken, baseUrl: Constants.BASE_URL, completion: { [weak self] in
            guard let self = self else {return}
            self.dismiss(animated: true)
            self.view.hideActivityIndicator()
         })
        self.present(controller, animated: true)
    }
    
    @objc func dismissKeyboard() {
        view.endEditing(true)
    }
}

extension ViewController: MeetingSetupDelegate {
    func createParticipantSuccess(authToken: String, meetingID: String) {
        let message = "meeting link is copied on clipboard, share it!"
        UIPasteboard.general.string = "https://app.dyte.io/v2/meeting?id=\(meetingID)"
        
        let alert = UIAlertController(title: nil, message: message, preferredStyle: .alert)
        self.present(alert, animated: true)
            
        // duration in seconds
        let duration: Double = 3
            
        DispatchQueue.main.asyncAfter(deadline: DispatchTime.now() + duration) {
            alert.dismiss(animated: true)
            self.goToMeetingRoom(authToken: authToken)
        }
    }
    
    
    func startMeetingSuccess(createMeetingResponse: CreateMeetingResponse) {
        self.meetingSetupViewModel.joinCreatedMeeting(displayName: self.userNameTextField.text, meetingID: createMeetingResponse.data?.id)
    }
    
    func hideActivityIndicator() {
        self.view.hideActivityIndicator()
    }
}
