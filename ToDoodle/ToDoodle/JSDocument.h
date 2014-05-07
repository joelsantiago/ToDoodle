//
//  JSDocument.h
//  TahDoodle
//
//  Created by Joel Santiago on 8/10/13.
//  Copyright (c) 2013 Joel Santiago. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface JSDocument : NSDocument <NSTableViewDataSource>
{
    NSMutableArray *todoItems;
    IBOutlet NSTableView *itemTableView;
    IBOutlet NSButton *deleteButton;
}
- (IBAction)createNewItem:(id)sender;
- (IBAction)deleteSelectedItem:(id)sender;

@end
