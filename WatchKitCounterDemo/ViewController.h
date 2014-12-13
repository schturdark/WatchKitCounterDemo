//
//  ViewController.h
//  WatchKitCounterDemo
//
//  Created by Valent Richie on 13/12/14.
//  Copyright (c) 2014 Valent Richie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource>

@property (strong, nonatomic) NSMutableArray *counterData;
@property (weak, nonatomic) IBOutlet UITableView *mainTableView;

@end

