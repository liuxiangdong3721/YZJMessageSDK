//
//  GroupListDataModel.h
//  ContactsLite
//
//  Created by Gil on 12-12-10.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import "BOSBaseDataModel.h"
#import <UIKit/UIKit.h>

//组类型,1—双人组,2—多人组,3-公众号组,4-公众号多人组,5-组文件夹,6-消息通知组（不可回复）,7-无交互的公众号组
typedef enum _GroupType
{
    GroupTypeNone = 0,
    GroupTypeDouble = 1,
    GroupTypeMany = 2,
    GroupTypePublic = 3,
    GroupTypePublicMany = 4,
    GroupTypeSubGroup = 5,
    GroupTypeMessageNotification = 6,
    GroupTypePublicNoInteractive = 7,
    GroupTypeTodo = 8,
    GroupTypeRelation = 100,
}GroupType;

typedef NS_ENUM(NSUInteger, KDGroupLastMesageStatus) {
    KDGroupLastMesageStatusSuccess = 0,
    KDGroupLastMesageStatusSending,
    KDGroupLastMesageStatusFail,
};

//typedef NS_ENUM(NSInteger, KDAgoraMultiCallGroupType) {
//    KDAgoraMultiCallGroupType_none,
//    KDAgoraMultiCallGroupType_joined,
//    KDAgoraMultiCallGroupType_noJoined
//};
@class PersonSimpleDataModel;
@class RecordDataModel;
@interface GroupDataModel : BOSBaseDataModel

@property (nonatomic, copy, nullable) NSString *groupId;//组ID
@property (nonatomic, assign) GroupType groupType;//组类型
@property (nonatomic, copy, nullable) NSString *groupName;//组名称
@property (nonatomic, strong, nullable) NSMutableArray *participant;//参与人，PersonSimpleDataModel数组 （缓存获取）
@property (nonatomic, assign) int unreadCount;//未读数

//最后会话，只有网络解析的时候才有，数据库查询请使用lastMsgId、lastMsgSendTime、lastMsgDesc三个字段
@property (nonatomic, strong, nullable) RecordDataModel *lastMsg;


/*
 组状态
 二进制位表示，从低位到高位：
 0 是否在组里面
 1 是否推送
 2 是否置顶
 3 是否重要群组
 4 是否外部组
 5 是否有水印
 6 是否开启仅管理员添加成员
 7 是否群组管理员开启禁言
 8 是否开启禁止内部组转外部组
 9 是否开启仅群管理员修改群名称
 10 是否开启离职退群仅提醒管理员（已废弃）
 11 是否开启仅管理员可@所有人
 12 进群是否需要管理员同意
 13 新成员查看最近3天历史记录
 */
@property (nonatomic, assign) int status;

@property (nonatomic, strong, nullable) NSString *lastMsgId;
@property (nonatomic, strong, nullable) NSString *lastMsgSendTime;
@property (nonatomic, strong, nullable) NSString *lastMsgDesc;
//目前值为真实的最后一条消息，用来判断当前聊天是否需要更新
@property (nonatomic, strong, nullable) NSString *updateFlag;

@property (nonatomic, strong, nullable) NSString *inputStatus; // 本地db字段记录每个组的输入框选择状态, 有kInputStatusText， kInputStatusVoice两种状态

/// 最后一条消息发送状态
@property (nonatomic, assign) KDGroupLastMesageStatus lastMsgStatus;

@property (nonatomic,copy, nullable) NSString *updateTime;//额外的字段，记录每个会话的更新时间
@property (nonatomic, assign) BOOL fold;//是否参与文件夹折叠

@property (nonatomic, copy, nullable) NSString *draft; // 聊天草稿

@property (nonatomic, assign) int iNotifyType; // 提醒类型, 第0位: @提及， 1：新公告，2:进群申请
@property (nonatomic, copy, nullable) NSString *strNotifyDesc; // 提醒描述

@property (nonatomic, copy, nullable) NSString *headerUrl; //组头像
@property (nonatomic, strong, readonly, nullable) NSString *groupHeaderUrl; //用于显示的组头像
// extra property
@property (nonatomic, assign) BOOL isNewGroup;  //  是否是新建的组

@property (nonatomic, strong, nullable) NSMutableArray *participantIds;//参与人Ids
@property (nonatomic, assign, readonly) NSInteger participantCount;//实际的参与人人数
@property (nonatomic, strong, nullable) NSArray *managerIds;//管理员Ids
@property (nonatomic, strong, nullable) id param;//组参数

//用来做搜索高亮
@property (nonatomic, copy, nullable) NSAttributedString *highlightGroupNameAttr;
@property (nonatomic, copy, nullable) NSAttributedString *highlightMessageAttr;

