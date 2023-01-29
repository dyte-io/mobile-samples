//
//  ChatViewController.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 18/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import DyteiOSCore
import UIKit

class ChatViewController: UIViewController, UIImagePickerControllerDelegate, UINavigationControllerDelegate {
    
    @IBOutlet weak var imageButton: UIButton!
    fileprivate var messages: [DyteChatMessage]!
    fileprivate var messageTextViewOriginalYPosition: CGFloat!
    fileprivate var messageTextViewOriginalHeight: CGFloat!
    fileprivate var keyboardHeight: CGFloat?
    fileprivate let textViewHeight:CGFloat = 50
    fileprivate var messageContainerViewOriginalHeight: CGFloat!
    var dyteMobileClient: DyteMobileClient?
    var meetingViewModel: MeetingViewModel?
    
    @IBOutlet weak var messageContainerView: UIView!
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var messageTextView: UITextView!
    @IBOutlet weak var sendMessageButton: UIButton!
    @IBOutlet weak var textViewBottomContraint: NSLayoutConstraint!
    let imagePickerVC = UIImagePickerController()
    @IBOutlet weak var textViewHeightConstraint: NSLayoutConstraint!
    
    @IBOutlet weak var realTextViewHeightConstraint: NSLayoutConstraint!
    
    @IBAction func sendMessageButtonTapped(_ sender: AnyObject) {
        if !messageTextView.text.isEmpty {
            let spacing = CharacterSet.whitespacesAndNewlines
            let message = messageTextView.text.trimmingCharacters(in: spacing)
            do {
                try dyteMobileClient?.chat.sendTextMessage(message: message)
            } catch {
                print(error.localizedDescription)
            }
            
            // reset textview height to original
            messageTextView.text = ""
            realTextViewHeightConstraint.constant = messageTextViewOriginalHeight
            
    
            tableView.contentInset.bottom = messageContainerViewOriginalHeight + keyboardHeight!
            tableView.verticalScrollIndicatorInsets.bottom = messageContainerViewOriginalHeight + keyboardHeight!
            
            //messageTextView.frame.origin.y = messageTextViewOriginalYPosition
            //messageTextView.frame.size.height = messageTextViewOriginalHeight
            //textViewHeightConstraint.constant = textViewHeight
            sendMessageButton.isEnabled = false
        }
    }
    
    @IBAction func closeAction(_ sender: Any) {
        self.dismiss(animated: true)
    }
    
    @objc func dismissKeyboard (_ sender: UITapGestureRecognizer) {
        messageTextView.resignFirstResponder()
    }
    
    @IBAction func pickImageAction(_ sender: Any) {
        imagePickerVC.delegate = self
        imagePickerVC.sourceType = .photoLibrary
        present(imagePickerVC, animated: true)
    }
    
