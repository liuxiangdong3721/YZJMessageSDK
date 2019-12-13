//
//  XTGroupTimelineViewController.h
//  XT
//
//  Created by Gil on 13-7-24.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XTGroupTimelineViewController : UIViewController <UITableViewDataSource,UITableViewDelegate, UISearchBarDelegate>

@property (nonatomic, strong) NSString *searchKeyWords;

@property (nonatomic, copy) void(^didSelectGroupBlock)(XTGroupTimelineViewController *vc, GroupDataModel *group);

- (id)initWithisExtenalGroup:(BOOL)isExt;

@end