////多人会议字段
//@property (nonatomic, assign) NSInteger mCallStatus;//多方通话的最新状态 1 会话存在   0 会话不存在
//@property (nonatomic, assign, readonly) NSTimeInterval lastMCallStartTimeInterval;//记录最新一次发起通话的时间
//@property (nonatomic, strong) NSString *mCallCreator;//发起人
//@property (nonatomic, strong) PersonSimpleDataModel *callCreator;
//@property (nonatomic, assign) NSInteger micDisable;//1：禁止发言 0：禁止发言解除
//@property (nonatomic, assign) NSInteger recordStatus;//录音状态（默认为0)

@property (nonatomic, strong, nullable) NSString *appUpdateTime;
@property (nonatomic, strong, nullable) NSString *extendUpdateTime;
@property (nonatomic, assign) NSInteger hasOtherUnread; // 是否有对方未读，默认0，没有，1有。本地数据
@property (nonatomic, copy, nullable) NSString *sortLastMsgSendTime; // 本地排序的依据
@property (nonatomic, copy, nullable) NSString *displaySendTimeInterval; // 显示用时间，为了优化反复dateFromString的性能损耗
    
@property (nonatomic, strong, nullable) NSString *lastCleanTime;
    
- (nullable NSString *)fetchDisplaySendTimeInterval; // 有displaySendTimeInterval则返回，没有则加工lastMsgSendTime并存库

- (nullable id)initWithParticipant:(nonnull PersonSimpleDataModel *)participant;
//- (id)initWithMeetingModel:(KDMeetingModel *)meetingModel;

- (nullable PersonSimpleDataModel *)firstParticipant;
- (nullable PersonSimpleDataModel *)participantForKey:(nonnull NSString *)key;

- (BOOL)chatAvailable;//是否具有聊天的权限
- (BOOL)actionAvailable;//是否具有操作的权限

- (BOOL)pushOpened;//是否打开了Push功能
- (void)togglePush;//切换Push规则

- (BOOL)isTop;//是否置顶
- (void)toggleTop; // 置顶或者取消置顶

- (BOOL)isFavorite;//是否已收藏
- (void)toggleFavorite;//收藏或者取消收藏

- (BOOL)bShowWatermark; //是否添加水印
- (void)toggleWatermark;//添加或取消水印

- (BOOL)isAddusermark; //是否开启管理员才能加人

- (BOOL)isDepGroup;//是否是部门群组
- (BOOL)isEntireGroup;//是否是全员群组
- (BOOL)isPublicGroup;
- (BOOL)isExternalGroup; //是否为外部组
- (BOOL)isCRMSynergyGroup; ///是协同空间成员(企联)

- (void)toggleAddusermark;//添加或取消是否开启管理员才能加人

- (BOOL)isOpenSilenced;     //是否管理员开启禁言
- (void)toggleOpenSilenced; //开启或关闭群组禁言

- (BOOL)isHasAddExtPermission; //是否开启禁止内部组转外部组
- (void)toggleExtPermission;   //开启或关闭群组禁言

- (BOOL)hasEditNamePermission;    //是否开启仅群管理员修改群名称,
- (void)toggleEditNamePermission;   //开启或关闭仅群管理员修改群名称

/// 是否开启群成员@all
- (BOOL)memberAtAll;
/// 开启或关闭群成员@all
- (void)toggleMemberAtAll;

/// 进群是否需要管理员审核
- (BOOL)isAdminAudit;
- (void)toggleAdminAudit;

/// 新成员可查看聊天记录
- (BOOL)historyMsg;
- (void)toggleHistoryMsg;

//当前用户是否是管理员
- (BOOL)isManager;

// 是否是云团
- (BOOL)isYZJGroup;

// 是否有@提及
- (BOOL)isNotifyTypeAt;

// 是否有新公告
- (BOOL)isNotifyTypeNotice;

// 是否进群申请
- (BOOL)isNotifyTypeInvite;

// 双人组参与人
- (nullable PersonSimpleDataModel *)groupDoubleParticipant;


//- (KDAgoraMultiCallGroupType)getAgoraMultiCallGroup;

- (nullable NSString *)getChannelId;
- (NSTimeInterval)getMCallStartTimeInterval;
- (nullable NSString *)lastMsgDescWithRecord:(nonnull RecordDataModel *)record;
- (void)asyncFirstParticipantWithCompletion:(void (^_Nonnull)(PersonSimpleDataModel * _Nonnull person))completion;

- (nullable NSArray *)sortedParticipantIds; // to md5


///用于显示的群组类型： 外部、全员、部门
- (nullable NSString *)titleOfGroupType;
///用于显示的群组类型颜色
- (nullable UIColor *)colorOfGroupType;


/**
获取组详情，从DB找，找不到调用groupInfo接口，还找不到报错

 @param groupId 组id
 @param completion 结果回调
 */
+ (void)fetchGroupByGroupId: (nonnull NSString *)groupId
                 completion: (void (^_Nonnull)(GroupDataModel * _Nonnull group))completion;
@end









