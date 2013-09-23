//
//  ViewController.h
//  Stopwatch
//
//  Created by Cornelius Carroll on 9/22/13.
//  Copyright (c) 2013 Cornelius Carroll. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *stopwatchLabel;
- (IBAction)onStartPressed:(id)sender;
- (IBAction)onStopPressed:(id)sender;

@end
