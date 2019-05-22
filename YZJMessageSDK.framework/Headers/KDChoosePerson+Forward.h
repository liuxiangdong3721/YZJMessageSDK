//
//  KDChoosePerson+Forward.h
//  kdweibo
//
//  Created by Scan on 2017/11/22.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

#import "KDChoosePersonConfig.h"

@class XTForwardDataModel,XTShareDataModel;

@interface KDChoosePerson (Forward)

/** 转发创建新聊天 */
+ (void)forwardCreateChat:(UIViewController *)viewController forwardData:(XTForwardDataModel *)forwardData shareData:(XTShareDataModel *)shareData canShowExtFriend:(BOOL)canShowExtFriend complete:(void(^)(GroupDataModel *, NSArray *))complete;

+ (void)forwardMultSelect:(UIViewController *)viewController forwardData:(XTForwardDataModel *)forwardData shareData:(XTShareDataModel *)shareData showExtGroup:(BOOL)showExtGroup complete:(void(^)(GroupDataModel *, NSArray *))complete;

+ (void)forwardPushToSelectPerson:(UIViewController *)viewController forwardData:(XTForwardDataModel *)forwardData shareData:(XTShareDataModel *)shareData canShowExtFriend:(BOOL)canShowExtFriend selectedPersons:(NSArray <NSString *>*)personIds range:(NSArray <NSString *>*)range complete:(void(^)(GroupDataModel *, NSArray *))complete;

@end
