//
//  CellModel.h
//  SpringTour
//
//  Created by Tony on 15/9/29.
//  Copyright © 2015年 li hao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CellModel : NSObject

@property (nonatomic,copy) CGFloat (^CellHeight)(UITableView *tableView,NSIndexPath* indexPath);
@property (nonatomic,copy) UITableViewCell* (^Cell)(UITableView *tableView,NSIndexPath* indexPath);
@property (nonatomic,copy) void (^SelectRow)(UITableView *tableView,NSIndexPath* indexPath);

@end
