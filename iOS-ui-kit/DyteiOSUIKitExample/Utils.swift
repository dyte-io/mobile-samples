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
            container.tag = 11
            let activityView = UIActivityIndicatorView()
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
