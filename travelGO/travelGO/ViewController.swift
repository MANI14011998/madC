//
//  ViewController.swift
//  travelGO
//
//  Created by MANINDER SINGH on 09/11/19.
//  Copyright © 2019 MANINDER SINGH. All rights reserved.
//

import UIKit
import WebKit


class ViewController: UIViewController,WKNavigationDelegate {
    
     var webView: WKWebView!
    override func loadView() {
        webView = WKWebView()
        webView.navigationDelegate = self
        view = webView
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        let url = URL(string: "https://gochigang.herokuapp.com")!
        webView.load(URLRequest(url: url))
        webView.allowsBackForwardNavigationGestures = true
       
        // Do any additional setup after loading the view.
    }

}

