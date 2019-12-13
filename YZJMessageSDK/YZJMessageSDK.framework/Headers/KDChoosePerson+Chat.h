//
//  KDChoosePerson+Chat.h
//  kdweibo
//
//  Created by Scan on 2017/12/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (Chat)

+ (void)startChat:(UIViewController *)viewController;


/**
 @param isShowExt isShowExt 是否展示外部好友入口 默认YES
 */
+ (void)startChat:(UIViewController *)viewController isShowExt:(BOOL)isShowExt;

@end
