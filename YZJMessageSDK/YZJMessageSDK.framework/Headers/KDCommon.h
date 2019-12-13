//
//  KDCommon.h
//  kdweibo
//
//  Created by Jiandong Lai on 12-3-23.
//  Copyright (c) 2012年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@import Masonry;
#import "UIColor+KDV9.h"
#import "KDStyleSyntaxSugar.h"
#import "KDAppDataModel.h"

typedef long long KDInt64;
typedef unsigned long long KDUInt64;

extern NSString *const kBundleName;

extern NSString *const kUserAgent;

#pragma mark - Notification -
extern NSString *const KDNotificationEnterpriseApply;
extern NSString *const KDNotificationCheckHybridResource;

#pragma mark - Keys -
extern NSString *const WPS_KEY;

extern NSString *const kWPSLogin_Kingsoft_appid;
extern NSString *const kWPSLogin_Kingsoft_appname;
extern NSString *const kWPSLogin_Kingdee_appid;
extern NSString *const kWPSLogin_Kingdee_appid_production;

#pragma mark - Light APPID -
extern NSString *const LightAppId_RedEnvelope; // 红包轻应用id
extern NSString *const LightAppId_Appointment; // 预约语音会议轻应用id
extern NSString *const LightAppId_Vote; // 投票轻应用id
extern NSString *const LightAppId_Colleagues; // 同事圈轻应用id
extern NSString *const LightAppId_HybridColleagues; // 同事圈混合模式AppID
extern NSString *const LightAppId_HomeService; // 上门服务轻应用id
extern NSString *const LightAppId_VIPService; // VIP专享服务轻应用id
extern NSString *const LightAppId_EnterpriseAuth; // 企业认证轻应用id
extern NSString *const LightAppId_TeamManage; // 团队管理轻应用id
extern NSString *const LightAppId_OrgManage; // 组织架构管理轻应用id
extern NSString *const LightAppId_MySignRecords; // 我的签到记录轻应用id
extern NSString *const LightAppId_MyZone; // 我的地盘轻应用id
extern NSString *const LightAppId_AttendanceMachine; // 签到考勤机轻应用id
extern NSString *const LightAppId_recommend; // 推荐有礼轻应用id
extern NSString *const LightAppId_SignInGroupManage; // 签到组管理轻应用id
extern NSString *const LightAppId_SignIn;// 签到
extern NSString *const LightAppId_QRScan;// 扫一扫
extern NSString *const LightAppId_File;// 文件
extern NSString *const LightAppId_Task;// 任务
extern NSString *const LightAppId_Announcement;// 公告
extern NSString *const LightAppId_Talkmeeting;// 语音会议
extern NSString *const LightAppId_Kdrive;// 企业云盘
extern NSString *const LightAppId_Workbench;// 工作台
extern NSString *const LightAppId_AutoSign;// 自动签到
extern NSString *const LightAppId_YzjFreeCall;// 云之家免费电话
extern NSString *const LightAppId_Contact;// 通讯录 
extern NSString *const LightAppId_Search;// 搜索
extern NSString *const LightAppId_ProjectScreen;// 投屏
extern NSString *const LightAppId_AppCenter;
extern NSString *const LightAppId_Ecosystem;// 生态圈
extern NSString *const LightAppId_MyCustomerService;//我的客服
extern NSString *const LightAppId_AddCommonApp;// 添加常用应用


extern NSString * const CrmCustomerAppId;
extern NSString * const CrmCustomerOwnerURL;
extern NSString * const CrmCustomerTransferURL;

#pragma mark - EID -
extern NSString *const EID_Kingdee;//金蝶eid

#pragma mark - Person ID -
extern NSString *const kYZJPersonId;    //云团的personId
extern NSString *const kFilePersonId;   //文件的personId

#pragma mark - KDSchemes -
extern NSString *const KDSchemeBuluo;
extern NSString *const KDSchemeCloudHub;
extern NSString *const KDHybridAppScheme;

#pragma mark - APP URL -
extern NSString *const KDAPPURL_AppStore;
extern NSString *const KDAPPURL_AppStore_RATING;
extern NSString *const KDAPPURL_AppStore_RATING_iOS11;

extern NSString *const BUNDLENAME;
extern NSString *const BUNDLENAME2;

extern NSString *const KD_Share_Install_Link;

#pragma mark - user protocol version -
#define KDUserProtocolVersion 1

#pragma mark - Info -
#define AppWindow [[[UIApplication sharedApplication] delegate] window]

