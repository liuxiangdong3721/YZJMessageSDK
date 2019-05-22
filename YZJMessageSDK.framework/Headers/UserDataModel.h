//
//  UserDataModel.h
//  EMPNativeContainer
//
//  Created by Gil on 14-3-14.
//  Copyright (c) 2014年 Kingdee.com. All rights reserved.
//
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, UserDataIdentityType) {
    UserDataIdentityNone = 0, // 没有标识，需要去请求标识
    UserDataIdentityBOSS = 1, // 表示老板
    UserDataIdentityManager = 2, // 表示经理 defult;
    UserDataIdentityGroupHasManager = 3, // 表示本部门有负责人
    UserDataIdentityGroupHasNoManager = 4, // 表示本部门无负责人
};

@class KDWorkStatusModel;

@interface UserDataModel : NSObject <NSCoding>
@property (retain, nonatomic, nullable) NSString *bizId;
@property (retain, nonatomic, nullable) NSString *department;
@property (retain, nonatomic, nullable) NSString *emails;
@property (retain, nonatomic, nullable) NSString *email;
@property (assign, nonatomic) int gender;
@property (nonatomic, strong, nullable) NSString *companyName;
@property (retain, nonatomic, nullable) NSString *jobTitle;
@property (nonatomic, strong, nullable) NSString *jobNo;//没有走人员详情去获取，之后存下来
@property (retain, nonatomic, nullable) NSString *lastUpdateTime;
@property (retain, nonatomic, nullable) NSString *orgId;
@property (retain, nonatomic, nullable) NSString *petName;
@property (retain, nonatomic, nullable) NSString *phones;
@property (retain, nonatomic, nullable) NSString *phone;
@property (retain, nonatomic, nullable) NSString *photoUrl;
@property (retain, nonatomic, nullable) NSString *bindedEmail;
@property (retain, nonatomic, nullable) NSString *bindedPhone;
@property (assign, nonatomic) int status;
@property (assign, nonatomic) BOOL isAdmin;
@property (nonatomic, assign) BOOL isMobileFirstLogin; // 是否是第一次登陆 判断新用户提示 （是个人空间时，且为第一次登陆会强制设置成NO）
@property (retain, nonatomic, nullable) NSString *activeTime; //用户的激活时间

@property (retain, nonatomic, nullable) NSString *eid;//企业id
@property (retain, nonatomic, nullable) NSString *userId;//用户的personId
@property (retain, nonatomic, nullable) NSString *name;//用户团队内名称
@property (retain, nonatomic, nullable) NSString *nickName;//用户个人昵称
@property (retain, nonatomic, nullable) NSString *openId;//用户的open id
@property (retain, nonatomic, nullable) NSString *oId;//用户对外的id，给轻应用、公共号等鉴权使用
@property (retain, nonatomic, nullable) NSString *token;//open token

@property (nonatomic, retain, nullable) NSString *personStatus; // 用户状态
@property (nonatomic, copy, nullable) NSString *personWorkStatus; // 用户工作状态 (用户状态第二版 JSON String)
@property (nonatomic, strong, nullable) KDWorkStatusModel *workStatusModel;
@property (nonatomic, retain, nullable) NSString *accountType;  //登录类型（目前只有普通登录和友商登录）
@property (nonatomic, retain, nullable) NSString *oem;     // 用户当前圈的权重值

@property (retain, nonatomic, nullable) NSString *wbUserId;
@property (retain, nonatomic, nullable) NSString *wbNetworkId;
@property (retain, nonatomic, nullable) NSString *oauthToken;             // 自己的token
@property (retain, nonatomic, nullable) NSString *oauthTokenSecret;       // 自己的token secret
@property (assign, nonatomic) BOOL isBindWechat;

@property (retain, nonatomic, nullable) NSArray * contactArray;           //contact数组
@property (retain, nonatomic, nullable) NSMutableArray * phoneArray;      //电话数组 (三个数组都是从contact数组解析得来的，包含KDContactInfo实例)
@property (retain, nonatomic, nullable) NSMutableArray * emailArray;      //email数组
@property (retain, nonatomic, nullable) NSMutableArray * otherArray;      //其他的数组

@property (nonatomic, strong, nullable) NSString *strTrustedDevice; // 1:ture 0:false nil:服务器没传值
@property (nonatomic, copy, nullable) NSString *networkSubType;  // SPACE个人空间

@property (nonatomic, assign) NSInteger identityType;  // v9 标识用户身份，1 表示老板，2 表示经理，3 表示本部门有负责人，4 表示本部门无负责人，默认为 2

- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict;

- (BOOL)isDefaultAvatar;
- (nullable NSString *)externalPersonId;
// 传入内部/外部 id 判断是否是同一个人
- (BOOL)checkSamePersonWithAnyId:(NSString *_Nonnull)strId;

- (UserDataIdentityType)userIdentityType;

@end
