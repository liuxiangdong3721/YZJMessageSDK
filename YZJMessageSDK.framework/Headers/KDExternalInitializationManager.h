//
//  KDExternalInitializationManager.h
//  kdweibo
//
//  Created by Gil on 14-5-12.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PersonDataModel;
typedef void (^KDExternalInitializationCompletionBlock) (int count);
typedef void (^KDExternalInitializationFailedBlock) (NSString *error);

//外部好友数据变更通知
extern NSString* const kExternalFriendsChangedNotification;

@interface KDExternalInitializationManager : NSObject

+ (instancetype)sharedInitializationManager;

//开始初始化
- (void)startInitializeCompletionBlock:(KDExternalInitializationCompletionBlock)completionBlock
                           failedBlock:(KDExternalInitializationFailedBlock)failedBlock;

//是否正在进行初始化
- (BOOL)isInitializing;
//是否正在进行首次初始化
- (BOOL)isFirstInitializing;

//清除初始化标识
- (void)clearInitializationFlag;

// activeDatas.count <= updateDatas.count
- (void)startSynchronismExternalMobileContactComplete:(void(^)(BOOL isSccess, NSString *error, NSArray <PersonDataModel *>*updateDatas,NSArray <PersonDataModel *>*activeDatas))complete;
@end
