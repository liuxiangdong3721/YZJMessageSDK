//
//  KDNotificationHandle.h
//  kdweibo
//
//  Created by Gil on 2017/3/15.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDNotificationHandle : NSObject

+ (void)registerPushToken:(NSData *)token tokenVer:(NSString *)tokenVer;

//普通远程推送
+ (void)handleRemoteNotificationWhenActive:(NSDictionary *)userInfo;
+ (void)handleRemoteNotificationWhenInActive:(NSDictionary *)userInfo;

//PushKit远程推送
+ (void)handlePushKitRemoteNotificationWhenActive:(NSDictionary *)userInfo;
+ (void)handlePushKitRemoteNotificationWhenInActive:(NSDictionary *)userInfo;

//本地推送
+ (void)handleLocalNotificationWhenActive:(UILocalNotification *)notification;
+ (void)handleLocalNotificationWhenInActive:(UILocalNotification *)notification;

@end
