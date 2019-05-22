//
//  XTChatDetailNewViewController.h
//  kdweibo
//
//  Created by kyle on 16/10/9.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XTModifyGroupNameViewController.h"
#import "XTChatViewController.h"

@class GroupDataModel;

@interface XTChatDetailNewViewController : UIViewController<XTModifyGroupNameViewControllerDelegate>

@property (nonatomic, assign) BOOL isQuickSetImportantGroup;
@property (nonatomic, weak) XTChatViewController *chatViewController;

- (id)initWithGroup:(GroupDataModel *)group;

@end
