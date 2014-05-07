//
//  JSAppDelegate.h
//  iTahDoodle
//
//  Created by Joel Santiago on 8/10/13.
//  Copyright (c) 2013 SofDev Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

// Declare a helper function that we will use to get a path to the location on disk where we can save the to-do list
NSString *docPath(void);

@interface JSAppDelegate : UIResponder
<UIApplicationDelegate, UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;
    
    NSMutableArray *tasks;
}

- (void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;

@end
