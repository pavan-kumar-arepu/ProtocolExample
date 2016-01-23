//
//  ViewController.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *myOwnTableView;



@end

