//
//  BOSSetting.h
//  Public
//
//  Created by Gil on 12-4-27.
//  Edited by Gil on 2012.09.11
//  Copyright (c) 2012年 Kingdee.com. All rights reserved.
//

/*
 应用程序数据存储类，具体的应用可继承此类增加特有的属性
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KDPhoneInputType)
{
    KDPhoneInputTypeUndefine = 0,
    KDPhoneInputTypeBind,               // 绑定手机号
    KDPhoneInputTypeUpdatePhoneAccount, // 更换手机号
    KDPhoneInputTypeTrustDevice,        // 可信设备验证
    KDPhoneInputTypeTrustDeviceAndLogin,// 可信设备验证并登录
};

// 登陆状态
typedef NS_ENUM (NSInteger, KDLoginViewType) {
    KDLoginViewTypeUndefine = 0,
    KDLoginViewTypeEmailInput,              // 邮箱登录
    KDLoginViewTypePhoneNumber,             // 手机号码登陆
    KDLoginViewTypeYoushang,                // 友商网登录
    KDLoginViewTypeThirdPart,               // 第三方登陆
};

// 自动登陆方式
typedef enum : NSUInteger {
    KDAutoLoginTypeNone = 0,
    KDAutoLoginTypeToken,                   // 部落，wps登陆
    KDAutoLoginTypeNormal,                  // 新用户注册成功|友商网
    KDAutoLoginTypeH5Wechat,                // H5Wechat
    KDAutoLoginTypeTempToken,               // 可信设备
    KDAutoLoginTypeWechat,                  // 微信
} KDAutoLoginType;



#define kSettingFileName @"BOSSetting.archive"
#define kBOSSettingQueueName "BOSSetting.queue"


extern NSString * kBOSSettingParamChangedNotification;
extern NSString * kBOSSettingChannelChangedNotification;

enum {
    // 通讯录A方案，显示所有联系人，默认
    ContactStyleShowAll      = 0,
    // 通讯录B方案，显示最近联系人
    ContactStyleShowRecently = 1
}; typedef NSUInteger ContactStyle;

typedef NS_ENUM(int, KDSettingConnect) {    // 注意 这里的值不可变 by qd
    KDSettingConnectDefault = 0,
    KDSettingConnectMerc = 1,   // mars
    KDSettingConnectPolling = 2,    // 轮询
} ;

typedef enum : NSUInteger {
    KDContactPhoneStyleFreeCall = 0, //0：免费电话 默认0
    KDContactPhoneStylePhoneCall, //1：手机拨号
    KDContactPhoneStyleBoth,// 2：免费电话和手机拨号可选
} KDContactPhoneStyle;

typedef enum : NSUInteger {
    KDChooseSelectedBottomDefault = 0, //默认是已人来排序的
    KDChooseSelectedBottomCountDisplay, //1：显示已选多少人
} KDChooseSelectedBottomStyle;


//需要保存的数据
@interface BOSSetting : NSObject {
    
}


// 当前登陆模式
@property (nonatomic, assign) KDLoginViewType currentLoginType;
@property (nonatomic, assign) KDLoginViewType tempLoginType;     // 不做缓存
@property (nonatomic, assign) BOOL bShowCreateHTML;  // 显示创建团队成功网页
@property (nonatomic, copy) NSString *createCompanyEid;
@property (nonatomic, assign) BOOL bCreateCompanyFromSchema; // 从个人空间 通讯录入口穿件的团队 不要介绍页

//客户3g号
@property (nonatomic,copy) NSString *cust3gNo;
//客户名称
@property (nonatomic,copy) NSString *customerName;
//用户名,文本框中输入的用户名
@property (nonatomic,copy) NSString *userName;

//2015.4.5 Gil
//密码，写入时加密，取出时已解密
@property (nonatomic,copy) NSString *password;

//当前登录用户的openid
@property (nonatomic,copy) NSString *openId;
@property (nonatomic,copy) NSString *userId;
//since 3.0
//应用参数
@property (nonatomic,strong) NSDictionary *params;

//本次登录的opentoken
@property (nonatomic,copy) NSString *openToken;

//本地标识
@property (assign, nonatomic) BOOL localIgnoreTrustedDevice;

@property (nonatomic, copy) NSString *networkSubType;
// 个人空间标示
@property (nonatomic, assign, readonly) BOOL isPersonalNetwork;

@property (nonatomic, assign) BOOL isOpenSound;//打开声音
@property (nonatomic, assign) BOOL isOpenVibrate;//打开振动

@property (nonatomic, assign) BOOL isNotFirstCreatDept;//第一次进入部门群组设置
///是否打开了专心模式
@property (nonatomic, assign) BOOL isAttentionModel;
///是否打开了云之家专属提示音
@property (nonatomic, assign) BOOL isOpenYzjExclusiveNoticeVoice;
/// 工作台IP
@property (nonatomic, copy) NSString *workbenchURL;

/// 是否预拉取消息
@property (nonatomic, assign, readonly) BOOL isPrefetchMessage;

/*2
 @desc 获取BOSSetting单例对象 (deprecated);
 deprecated since 3.0
 使用< +(BOSSetting *)sharedSetting >方法替代
 @return BOSSetting;
 */
