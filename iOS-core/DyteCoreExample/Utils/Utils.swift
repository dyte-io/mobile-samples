//
//  Utils.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 06/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit

extension UIView {
    
    func blink() {
        self.alpha = 0.2
        UIView.animate(withDuration: 1, delay: 0.0, options: [.curveLinear, .repeat, .autoreverse], animations: {self.alpha = 1.0}, completion: nil)
    }
    
    func stopBlink() {
        self.layer.removeAllAnimations()
    }
    
    func showActivityIndicator() {
        DispatchQueue.main.async {
            let container: UIView = UIView()
            container.frame = self.bounds // Set X and Y whatever you want
            container.backgroundColor = .black
            container.tag = 11
            let activityView = UIActivityIndicatorView(style: .medium)
            activityView.tag = 12
            activityView.center = self.center
            container.addSubview(activityView)
            self.addSubview(container)
            activityView.startAnimating()
        }
    }
    
    func hideActivityIndicator() {
        DispatchQueue.main.async {
            if let activityView = self.viewWithTag(12) as? UIActivityIndicatorView, let container = self.viewWithTag(11) {
                activityView.stopAnimating()
                container.removeFromSuperview()
            }
        }
    }
}

class Utils {

    static func displayAlert(defaultActionTitle: String? = "OK", alertTitle: String, message: String) {

        let alertController = UIAlertController(title: alertTitle, message: message, preferredStyle: .alert)
        let defaultAction = UIAlertAction(title: defaultActionTitle, style: .default, handler: nil)
        alertController.addAction(defaultAction)

        guard let viewController = UIApplication.shared.windows.first?.rootViewController else {
            fatalError("keyWindow has no rootViewController")

        }

        viewController.present(alertController, animated: true, completion: nil)
    }

}

public extension UITableView {

    func reloadData(completion: @escaping () -> ()) {
        UIView.animate(withDuration: 0, animations: {
            self.reloadData()
        }, completion: { _ in
            completion()
        })
    }
    
    func scrollToFirstCell() {
        if numberOfSections > 0 {
            if numberOfRows(inSection: 0) > 0 {
                scrollToRow(at: IndexPath(row: 0, section: 0), at: .top, animated: true)
            }
        }
    }

    func scrollToLastCell(animated: Bool) {
        if numberOfSections > 0 {
            let nRows = numberOfRows(inSection: numberOfSections - 1)
            if nRows > 0 {
                scrollToRow(at: IndexPath(row: nRows - 1, section: numberOfSections - 1), at: .bottom, animated: animated)
            }
        }
    }

    func stopScrolling() {
        guard isDragging else {
            return
        }
        var offset = self.contentOffset
        offset.y -= 1.0
        setContentOffset(offset, animated: false)

        offset.y += 1.0
        setContentOffset(offset, animated: false)
    }

    func scrolledToBottom() -> Bool {
        return contentOffset.y >= (contentSize.height - bounds.size.height)
    }
}

extension UIButton {
    
    func centerVertically(padding: CGFloat = 6.0) {
        guard
            let imageViewSize = self.imageView?.frame.size,
            let titleLabelSize = self.titleLabel?.frame.size else {
            return
        }
        
        let totalHeight = imageViewSize.height + titleLabelSize.height + padding
        
        self.imageEdgeInsets = UIEdgeInsets(
            top: -(totalHeight - imageViewSize.height),
            left: 0.0,
            bottom: 0.0,
            right: -titleLabelSize.width
        )
        
        self.titleEdgeInsets = UIEdgeInsets(
            top: 0.0,
            left: -imageViewSize.width,
            bottom: -(totalHeight - titleLabelSize.height),
            right: 0.0
        )
        
        self.contentEdgeInsets = UIEdgeInsets(
            top: 0.0,
            left: 0.0,
            bottom: titleLabelSize.height,
            right: 0.0
        )
    }
    
}

extension UIViewController {
    func showNormalAlert(withTitle title: String, havingMessage message: String, andDefaultAction defaultActionTitle: String = "OK") {
        let normalAlert = UIAlertController(title: title, message: message, preferredStyle: .alert)
        normalAlert.addAction(UIAlertAction(title: defaultActionTitle, style: .default))
        self.present(normalAlert, animated: true, completion: nil)
    }
}
