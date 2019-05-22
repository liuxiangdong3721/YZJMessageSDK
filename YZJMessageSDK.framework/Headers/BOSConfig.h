//
//  BOSConfig.h
//  EMPNativeContainer
//
//  Created by Gil on 12-11-9.
//  Copyright (c) 2012年 Kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BOSSetting.h"
#import "UserDataModel.h"
#import "KDNetworkInfoModal.h"

#define kConfigFileName @"BOSConfig.archive"
#define kBOSConfigQueueName "BOSConfig.queue"

#define BOS_CONFIG [BOSConfig sharedConfig]
//since 3.0
//程序运行期的数据

typedef enum : NSInteger {
    KDCachedTrustedDeviceNone = -1,     // 未定义
    KDCachedTrustedDeviceFalse = 0,     // 未验证设备
    KDCachedTrustedDeviceTrue = 1,      // 可信设备
} KDCachedTrustedDevice;

@class CompanyDataModel;

@interface BOSConfig : NSObject

//应用支持的方向，从info文件中获取
@property (nonatomic,strong) NSArray *supportedOrientations;
//经过mCloud处理过后的用户名
@property (nonatomic,copy) NSString *loginUser;
//应用ID和实例名
@property (nonatomic,assign) int appId;
@property (nonatomic,copy) NSString *instanceName;



//当前登录者信息
@property (nullable,nonatomic, strong) UserDataModel *user;
//当前工作圈信息
@property (strong, nonatomic) KDNetworkInfoModal *company;

//关联默认工作圈
@property (strong, nonatomic) CompanyDataModel *defaultCompany;

//当前已经连接的投屏
@property (nonatomic, strong) NSString *hpCastIP;
@property (nonatomic, strong) NSString *hpCastName;

//推荐有礼剩余可以抽奖次数
@property (nonatomic, strong) NSNumber *recommondNumber;
//推荐有礼活动是否已经结束
@property (nonatomic, assign) BOOL activityEnd;

@property (nonatomic, assign) BOOL isLoginWithOpenAccount;

@property (nonatomic, assign) BOOL isFromFaultGesturePwd; //输错手势密码
@property (nonatomic, copy) NSNumber *isNotFirstSetScreenshot;
@property (nonatomic, copy) NSNumber *screenshotStatus;

@property (nonatomic, assign) BOOL isMessageStart;
@property (nonatomic, copy) NSString *messageStartUserId;
@property (nonatomic, copy) NSString *messageStartNetworkId;

/// 当前用户是否有管理应用权限
@property (nonatomic, assign) BOOL currentUserHasAppPrivilege;
/// 应用页签是否可编辑受限
@property (nonatomic, assign) BOOL isAppEditLimited;

//当前曾经配对的蓝牙UUID数组
@property (nonatomic, strong) NSMutableArray *BLEUuidArr;

@property (nonatomic, assign) BOOL isOpenEntireGroup;//是否开启全员群，做个缓存

/*
 @desc 获取BOSConfig单例对象;
 @return BOSConfig;
 */
+ (BOSConfig *)sharedConfig;


- (void)loadConfig;
- (void)clearConfig;
- (BOOL)saveConfig;

@property (nullable,nonatomic, strong) UserDataModel *tempUser; // 可信设备用临时记录的user，未缓存
@property (nonatomic, assign) KDCachedTrustedDevice cachedTrustedDevice; // 本地缓存的可信设备标识符, 判断依据是user里的isTrustedDevice, 如果none(没字段)或者true则为可信; 仅flase为不可信; 缓存到本地, 在可信验证后or再次登录(或切圈)被结果覆盖.

@property (nonatomic, assign) BOOL bHidePeopleMayKnown;   // 外部联系人可能认识的人 不做缓存
@property (nonatomic, strong) NSArray *currentPeopleMayKnownArr;  // 当前用户推荐外部好友

/**
 *  跳转相关属性
 */
@property (strong, nonatomic) NSString *tokenFromShare;         // 部落传来的do token （临时存储）
@property (strong, nonatomic) NSString *tokenSecretFromShare;   // 部落传来的do token secret （临时存储）
@property (strong, nonatomic) NSString *shareToken;             // 服务器换来的share token （临时存储）
@property (strong, nonatomic) NSString *shareTokenSecret;       // 服务器换来的share token secret （临时存储）
@property (strong, nonatomic) NSString *networkIdFromShare;     // 部落传来的networkId （临时存储）
@property (strong, nonatomic) NSString *signatureFromShare;     // 部落传来的signature （临时存储）
@property (nonatomic, strong, readonly) NSString *signatureLocal;           // 本地拼接出来的signature （签名字段，用于判断用户和工作圈是否为同一个 signature=md5(userid+networkid) （2015-11-20 新增））
@property (strong, nonatomic) NSString *thirdAppId;             // 目前是写死在客户端的, 我们传过去，wps传回来时临时存储，然后丢给authByDoToken
@property (strong, nonatomic) NSString *thirdAppName;           // 目前没用到，备用，缓存到UserDefault了


// 日志的log 标记是否已上传
@property (nonatomic, copy) NSDictionary *logUploadFlagDict;

// 活动字典
@property (nonatomic, strong) NSDictionary *recommendDict;

- (void)configAppIsInstallOrUpdate;
@property (nonatomic, assign, readonly) BOOL isAppUpdate; //app是升级上来的

@end