+(BOSSetting *)getSetting __attribute__((deprecated));
+(BOSSetting *)sharedSetting;

/*
 @desc 保存配置文件;
 @return 是否成功;
 */
- (BOOL)saveSetting;
/*
 @desc 清除登录配置信息并保存;
 @return void;
 */
- (void)clearSetting;

- (void)loadSetting;

//是否具有邀请权限
- (BOOL)hasInvitePermission;
//是否开通EPR集成服务
- (BOOL)isIntergrationMode;
//邀请是否需要管理员审核
- (BOOL)isInviteApprove;
//通讯录AB方案风格
- (ContactStyle)contactStyle;
//智能待办重要不重要灰度按钮
- (BOOL)isAITodorecommend;
///群组右上角是否显示的灰度开关
- (BOOL)isInGroupSearchIconOpen;
//是否打开新版直播
- (BOOL)isV2Live;


//机密人员
- (BOOL)secretOrg;
- (BOOL)freeCallEnable;
- (BOOL)groupTalkEnable;
- (BOOL)fileShareEnable;
- (BOOL)isWPSFeature;
- (BOOL)isWPSView;

- (KDSettingConnect)connectChannelType;
- (void)setConnectChannelType:(KDSettingConnect)type;

- (BOOL)enterVerified;
- (BOOL)waterMarkEnable;
- (void)setWaterMarkEnable:(BOOL)waterMarkEnable;
/**获取轻应用新用户引导人数限制*/
- (NSInteger)getLightAppControlNumber;
- (BOOL)takeScreenshotEnable; // 是否开启了截屏
/// 应用页签自定义名称
- (NSString *)appTabName;
/// 我界面隐藏同事圈参数
- (NSInteger)hiddenTSQ;
/// 是否显示应用页签分类按钮
- (BOOL)isShowAppCategory;
/// 应用页签分类模式 0:分类;1:经典
- (NSInteger)isAppShowMode;
/// 是否显示应用页签底部企业应用Cell
- (BOOL)isShowAppPlus;
/// 启用新闪屏效果
- (BOOL)isNewSplash;
// CRM客户入口
- (BOOL)addressCustomerEnabled;
//部门群组
- (BOOL)showDeptGroup;
//推荐有礼入口
- (BOOL)isShowRecommendGift;

- (NSTimeInterval)withdrawDuration; // 消息撤回的时限
- (BOOL)isShowMedal ;//是否开启签到勋章
- (NSString *)V8_CRM_UserExtId; // V8演示显示微订货用户外部id，如果是此id所在双人组，或以此id为管理员的多人组，聊天加号菜单有微订货的入口

- (BOOL)kdYunPanEnable;         //文件选择灰度开关值
- (BOOL)kdYunPanJsEnable;       //新文件选择桥灰度开关值

- (BOOL)isPushKitLaunch;

//组织架构父部门成员与子部门的排序，默认为：0:父部门成员在上，子部门在下 1：子部门在上，父部门成员在下
- (BOOL)isOrgDepartMemberUnderSubdepart;

/// 工作台模式，默认 0，0 经典模式，1 V9模式
//- (NSInteger)appTabType;

//是否开启位置上报：1 是，0，否；int 类型
- (BOOL)isLocationReporting;

// 插件控制参数，默认1，0 隐藏，1 启动，本地默认开启
- (BOOL)cloudLab;

// @提及的回复按钮，默认1，0 隐藏，1 启动，本地默认开启
- (BOOL)mentionreply;

/// 同事圈轻应用类型，默认 0，0 h5，1 hybrid
- (NSInteger)tsqLightAppType;

- (NSInteger)attendancenew;

/// 应用中心类型 默认 0，0 native，1 H5
- (NSInteger)appcenterType;

//企业参数（灰度开关
- (BOOL)isCompanyValueGuidanceOpen;

// 是否是签到三一集团新版
//- (BOOL)showSigninNewVC;

// log灰度 by qd
- (BOOL)isAutoUploadLog;

- (BOOL)isReloadWhenBack;

//是否开放新版状态设置入口
- (BOOL)isNewStatusSettingOpen;

//个人详情底部电话按钮控制，0：免费电话；1：手机拨号；2：免费电话和手机拨号可选。默认0
- (KDContactPhoneStyle)contactPhoneStyle;
//选人组件下面人滑动列表样式，0：默认，人员头像；1：只显示一共选择了多少人
- (KDChooseSelectedBottomStyle)chooseBottomViewStyle;

- (BOOL)allowHidePhoneUserCall;//是否允许已隐藏手机号成员拨打云之家电话,0:关闭;1:打开,默认:0

- (BOOL)userInfoMedalNewPosition;//勋章位置,0:不变;1:放上面,默认:0
@end
