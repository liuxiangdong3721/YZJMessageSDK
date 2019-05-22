//
//  MFClient.h
//  MobileFamily
//
//  Created by kingdee eas on 13-5-15.
//  Copyright (c) 2013年 kingdee eas. All rights reserved.
//

/**
 *  与应用相关的接口调用集中到AppsClent中
 *  例如获取推荐应用列表、搜索应用、公共号等等
 *  alanwong 2014-9-24
 *
 */

#import "BOSConnect.h"


@interface AppsClient : BOSConnect

/**
 *  获取所有的公共号数据
 */
-(void)getPublicList;
/**
 *  批量获取公共号信息
 */
-(void)getPublicListWithPublicIds:(NSArray *)publicIds;
/**
 *  关注公共号
 *
 *  @param ID   关注的公共号ID
 *  @param data 0为取消关注，1为关注
 */
-(void)attention:(NSString*)ID withdata:(NSString*)data;

/**
 *  首页搜索应用
 */
- (void)searchAppsWithKey:(NSString *)key page:(NSInteger)page count:(NSInteger)count;

/**
 *  搜索应用
 *
 *  @param string 搜索的关键字
 *
 */
-(void)searchAppsWithKey:(NSString *)key;


//陈彦安添加
/**
 *  上传被添加的单个轻应用/公共号的id
 *
 *  @param KDAppDataModel 当前被添加轻应用/公共号的数据结构
 *
 */
//-(void)postOneApp:(KDAppDataModel *)app;

/**
 *  数据迁移将所有本地的轻应用/公共号的id上传
 *
 *  @param string 所有本地的轻应用/公共号的id拼接成的字符串
 *
 */
-(void)postAllLocalApps:(NSString *)apps;

/**
 *  告知服务器删除被选中的单个轻应用/公共号的id
 *
 *  @param KDAppDataModel 当前被选中轻应用/公共号的数据结构
 *
 */
//-(void)deleteOneApp:(KDAppDataModel *)app;

/**
 *  断网情况下程序会记录用户删除的轻应用/公共号，网络连接时会上传这些被记录的轻应用/公共号id
 *
 *  @param string 所有这些轻应用/公共号的id拼接成的字符串
 *
 */
-(void)deleteFromNSUserDefaultWithApps:(NSString *)apps;

/**
 *  获取用户的应用列表
 */
-(void)queryAppList;

/**
 *  应用界面排序
 */

/**
 应用界面排序

 @param orderArray 排序数组字符串
 @param style      模式：0 经典模式 1 分类模式
 */
- (void)postAppOrderWithOrderArrayString:(NSString *)orderArray style:(NSInteger)style;

/**
 *  点击公共号埋点
 */
-(void)makeNoteWhenAppClickedWithMid:(NSString *)mid Appid:(NSString *)appid PersonId:(NSString *)personId;

// 通讯录广告
- (void)getAd;

/**
 获取应用分类列表
 */
- (void)getCategoryAppsList;

/**
 *  获取子分类应用
 */
- (void)getSubCategoryAppsWithTag:(NSString *)tag PageNo:(int)pageNo;

/*
 * 查询品牌
 */
- (void)getBrandZoneList;

/*
 * 查询子品牌
 */
- (void)getChildBrandList:(NSString *)brandId;

/*
 * 根据品牌查询应用
 */
- (void)getAppListByBrand:(NSString *)brandId;

/*
 * 查询应用的展示标签
 */
- (void)getAppViewTag:(NSString *)appId;

/*
 * 查询应用详情
 */
- (void)getLightInfo:(NSString *)appId;

/*
 * 查询开发者所有的应用
 */
- (void)getAppsUnderlineDomain:(NSString *)appId;
/**
 *  根据appid查询开发者的应用详情
 *
 *  @param appId 应用id
 */
- (void)getLightAppInfoWithAppid:(NSString *)appId;

/**
 *  根据appid获取客户服务公众号信息
 *
 *  @param appId 应用ID
 */
- (void)getCustomerPublicWithAppid:(NSString *)appId;

/**
 *管理员开通应用
 **/
- (void)openAppWithAppid:(NSString *)appId;

/**
 *  管理员移除应用
 */
- (void)removeAppWithAppid:(NSString *)appId;

/**
 *  查询企业已开通的前3个应用
 */
