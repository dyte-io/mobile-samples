//
//  PollsViewController.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 01/09/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
import DyteiOSCore

class PollsViewController: UIViewController {
    
    var dyteMobileClient: DyteMobileClient?
    var meetingViewModel: MeetingViewModel?
    var questionTextView: UITextView!
    var optionOne: UITextField!
    var optionTwo: UITextField!
    private var options: [String]?
    
    @IBOutlet weak var stackView: UIStackView!
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var createNewPollButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        configureUI()
    }
    
    private func configureUI() {
        meetingViewModel?.pollDelegate = self
        createNewPollButton.isHidden = false
        tableView.register(UINib(nibName: "PollTableViewCell", bundle: nil), forCellReuseIdentifier: "PollTableViewCell")
    }
    
    @IBAction func createPollAction(_ sender: Any) {
        let storyBoard : UIStoryboard = UIStoryboard(name: "Storyboard", bundle:nil)
        let createPollViewController = storyBoard.instantiateViewController(withIdentifier: "CreatePollViewController") as! CreatePollViewController
        createPollViewController.dyteMobileClient = dyteMobileClient
        self.present(createPollViewController, animated:true, completion:nil)
    }
    
    @objc func saveButtonPressed() {
        
    }
}

extension PollsViewController: UITableViewDelegate, UITableViewDataSource {
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return dyteMobileClient?.polls.polls.count ?? 0
    }
    
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        if let cell = tableView.dequeueReusableCell(withIdentifier: "PollTableViewCell", for: indexPath) as? PollTableViewCell,
           (dyteMobileClient?.polls.polls.count ?? 0) > indexPath.row
        {
            cell.polll = dyteMobileClient?.polls.polls[indexPath.row]
            cell.configureUI()
            return cell
        }
        
        return UITableViewCell(frame: .zero)
    }
    
    
}

extension PollsViewController: PollDelegate {
    func refreshPolls(pollMessages: [DytePollMessage]) {
        tableView.reloadData()
    }
}
