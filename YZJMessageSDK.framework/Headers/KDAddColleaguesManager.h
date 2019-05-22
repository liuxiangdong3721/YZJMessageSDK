//
//  KDAddColleaguesManager.h
//  kdweibo
//
//  Created by Gil on 15/6/9.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


static const NSString *kAllowOtherAddMeError = @"1000";
static const NSString *kAddMeNeedCheckError  = @"1001";

@class KDRemarkModel;
@interface KDExContactModel : NSObject

@property (nonatomic, copy) NSString *phone;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *exId;
@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, copy) NSString *inviteType;
@property (nonatomic, assign) BOOL isFromQRScan;
@property (nonatomic, strong) KDRemarkModel *remark;
@property (nonatomic, copy) NSString *perSpaceInviteType;
@end


typedef NS_ENUM(NSUInteger, KDAddColleaguesMethod) {
    KDAddColleaguesByPhone,     //手机号
    KDAddColleaguesByContact,   //通讯录
    KDAddColleaguesByWeChat,    //微信
    KDAddExtFriendByJSB,        //JS桥添加
    KDAddColleaguesByQR,        // 二维码添加
};

typedef void (^KDRequestCompleteBlock)(KDRequest *request, BOSResultDataModel *result);

typedef void (^KDAddColleaguesGetShortLinkDidCompleteBlock)(BOOL success, NSDictionary *result);
typedef void (^KDAddColleaguesGetRecommendsDidCompleteBlock)(BOOL success, NSArray *users);
typedef void (^KDCanAddExContactDidCompleteBlock)(BOOL success , KDError *error);
typedef void (^KDYJZUserDidCompleteBlock)(BOOL success ,BOOL isYJZUsr, NSString *error);
typedef void (^KDAddExContactDidCompleteBlock)(BOOL success , NSString *userId ,KDError *error);
typedef void (^KDAddExContactByJSBDidCompleteBlock)(BOOL success , PersonDataModel *person ,KDError *error);
typedef void (^KDCreateUnverifieduserextDidCompleteBlock)(BOOL success, NSString *userId , NSString *error);

@interface KDAddColleaguesManager : NSObject

+ (instancetype)sharedAddColleaguesManager;

@property (nonatomic, copy) NSString *inviteSource;


- (BOOL)isAdmin;

- (BOOL)checkPermission:(BOOL)shouldAlert;

- (void)getShortLinkWithHub:(BOOL)needHub
               hubHideDelay:(BOOL)hubHideDelay
                      phone:(NSString *)phone
                       name:(NSString *)name
                     method:(KDAddColleaguesMethod)method
              completeBlock:(KDAddColleaguesGetShortLinkDidCompleteBlock)completeBlock;


// hud 都不显示 统一由 VC 显示
- (void)canAddWithAccountByExid:(NSString *)exid orPhone:(NSString *)phone compelteBlock:(KDCanAddExContactDidCompleteBlock)block;

- (void)getRecommendsCompleteBlock:(KDAddColleaguesGetRecommendsDidCompleteBlock)completeBlock;

- (void)getExContactWithPhone:(NSString *)phone
                         name:(NSString *)name
                        extid:(NSString *)extId
                      groupId:(NSString *)groupId
                   inviteType:(NSString *)inviteType
                completeBlock:(KDAddExContactDidCompleteBlock)completeBlock;

- (void)getExContactWithPhone:(NSString *)phone
                         name:(NSString *)name
                        extid:(NSString *)extId
                      groupId:(NSString *)groupId
                   inviteType:(NSString *)inviteType
           perSpaceInviteType:(NSString *)perSpaceInviteType
                completeBlock:(KDAddExContactDidCompleteBlock)completeBlock;

- (void)getExContactWithPhone:(NSString *)phone
                         name:(NSString *)name
                        extid:(NSString *)extId
                      groupId:(NSString *)groupId
                   inviteType:(NSString *)inviteType
                 isFromQRScan:(BOOL)isFromQRScan
                completeBlock:(KDAddExContactDidCompleteBlock)completeBlock;

- (void)getExContactByJSBWithPhone:(NSString *)phone
                         name:(NSString *)name
                        extid:(NSString *)extId
                      groupId:(NSString *)groupId
                completeBlock:(KDAddExContactByJSBDidCompleteBlock)completeBlock;

- (void)getCreateUnverifieduserextWithphone:(NSString *)phone
                                name:(NSString *)name
                              regSourceType:(NSString *)regSourceType
                       completeBlock:(KDCreateUnverifieduserextDidCompleteBlock)completeBlock;

- (void)getYZJUserWithPhone:(NSString *)phoneNumber completeBlock:(KDYJZUserDidCompleteBlock)completeBlock;


- (void)inviteEventWithType:(NSString *)inviteType;

// 没有手机号去添加外部好友，
- (void)addExtPersonWithNoPhoneByExtIds:(NSString *)exids inviteFrom:(NSString *)inviteFrom inviteType:(NSString *)inviteType groupid:(NSString *)groupid completeBlock:(KDRequestCompleteBlock)completeBlock;

- (void)getExtContactAfterCanAddWithPhone:(NSString *)phone
                                     name:(NSString *)name
                                    extid:(NSString *)extId
                                  groupId:(NSString *)groupId
                               inviteType:(NSString *)inviteType
                       perSpaceInviteType:(NSString *)perSpaceInviteType
                            completeBlock:(KDAddExContactDidCompleteBlock)completeBlock;


@end
