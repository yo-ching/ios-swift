//
//  WrexegramViewController.swift
//  YoChing
//
//  Created by Juan Wellington Moreno on 11/11/15.
//  Copyright © 2015 Gary.com. All rights reserved.
//

import AromaSwiftClient
import Foundation
import UIKit

class WrexagramViewController : UIViewController {
    
    @IBOutlet weak var navTitle: UILabel!
    @IBOutlet weak var wrexegramImage: UIImageView!
    @IBOutlet weak var textView: UITextView!
    @IBOutlet weak var webView: UIWebView!
    
    var wrexagramNumber: Int = -1
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        guard wrexagramNumber > 0 else {
            self.parentViewController?.dismissViewControllerAnimated(true, completion: nil)
            return
        }
        
        navTitle.text = "Wrexagram \(wrexagramNumber)"
        
        let formattedOutcome = String(format: "wrexagram%02d", wrexagramNumber)
        let filename = "html/\(formattedOutcome)"
        
        if let image = UIImage(named: filename) {
            wrexegramImage.image = image
        }
                
        if let html = NSBundle.mainBundle().pathForResource(filename, ofType: "html") {
            do {
                let htmlString = try String(contentsOfFile: html, encoding: NSUTF8StringEncoding)
                webView.loadHTMLString(htmlString, baseURL : NSURL.fileURLWithPath(NSBundle.mainBundle().bundlePath))
            } catch let ex {
                AromaClient.begin()
                    .withTitle("Operation Failed")
                    .withBody("\(ex)\n\(UIDevice.currentDevice().name)")
                    .send()
            }
        }
    }
    
}