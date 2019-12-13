//
//  KDAPNSManager.h
//  kdweibo_common
//
//  Created by laijiandong on 12-9-6.
//  Copyright (c) 2012年 kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDAPNSManager : NSObject

//临时存储远程推送的信息(未启动之前)
@property (nonatomic, strong) NSDictionary *remoteNotificationInfo;
//临时存储本地推送的信息(未启动之前)
@property (nonatomic, strong) UILocalNotification *localNotification;
//是否需要弹出没权限的弹框引导用户去设置
@property (nonatomic, assign) BOOL needShowNoPermissionsAlert;

+ (instancetype)sharedAPNSManager;

- (BOOL)isRemoteNotificationEnable;
- (void)registerForRemoteNotification;
- (void)unregisterForRemoteNotification;

//应用启动时检测这次是否需求显示无权限提醒
- (void)checkNeedShowNotificateAlert;
//显示无通知权限的alert
- (void)showNoPermissionsAlert;
@end