extern NSString *const KD_SHARE_APP_KEY_IPHONE;
extern NSString *const KD_SHARE_APP_SECRET_IPHONE;
extern NSString *const KD_Share_Install_Link;

#define kScreenOffsetY (isiPhoneX ? 88.0f : 64.0f)
#define kSafeScreenBottomInset (isiPhoneX ? 34.0f : 0.0f)
#define kSafeScreenLandscapeInset (isiPhoneX ? 44.0f : 0.0f)
#define kSafeScreenLandscapeLeftInset (isiPhoneX ? 24.0f : 0.0f)
#define kSafeScreenLandscapeBottomInset (isiPhoneX ? 21.0f : 0.0f)
#define kTabbarHeight (self.tabBarController.tabBar.bounds.size.height)
#define ScreenFullHeight [[UIApplication sharedApplication].keyWindow bounds].size.height
#define ScreenFullWidth [[UIApplication sharedApplication].keyWindow bounds].size.width

#pragma mark - KDCommon Class -

@interface KDCommon : NSObject {
}

+ (NSString *)lastClientVersion; //上一个安装的app版本
+ (void)saveLastVersionWhenNoRecord; // 
+ (void)updateLastVersion; //更新当前版本到本地

+ (NSString *)visibleClientVersion;
+ (NSString *)clientVersion;

+ (BOOL)validEmail:(NSString *)email;

+ (BOOL)hasChinese:(NSString *)string;
+ (BOOL)isPhoneNumber:(NSString *)word;

+ (NSBundle *)yzjMsgBundle;

@end

#pragma mark - CGRect -
#define SetX(frame, x)               frame = CGRectMake(x, frame.origin.y, frame.size.width, frame.size.height)
#define SetY(frame, y)               frame = CGRectMake(frame.origin.x, y, frame.size.width, frame.size.height)
#define SetWidth(frame, w)           frame = CGRectMake(frame.origin.x, frame.origin.y, w, frame.size.height)
#define SetHeight(frame, h)          frame = CGRectMake(frame.origin.x, frame.origin.y, frame.size.width, h)
#define SetOrigin(frame, x, y)       frame = CGRectMake(x, y, frame.size.width, frame.size.height)
#define SetSize(frame, w, h)         frame = CGRectMake(frame.origin.x, frame.origin.y, w, h)
#define SetFrame(frame, x, y, w, h)  frame = CGRectMake(x, y, w, h)
#define MinusX(frame, offset)        frame = CGRectMake(frame.origin.x - offset, frame.origin.y, frame.size.width, frame.size.height)
#define AddX(frame, offset)          frame = CGRectMake(frame.origin.x + offset, frame.origin.y, frame.size.width, frame.size.height)
#define AddY(frame, offset)          frame = CGRectMake(frame.origin.x, frame.origin.y + offset, frame.size.width, frame.size.height)
#define AddHeight(frame, offset)     frame = CGRectMake(frame.origin.x, frame.origin.y, frame.size.width, frame.size.height+offset)
#define AddWidth(frame, offset)      frame = CGRectMake(frame.origin.x, frame.origin.y, frame.size.width+offset, frame.size.height)
#define X(frame)                     frame.origin.x
#define Y(frame)                     frame.origin.y
#define Width(frame)                 frame.size.width
#define Height(frame)                frame.size.height
#define Origin(frame)                frame.origin
#define Size(frame)                  frame.size
#define SetCenterX(center, x)        center = CGPointMake(x, center.y)
#define SetCenterY(center, y)        center = CGPointMake(center.x, y)
#define MaxY(frame)                  CGRectGetMaxY(frame)
#define MaxX(frame)                  CGRectGetMaxX(frame)

#pragma mark - Method -
#define KD_IS_BLANK_STR(str)    (((str) == nil) || ([@"" isEqualToString:(str)]))

#define WEAKSELF __weak typeof(self) weakSelf = self;
#define STRONGSELF __strong typeof(weakSelf) strongSelf = weakSelf;

// debug用
#define KDDebugInspoector

#if DEBUG
    //
#else
    #define NSLog(...) do{} while(0)
#endif


#define ScreenFullHeight [[UIApplication sharedApplication].keyWindow bounds].size.height
#define ScreenFullWidth [[UIApplication sharedApplication].keyWindow bounds].size.width

extern NSString *const kInputStatusText;
extern NSString *const kInputStatusVoice;

void runOnMainQueueWithoutDeadlocking(void (^block)(void));


typedef long long KDInt64;
typedef unsigned long long KDUInt64;


#define KD_IS_NULL_JSON_OBJ(obj) ((obj) == nil || [NSNull null] == (obj))
