//
//  KDMixedCloudConfig.h
//  kdweibo
//
//  Created by Gil on 2017/11/25.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - 应用配置 -
extern NSString *const KDAPPClientID_IPHONE;
extern NSString *const KDAPPClientID_IPAD;
#define kAppClientId (([UIDevice isiPadDevice]) ? KDAPPClientID_IPAD : KDAPPClientID_IPHONE)

extern NSString * KD_APPNAME;
extern NSString * KD_FEEDNAME;
extern NSString *const KD_DEFAULT_OAUTH_CONSUMER_KEY;
extern NSString *const KD_DEFAULT_OAUTH_CONSUMER_SECRET;
extern NSString *const KD_DEFAULT_OAUTH_CONSUMER_KEY_IPAD;
extern NSString *const KD_DEFAULT_OAUTH_CONSUMER_SECRET_IPAD;
#define KD_APP_OAUTH_KEY (([UIDevice isiPadDevice]) ? KD_DEFAULT_OAUTH_CONSUMER_KEY_IPAD : KD_DEFAULT_OAUTH_CONSUMER_KEY)
#define KD_APP_OAUTH_SECRET (([UIDevice isiPadDevice]) ? KD_DEFAULT_OAUTH_CONSUMER_SECRET_IPAD : KD_DEFAULT_OAUTH_CONSUMER_SECRET)

extern NSString *const KDAPP_CHANNEL;
extern NSString *const KDREGISTER_CHANNEL;

extern BOOL const KDISPRODUCTMODE;
extern BOOL const KDISOEM;
extern int const KDISBranch;

#pragma mark - 第三方key -

extern NSString *const WECHAT_APPID;
extern NSString *const WECHAT_APPSECRET;
extern NSString *const SINA_APPKEY;
extern NSString *const QQ_APPKEY;

extern NSString *const GAODE_KEY;
extern NSString *const LEBO_APPID;
extern NSString *const LEBO_KEY;
extern NSString *const HPCAST_KEY;
extern NSString *const BUGLY_APPID;

#pragma mark - 可配置业务选项 -

extern BOOL const KDShowRegisterButton;
extern BOOL const KDShowThirdLoginButtons;
extern BOOL const KDMEShowVIPServices;
extern BOOL const KDMEShowPayment;
extern BOOL const KDMEShowPlay;
extern BOOL const KDMEShowAdmin;
extern BOOL const KDMEShowService;
extern BOOL const KDMEShowInviteAward;
extern BOOL const KDMEShowServicePhone;
extern BOOL const KDAboutShowScore;
extern BOOL const KDAboutShowUserAgreement;
extern BOOL const KDCheckJailBreak;
extern BOOL const KDLoginFieldAuthentication;

#pragma mark - 专有云可配置业务选项 -

extern NSString *const KD_BASE_URL;
extern NSString *const KD_IMAGE_BASE_URL;

//===merc===
//extern NSString *const KDMercPubKey;
//extern NSString *const KDMercLongLinkUrl;
//extern unsigned short const KDMercLongLinkPort;
//extern NSString *const KDMercShortLinkUrl;
//extern unsigned short const KDMercShortLinkPort;

extern BOOL const KDShowRedPacket;
extern BOOL const KDIsAllowAddExtFriend;
extern BOOL const KDIsAllowWeChatInviteColleagues;
extern BOOL const KDIsAllowUseYZJFreeCall;
extern NSString *const KDCustomerServiceNumber;
extern BOOL const KDIsAllowCreateCompany;

extern BOOL const KDIsShowXiaoXun;
extern BOOL const KDIsShowGaoJiIcon;
extern BOOL const KDIsDTAssistNative;
extern BOOL const KDIsYunPanEnable;
extern BOOL const KDIsFileUpload;
extern BOOL const KDIsScheduleShow;
extern BOOL const KDIsAboutYZJSymbol;

extern NSString *const KDAgreementUrl;

extern NSString *const LightAppId_Report;
extern NSString *const LightAppId_Approval;
extern NSString *const LightAppId_DTAssist;

extern BOOL const KDIsSigninEnable;

extern int8_t const KDWorkbenchShareTypeValue;

extern NSString *const KDFeatureColorTheme;

extern BOOL const KDFeatureUnreadMsgNotify;

extern NSString *const KDFunctionGuide;

@interface KDMixedCloudConfig : NSObject

+ (NSArray *)KDGuideTitles;
+ (NSArray *)KDGuideContents;
///切换了语言调用此方法改app名
+ (void)changeAppName; 
@end