- (void)queryCustAlreadyOpenedAppList;

/**
 *  查询企业已开通的全部应用
 */
- (void)queryAllAlreadyOpenedAppList;

/**
 *  查询全部推荐应用列表
 */
- (void)queryRecommendAppList;

/**
 *  查询部分推荐应用列表
 */
- (void)queryIndexRecommendAppList;

/**
 *  企业已开通的应用排序
 *
 *  @param appids 应用id数组
 */
- (void)alreadyOpenedAppOrderWithAppIds:(NSArray *)appids;

/**
 *  判断应用是否开通
 */
- (void)isAppOpenedWithAppid:(NSString *)appId;

- (void)judgeAlreadyOpenAppsWithAppIds:(NSString *)appids;

/**
 *  设置应用开通权限
 *
 *  @param openType  开通范围类型（0：给管理员开通；1：给全部成员开通；2：选择开通部门；3：选择开通成员）
 *  @param eid       工作圈id
 *  @param appId     应用id
 *  @param orgIds    部门ids 多部门逗号隔开，如："123,234,456"(openType为2时此字段有值)
 *  @param personIds 人员ids 多人员逗号隔开，如："123,234,456"(openType为3时此字段有值)
 *  @param state 当前应用开通之前的设置默认为0，开通后的设置为1
 *  @param addToUserPanel 是否添加应用到普通用户应用面板
 */
- (void)uploadOpenAppPermission:(NSString *)openType
                            eid:(NSString *)eid
                          appId:(NSString *)appId
                         orgIds:(NSString *)orgIds
                      personIds:(NSString *)personIds
                        roleIds:(NSString *)roleIds
                          state:(NSInteger)state
                 addToUserPanel:(NSInteger)addToUserPanel;

/**
 *  获取应用已设置权限
 *
 *  @param appId 应用id
 */
- (void)fetchAppPermission:(NSString *)appId;

/**
 *  获取应用是否到期信息
 *
 *  @param appId 应用ID
 */
- (void)getAppExpiredInfoWithAppId:(NSString *)appId;

/**
 *  应用到期通知管理员
 *
 *  @param appId 应用ID
 */
- (void)notifyAdminWithAppId:(NSString *)appId;

/**
 *  获取应用到期剩余时间
 *
 *  @param appId 应用ID
 */
- (void)getAppExpiredDateWithAppId:(NSString *)appId;

/**
 获取应用意图对应的轻应用列表信息

 @param action 动作
 @param eid    工作圈ID
 */
- (void)getActionUndertakersWithAction:(NSString *)action eid:(NSString *)eid appID:(NSString *)appID;

/**
 获取跳转目标应用的地址

 @param aid    意图ID
 @param sn     JS桥拿到的sn
 @param extras JS桥拿到的extras
 */
- (void)getUndertakerURLWithID:(NSString *)aid sn:(NSString *)sn extras:(id)extras;

/**
 获取当前用户管理应用权限信息
 */
- (void)getAppManagementPrivilegeInfo;

/**
 获取个人空间应用列表
 */
- (void)getPersonalNetworkAppsList;

/**
 普通用户获取更多应用
 */
- (void)getUserMoreAppsList;

/**
 普通用户获取全部应用
 */
- (void)getUserAllAppsList;

/**
 通知管理员开通应用

 @param appID 应用ID
 */
- (void)noticeAdminToOpenApp:(NSString *)appID;

/**
 上报是否已通知管理员

 @param appID 应用ID
 */
- (void)uploadHasNoticeAdmin:(NSString *)appID;

/**
 上传应用HTTP错误码

 @param statusCode HTTP错误码
 @param appID 应用ID
 @param openID OpenID
 */
- (void)uploadWebViewHttpStatusCode:(NSInteger)statusCode appID:(NSString *)appID openID:(NSString *)openID;

/**
 获取一键开通应用列表
 */
- (void)getQuickOpenAppsList;

/**
 一键开通推荐应用

 @param appIDs 应用ID，多个用“,”分隔
 */
- (void)quickOpenApps:(NSString *)appIDs;

/**
 告知后台应用过期后是否通知了管理员

 @param appID 应用ID
 */
- (void)appExpiredNoticeAdmin:(NSString *)appID;

/**
 拉取应用管理员列表
 */
- (void)fetchAppAdminList;

@end

