//
//  TableViewCell.h
//  TableViewWIthCoreData
//
//  Created by Omar Faruqe on 2016-01-17.
//  Copyright © 2016 Omar Faruqe. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "ToDoEntity.h"

@interface TableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *cellLabel;

- (void) setTitle:(ToDoEntity*)incoming;
@end
