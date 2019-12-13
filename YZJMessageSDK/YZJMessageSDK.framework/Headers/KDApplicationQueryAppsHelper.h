//
//  KDApplicationQueryAppsHelper.h
//  kdweibo
//
//  Created by janon on 15/1/14.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppsClient;
@class GroupDataModel;
@class XTmenuModel;
@class XTMenuEachModel;
@class ContactClient;
@class GroupListDataModel;
@class RecordListDataModel;

static NSString * const kAppManagePrivilegeDidChangeNotificaiton = @"AppManagePrivilegeDidChangeNotificaiton";
static NSString * const kAppNoPermissionToAddApp = @"AppNoPermissionToAddApp";

@interface KDApplicationQueryAppsHelper : NSObject

+ (KDApplicationQueryAppsHelper *)shareHelper;

- (void)checkAppLastUpdateTime:(NSString *)appLastUpdateTime;

- (void)checkCompanyOpenedAppLastUpdateTime:(NSNumber *)openAppLatUpdateTime;

- (void)checkAppManageLastUpdateTime:(NSNumber *)appManageLastUpdateTime;

- (void)queryAppsList;                                                      //V5.0上传全部本地应用的时候用到
- (void)queryWhenChangeWorkPlaceAndLogin;                                   //切换团队和登陆时候用到
- (void)queryAppListForKingdeeLocal;                                        //签 任 文 部 扫，参数从网络来，检查跟新，应用页签出现的时候使用

- (void)checkUserDefaultForAppBeingAddWithOutNetWork;

- (void)checkUserDefaultForAppBeenDeletedWithoutNetWork;

- (void)makeNoteWhenMenuBtnClickedWithGroup:(GroupDataModel *)group
                                  EachModel:(XTMenuEachModel *)each;

- (void)makeNoteWhenMenuBtnClickedWithGroup:(GroupDataModel *)group
                                  MenuModel:(XTmenuModel *)record;

- (void)makeNoteForPubAccountMsgClickedWithPubId:(NSString *)pubId
                                           MsgId:(NSString *)msgId;         //公共号，点击消息埋点
- (void)makeNoteForPubAccountBtnClickedWithPubId:(NSString *)pubId
                                          MenuId:(NSString *)menuId;        //公共号，点击按钮埋点



- (void)makeNoteWhenAppClickedWithAppDataModel:(KDAppDataModel *)model;     //点击app埋点
- (void)todoMsgStateChangeWithSourceMsgId:(NSString *)sourceMsgId           //readState doneState有三种状态YES NO 和nil,如果是nil根本不要那个字段
                                 PersonId:(NSString *)personId
                                ReadState:(BOOL)readstate                   //带sourceId的代办的状态改变
                                DoneState:(BOOL)doneState;                  //代办首条消息的埋点也包含在内

- (void)queryEnterOpenedApp;                                                //查询本企业开通应用

- (void)commentOnYZJWebSite;                                                //连续两天登录引导用户去下载链接评论

- (void)getMessageUnreadList;                                               //获取消息已读未读的列表
- (void)getExtMessageUnreadList; // 获取外部已读未读
- (void)getUnreadCountDetailWithGroupId:(NSString *)groupId
                                  MsgId:(NSString *)msgId;                  //消息已读未读获取消息详情

/**
 *  发送应用排序
 */
- (void)postAppOrderWithAppOrderArrayString:(NSString *)orderArray style:(NSInteger)style completeHandle:(void(^)(BOOL success, NSString *error))completeHandle;


/// 查询应用管理权限信息
- (void)queryAppManagePrivilege;

@end