    func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [UIImagePickerController.InfoKey : Any]) {
        self.view.showActivityIndicator()
        imagePickerVC.dismiss(animated: true, completion: { [weak self] in
            if let url = info[UIImagePickerController.InfoKey.imageURL] as? URL {
                self?.dyteMobileClient?.chat.sendImageMessage(filePath: url.path, fileName: url.lastPathComponent)
            }
        })
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        imageButton.setTitle("", for: .normal)
        let tapGesture = UITapGestureRecognizer(target: self, action: #selector(self.dismissKeyboard (_:)))
        self.view.addGestureRecognizer(tapGesture)
        
        meetingViewModel?.chatDelegate = self
        if let msgs = dyteMobileClient?.chat.messages as? [DyteChatMessage] {
            messages = msgs
        }
        
        // setup delegates
        tableView.dataSource = self
        tableView.delegate = self
        messageTextView.delegate = self
        
        // initial setup
        messageContainerViewOriginalHeight = messageContainerView.frame.height
        sendMessageButton.isEnabled = false
        messageTextView.layer.cornerRadius = 16
        
        tableView.contentInset.bottom = messageContainerViewOriginalHeight
        tableView.verticalScrollIndicatorInsets.bottom = messageContainerViewOriginalHeight
        
        tableView.estimatedRowHeight = 60.0
        tableView.rowHeight = UITableView.automaticDimension
        
        // initialize variables
        messageTextViewOriginalYPosition = messageTextView.frame.origin.y
        messageTextViewOriginalHeight = messageTextView.frame.height
        
        messageTextView.textContainerInset.left = 6
        tableView.register(UINib(nibName: "MessageTableViewCell", bundle: nil), forCellReuseIdentifier: "MessageTableViewCell")

        tableView.reloadData()
        
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        startObservingKeyboardEvents()
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        stopObservingKeyboardEvents()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        
//        if messages.count > 1 {
//            // Scroll to the bottom :)
//            let indexPath = IndexPath(row: messages.count-1, section: 0)
//            tableView.scrollToRow(at: indexPath, at: UITableView.ScrollPosition.middle, animated: true)
//        }
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    // MARK: - Setup Keyboard Observers
    fileprivate func startObservingKeyboardEvents() {
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(ChatViewController.keyboardWillShow(_:)),
            name: UIResponder.keyboardWillShowNotification, object: nil)
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(ChatViewController.keyboardWillHide(_:)),
            name: UIResponder.keyboardWillHideNotification, object: nil)
    }
    
    fileprivate func stopObservingKeyboardEvents() {
        NotificationCenter.default.removeObserver(self, name: UIResponder.keyboardWillShowNotification, object: nil)
        NotificationCenter.default.removeObserver(self, name: UIResponder.keyboardWillHideNotification, object: nil)
    }
    
    // MARK: - Keyboard Observer Methods
    @objc fileprivate func keyboardWillShow(_ notification: Notification) {
        if let userInfo = notification.userInfo {
            if let keyboardSize: CGSize = (userInfo[UIResponder.keyboardFrameEndUserInfoKey] as AnyObject).cgRectValue?.size {
                
                self.keyboardHeight = keyboardSize.height
                
                UIView.animate(withDuration: 0.4, animations: {
                    self.tableView.contentInset.bottom = keyboardSize.height + self.messageContainerView.frame.height
                    self.tableView.verticalScrollIndicatorInsets.bottom = keyboardSize.height + self.messageContainerView.frame.height
                })
                
                // move up texview
                self.textViewBottomContraint.constant = keyboardSize.height
                self.view.layoutIfNeeded()
                
                if messages.count > 1 {
                    // scroll to bottom
                    let indexPath = IndexPath(row: messages.count-1, section: 0)
                    tableView.scrollToRow(at: indexPath, at: UITableView.ScrollPosition.middle, animated: true)
                }
            }
        }
    }
    
    @objc fileprivate func keyboardWillHide(_ notification: Notification) {
        tableView.contentInset.bottom = messageContainerViewOriginalHeight
        tableView.verticalScrollIndicatorInsets.bottom = messageContainerViewOriginalHeight
        
        self.textViewBottomContraint.constant = 0
        self.view.layoutIfNeeded()
    }
    
}


extension ChatViewController: UITableViewDataSource {
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return messages.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        if let cell = tableView.dequeueReusableCell(withIdentifier: "MessageTableViewCell", for: indexPath) as? MessageTableViewCell
        {
            cell.message = messages[indexPath.row]
            return cell
        }
        
        return UITableViewCell(frame: .zero)
    }
}


extension ChatViewController: UITableViewDelegate {
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
    }
    
}


extension ChatViewController: UITextViewDelegate {
    
    func textViewDidChange(_ textView: UITextView) {
        
        let spacing = CharacterSet.whitespacesAndNewlines
        if !messageTextView.text.trimmingCharacters(in: spacing).isEmpty {
            sendMessageButton.isEnabled = true
        } else {
            sendMessageButton.isEnabled = false
        }
        
        
        // TODO: - set max height
        
        let newSize = textView.sizeThatFits(CGSize(width: textView.frame.width, height: CGFloat.greatestFiniteMagnitude))
        realTextViewHeightConstraint.constant = newSize.height
        
        
        let difference = newSize.height - textView.frame.height
        tableView.contentInset.bottom += difference
        tableView.verticalScrollIndicatorInsets.bottom += difference
        
//        // This should not always be called.
//        if messages.count > 1 {
//            let indexPath = IndexPath(row: messages.count-1, section: 0)
//            tableView.scrollToRow(at: indexPath, at: UITableView.ScrollPosition.middle, animated: true)
//        }
        
    }
    
}


extension ChatViewController: ChatDelegate {
    func refreshMessages() {
        self.view.hideActivityIndicator()
        if let msgs = dyteMobileClient?.chat.messages as? [DyteChatMessage] {
            messages = msgs
        }
        
        if messages.count > 0 {
            tableView.reloadData(completion: {
                DispatchQueue.main.async { [weak self] in
                    let indexPath = IndexPath(row: (self?.messages.count ?? 1)-1, section: 0)
                        self?.tableView.scrollToRow(at: indexPath, at: .bottom, animated: true)
                    }
            })
        }
    }
}
    
