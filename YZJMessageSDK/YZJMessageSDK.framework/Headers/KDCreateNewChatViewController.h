//
//  KDCreateNewChatViewController.h
//  kdweibo
//
//  Created by kyle on 2016/11/29.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ReturnBlock)(GroupDataModel *newGroup);

@class GroupDataModel, KDChooseSelectedView;

@interface KDCreateNewChatViewController : UIViewController

@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, copy) ReturnBlock returnBlock;

@property (nonatomic, strong) KDChooseSelectedView *selectPersonsView;

- (void)returnNewGroup:(ReturnBlock)block;

@end
