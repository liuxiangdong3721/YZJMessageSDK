//
//  KDNotificationChannelCenter.h
//  kdweibo
//
//  Created by Gil on 15/12/1.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KDAPPNoticeModel;

extern NSString *const _Nonnull KDNotificationChannelNewMessage;
extern NSString *const _Nonnull KDNotificationChannelExternalNewMessage;
extern NSString *const _Nonnull KDHasExitGroupNotification;
extern NSString *const _Nonnull KDNotificationChannelChangeCompanyInfo;
extern NSString *const _Nonnull KDNotificationRelationNewMessage;
extern NSString *const _Nonnull KDNotificationUpdatePersonStatus;
extern NSString *const _Nonnull KDNotificationExtFriendRecommend;
extern NSString *const _Nonnull KDNotificationGroupClassify;


@interface KDNotificationChannelCenter : NSObject

+ (nonnull instancetype)defaultCenter;

- (void)startChannel;
- (void)closeChannel;

- (void)startLongLinkChannel;

- (void)reportEnterForeground;
- (void)reportEnterBackground;

- (BOOL)isPollingChannel;
- (BOOL)isMercChannel;

- (void)handleCrash;

//登出
- (void)logout:(NSString *_Nonnull)error
          data:(id _Nullable )data;


/**
 目前 仅限merc连接使用

 @param msg msg
 @param succBlock succBlock
 @param failBlock failBlock
 */
- (BOOL)sendMsg:(NSString * _Nonnull)msg
        withCGI:(NSString * _Nonnull)cgi
        success:(void (^_Nullable)(NSString * _Nullable) )succBlock
        failure:(void (^_Nullable)(NSError * _Nullable))failBlock;

/*
 是否可以通过mars发消息
 */
- (BOOL)canMercSendMsg;

/**
 目前 仅限merc连接使用
 
 @param msg msg 字典，方法内转json
 @param succBlock succBlock
 @param failBlock failBlock
 */
- (BOOL)sendMsgDict:(NSDictionary * _Nonnull)msgDict
        withCGI:(NSString * _Nonnull)cgi
        success:(void (^_Nullable)(NSString * _Nullable) )succBlock
        failure:(void (^_Nullable)(NSError * _Nullable))failBlock;

///显示下一个日程的通知
- (void)showNextScheduleNotification;
///移除所有通知列表
- (void)removeAllScheduleNotificationList;
- (void)removeScheduleNotificationModel:(KDAPPNoticeModel * _Nonnull)model;
- (void)addScheduleNotificationModel:(KDAPPNoticeModel * _Nonnull)model;

@end
