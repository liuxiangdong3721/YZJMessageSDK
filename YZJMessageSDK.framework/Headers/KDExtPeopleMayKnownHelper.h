//
//  KDExtPeopleMayKnownFetchHelper.h
//  kdweibo
//
//  Created by sevli on 16/10/17.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDPeopleMayKnownModel.h"

@interface KDExtPeopleMayKnownHelper : NSObject

+ (KDExtPeopleMayKnownHelper *)sharedHelper;

// 获取可能认识的人列表
- (void)getPeopleMayKnowListCompletion:(void(^)(BOOL success, NSString *error, NSArray *infoArr))completion;

// 忽略
- (void)ignorePeopleMayKnownWithPerson:(KDPeopleMayKnownModel *)person
                            completion:(void(^)(BOOL success, NSString *error))completion;

// 通讯录页签是否有红点
+ (BOOL)bShowUnreadCountViewInContactVC;

+ (void)clearUnreadCount;

// 7天检测一次
+ (BOOL)extFriendNeedCheckDevice;

@end
