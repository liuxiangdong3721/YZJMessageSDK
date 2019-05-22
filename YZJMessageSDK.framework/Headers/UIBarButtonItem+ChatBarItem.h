//
//  UIBarButtonItem+ChatBarItem.h
//  kdweibo
//
//  Created by Scan on 2018/9/7.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (ChatBarItem)

+ (UIBarButtonItem * _Nullable)kd_makeChatItemWithGroup:(nullable GroupDataModel *)group
                                                 target:(nullable id)target
                                                 action:(nullable SEL)action;
+ (UIBarButtonItem * _Nullable)kd_makeChatItemOnlyHeaderWithGroup:(nullable GroupDataModel *)group
                                                           target:(nullable id)target
                                                           action:(nullable SEL)action;

@end
