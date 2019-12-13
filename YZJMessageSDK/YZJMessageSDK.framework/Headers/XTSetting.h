//
//  XTSetting.h
//  XunTong
//
//  Created by Gil on 13-4-16.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>
#define kXTSettingQueueName "XTSetting.queue"

@interface XTSetting : NSObject

//工作圈名字上次更新时间
@property (nonatomic, copy) NSString *companyNameUpdateTime;

//会话列表时间线的最后更新时间
@property (nonatomic, copy) NSString *updateTime;
//会话组退出更新时间
@property (nonatomic, copy) NSString *groupExitUpdateTime;
//公共号模式下pubAccounts的更新时间
@property (nonatomic, strong) NSMutableDictionary *pubAccountsUpdateTimeDict;
//T9搜索的索引更新时间
@property (nonatomic, copy) NSString *t9UpdateTime;

@property (nonatomic, assign) BOOL isCreate;

//mCloud参数获取的更新时间
@property (nonatomic, strong) NSString *paramFetchUpdateTime;
//公共号更新时间
@property (nonatomic, strong) NSString *pubAcctUpdateTime;

//公共号列表跟新时间
@property (nonatomic, strong) NSString *appLastUpdateTime;

//企业已开通应用更新时间
@property (nonatomic, copy) NSNumber *companyOpenedAppLastUpdateTime;

//应用管理员权限更新时间
@property (nonatomic, copy) NSNumber *appAdminChangeLastUpdateTime;

// 人员状态更新时间
@property (nonatomic, copy) NSNumber *personStatusLastUpdateTime;

// 人员工作状态更新时间
@property (nonatomic, copy) NSNumber *personWorkStatusLastUpdateTime;

//推荐有礼更新时间
@property (nonatomic, copy) NSNumber *recommendCountLastUpadteTime;

// 外部好友推荐更新时间
@property (nonatomic, copy) NSNumber *extFriendRecommendLastUpdateTime;

// 云办公卡片更新时间
@property (strong, nonatomic) NSNumber *workbenchCardLastUpdateTime;

// 群组分类更新时间
@property (strong, nonatomic) NSNumber *groupClassifyLastUpdateTime;
@property (assign, nonatomic) BOOL groupClassifyNeedUpdate;

// 最新的查询分界待办id
@property (strong, nonatomic) NSString *todoSourceId;
// 最新的待办创建时间
@property (strong, nonatomic) NSNumber *todoCreateDate;
// 待办更新时间
@property (strong, nonatomic) NSNumber *toDoUpdateTime;

// 置顶公共号更新时间
@property (strong, nonatomic) NSNumber *forceTopPubAccLastUpdateTime;

// 签到配置信息更新时间
@property (nonatomic, strong) NSNumber *signInConfigChangedUpdateTime;

//日程通知信息更新时间
@property (nonatomic, strong) NSNumber *noticeDialogUpdateTime;

//获取外部群成员变动id更新时间
@property (nonatomic, strong) NSNumber *extGroupUserChangeUpdateTime;

//免扰模式最新更新时间
@property (nonatomic, strong) NSNumber *doNotDisturbUpdateTime;

//垮圈消息更新时间
@property (nonatomic, strong) NSNumber *crossNetworkMsgUpdateTime;

@property (nonatomic, strong) NSNumber *erpExtApplyUpdateTime;
@property (nonatomic, assign) BOOL shouldRequestErpInfo;

@property (nonatomic, strong) NSNumber *customTabUpdateTime;
@property (nonatomic, assign) BOOL shouldRequestCustomTabInfo;

@property (strong, nonatomic, readonly) NSString *openId;
@property (strong, nonatomic, readonly) NSString *eId;

@property (nonatomic, assign) BOOL foldPublicAccountPressed;

@property (nonatomic, strong) NSString *msgLastReadUpdateTime;

@property (nonatomic, assign) BOOL pressMsgUnreadTipsOrNot;

//勿扰模式
@property (nonatomic, assign) BOOL isDoNotDisturbMode;
//当前待办类别
@property (nonatomic, assign) int currentTodoType;

@property (nonatomic, strong) NSString *workBenchHeaderText;
@property (nonatomic, strong) NSString *workBenchHeaderAppJson;


+(XTSetting *)sharedSetting;

//设置，如不设，运行会报错
//切换登录账户时需要重新设置
- (void)setOpenId:(NSString *)openId eId:(NSString *)eId;
- (void)reset;
- (BOOL)saveSetting;
- (void)cleanSetting;
@end
