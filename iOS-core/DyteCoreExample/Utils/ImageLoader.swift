//
//  ImageLoader.swift
//  iosApp
//
//  Created by Shaunak Jagtap on 22/08/22.
//  Copyright © 2022 orgName. All rights reserved.
//

import UIKit
final class ImageLoader {

    var task: URLSessionDownloadTask!
    var session = URLSession(configuration: .default)
    var cache: NSCache<NSString, UIImage>!
    static let shared = ImageLoader()
    private init(){
        session = URLSession.shared
        self.cache = NSCache()
    }

    func obtainImageWithPath(imagePath: String, completionHandler: @escaping (UIImage) -> ()) {
        if let image = self.cache.object(forKey: imagePath as NSString) {
            DispatchQueue.main.async {
                completionHandler(image)
            }
        } else {
            guard let placeholder = UIImage(systemName: "photo.artframe") else { return }
            DispatchQueue.main.async {
                completionHandler(placeholder)
            }
            if let url = URL(string: imagePath) {
                task = session.downloadTask(with: url, completionHandler: { (location, response, error) in
                    if let data = try? Data(contentsOf: url) {
                        if let img = UIImage(data: data) {
                            self.cache.setObject(img, forKey: imagePath as NSString)
                            DispatchQueue.main.async {
                                completionHandler(img)
                            }
                        } else {
                            print(Constants.errorLoadingImage)
                        }
                    }
                })
                task.resume()
            } else {
                print(Constants.errorLoadingImage)
            }
        }
    }
}
