//
//  KDAppDataModel.h
//  kdweibo
//
//  Created by AlanWong on 14-9-24.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//


/**
 *  4.2.6版本后台调整接口和返回的数据
 *  有关应用的model统一使用KDAppDataModel
 *  不再使用多个应用的model
 *
 */
#import <Foundation/Foundation.h>

#import "KDJSONModel.h"

@class KDAppHybridInfoModel;

typedef enum {
    KDAppTypeUnknow = 0,
    /// 金蝶本地应用
    KDAppTypeNativeKingdee = 1,
    /// web应用（企业内轻应用
    KDAppTypeWeb = 2,
    /// 本地应用 三方研发
    KDAppTypeNativeThirdPart = 3,
    /// 轻应用
    KDAppTypeLight = 4,
    /// 公共号应用
    KDAppTypePublic = 5,
    /// 应用分类
    KDAppTypeclassification = 6
} KDAppType;

typedef enum {
    /// 企业级应用不可删除
    KDAppActionTypeCompany = 1,
    /// 跨企业级应用不可删除
    KDAppActionTypeManyCompany = 2,
    /// 部门应用可以删除
    KDAppActionTypeOrganization = 3,
    /// 个人应用可以删除
    KDAppActionTypePerson = 4,
} KDAppActionType;

typedef enum {
    KDAppActionAddSourceType_None = 0,
    /// 个人添加
    KDAppActionAddSourceType_Person = 1,
    /// 应用添加
    KDAppActionAddSourceType_Company = 2,
} KDAppActionAddSourceType;

typedef NS_ENUM(NSUInteger, KDAppStatus) {
    KDAppStatusNeedOpen = 1,        // 需要开通
    KDAppStatusNotRequiredOpen = 2, // 不需要开通
    KDAppStatusOpened = 3,          // 已开通
};


@interface KDAppDataModel : KDJSONModel

/// 应用类型
@property(nonatomic, assign) KDAppType appType;
/// 应用名称
@property(nonatomic, copy, nullable) NSString *appName;
/// 应用id
@property(nonatomic, copy, nullable) NSString *appID;
/// 应用客户端id (long)  (匹配提交客 户端的类型)
@property(nonatomic, copy, nullable) NSString *appClientID;
/// 应用的详细介绍
@property(nonatomic, copy, nullable) NSString *appDesc;
/// 应用的图标url
@property(nonatomic, copy, nullable) NSString *appLogo;
/// 应用下载的url（类型4轻应用的打开地址）
@property(nonatomic, copy, nullable) NSString *downloadURL;
/// 应用的跳转协议
@property(nonatomic, copy, nullable) NSString *appClientSchema;
/// 应用版本号，可能为null
@property(nonatomic, copy, nullable) NSString *appClientVersion;
/// 应用介绍详情url地址
@property(nonatomic, copy, nullable) NSString *detailURL;
/// 应用版本更新时间，可能为null
@property(nonatomic, copy, nullable) NSString *versionUpdateTime;
/// 应用排序
@property(nonatomic, copy, nullable) NSString *seq;
/// iOS9跳转协议
@property(nonatomic, copy, nullable) NSString *ios9Schema;


//以下属性针对appType== 2
@property(nonatomic, copy, nullable) NSString * webURL; //web应用的入口地址
//以下属性针对appType== 5
@property(nonatomic, copy, nullable) NSString * pid; //公共号id


@property(nonatomic, assign) KDAppActionType appActionMode;

@property(nonatomic, copy, nullable) NSString * packageName;

@property(nonatomic, copy, nullable)NSString *deleteAble;
/// 应用预览地址
@property (copy, nonatomic, nullable) NSString *previewLink;
/// 应用标签
@property (strong, nonatomic, nullable) NSArray *tags;
/// 详情介绍url
@property (strong, nonatomic, nullable) NSArray *infoUrl;
/// 应用案例url
@property (strong, nonatomic, nullable) NSArray *infoCaseUrl;

@property (strong, nonatomic, nullable) NSArray *highList;

/// 是否付费应用，0免费，1收费
@property (nonatomic, assign) BOOL isFree;
/// 是否已经购买
@property (nonatomic, assign) BOOL isOrder;
/// 是否已经过期
@property (nonatomic, assign) BOOL isExpired;
/// 是否已开通
@property (nonatomic, assign) BOOL isOpened;
/// 是否精品
@property (nonatomic, assign) BOOL isBout;
/// 是否云之家认证
@property (nonatomic, assign) BOOL yzjAuth;
/// 认证类型，0云之家认证，1官方应用
@property (nonatomic, assign) NSInteger authType;
/// 开发商名称
@property (nonatomic, strong, nullable) NSString *domainName;
/// 接入控制; 0不需要，1需要
@property (nonatomic, assign) NSInteger accessControl;
/// 接入控制跳转的URL
@property (nonatomic, strong, nullable) NSString *accessControlIndexUrl;
/// 分类ID
@property (nonatomic, assign) NSInteger categoryID;
/// 分类名
@property (nonatomic, strong, nullable) NSString *categoryName;
/// 分类应用序号
@property (nonatomic, assign) NSInteger categorySeq;
/// 分类分组序号
@property (nonatomic, assign) NSInteger categoryGroupSeq;
/// 一句话描述
@property (nonatomic, strong, nullable) NSString *descriptionText;

/// 管理员：是否已开通，普通用户：是否有权限添加
@property (nonatomic, assign) BOOL canOpen;
/// 是否已通知管理员
@property (nonatomic, assign) BOOL hasNotice;

/// 是否新添加应用
@property (nonatomic, assign) BOOL isNew;
/// 跳转支付链接
@property (nonatomic, strong, nullable) NSString *orderUrl;
/// 应用状态 1-未购买 2-已购买 3-已试用 4-购买已到期 5-试用已到期 6-已购买未可使用
@property (nonatomic, assign) NSInteger orderState;
/// 剩余天数
@property (nonatomic, assign) NSInteger remainDay;

@property (assign , nonatomic) KDAppActionAddSourceType addSourceType;

/// 是否是个人服务应用
@property (nonatomic, assign) BOOL isPersonal;
/// 1:需要开通；2：不需要开通；3：已开通
@property (nonatomic, assign) KDAppStatus openStatus;

@property (nonatomic, assign) BOOL isEnableHybrid;
@property (nonatomic, strong, nullable) KDAppHybridInfoModel *hybridInfo;

@property(nonatomic, copy, nullable) NSAttributedString *highlightAppNameAttr;

- (nullable id)initWithDictionary:(nonnull NSDictionary *)dict;

- (nullable id)initWithDictionaryFromWeb:(nonnull NSDictionary *)dict;

@end

@protocol KDAppDataModel;

@interface KDAllAppsListModel : KDJSONModel

@property (nonatomic, assign) BOOL isAppDisplayCtrl;
@property (nonatomic, strong, nullable) NSArray<KDAppDataModel> *apps;

@end

@interface KDWebRequestCacheModel : NSObject

@property (nonatomic, strong, nullable) NSString *requestID;
@property (nonatomic, strong, nullable) NSString *cachedData;

@end

