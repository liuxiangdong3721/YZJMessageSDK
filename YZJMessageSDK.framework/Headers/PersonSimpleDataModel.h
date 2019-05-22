//
//  PersonSimpleDataModel.h
//  ContactsLite
//
//  Created by Gil on 12-12-10.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import "BOSBaseDataModel.h"
#import "KDRemarkModel.h"
#import "KDContactGroupDataModel.h"


@class KDContactGroupDataModel, KDWorkStatusModel,YZJUIKitPersonModel;

@interface PersonSimpleDataModel : BOSBaseDataModel

//通用
@property (nonatomic, strong, nullable) NSString *personId;//personId或者pubAccId
@property (nonatomic, strong, nullable) NSString *personName;// 姓名
@property (nonatomic, strong, nullable) NSString *nickName;//昵称
@property (nonatomic, strong, readonly, nullable) NSString *fullName; // 昵称 & 姓名
@property (nonatomic, strong, nullable) NSString *photoUrl;//头像
@property (nonatomic, strong, nullable) NSString *defaultPhone;//默认联系号码(先取手机再取座机)
@property (nonatomic, strong, nullable) NSString *defaultEmail;//默认的邮箱（用作个人详情获取第一个邮箱）
@property (nonatomic, strong, nullable) NSString *department;//部门
@property (nonatomic, strong, nullable) NSString *jobTitle;//职位
@property (nonatomic, strong, nullable) NSString *jobNo;//工号
@property (nonatomic, strong, nullable) NSString *fullPinyin;//全拼
@property (nonatomic, strong, nullable) NSString *wbUserId;//微博用户id
@property (nonatomic, assign) BOOL isAdmin;//是不是工作圈管理员
@property (nonatomic, strong, nullable) NSString *eid;//企业id
@property (nonatomic, strong, nullable) NSString *oid;//轻应用使用的openId
@property (nonatomic, assign) int orgUserType;//1表示部门负责人，其他表示不是部门负责人
@property (nonatomic, strong, nullable) NSString *gender;//0：保密，1：男，2：女，默认为0
@property (nonatomic, copy, nullable) NSString *personStatus;  // 人员状态
@property (nonatomic, copy, nullable) NSString *personWorkStatus;  // 人员状态第二版
@property (nonatomic, strong, nullable) KDWorkStatusModel *workStatusModel;  // 人员状态第二版Model

@property (nonatomic, assign) BOOL unVerifiedUser;//外部未注册用户

@property (nonatomic, strong, nullable) KDRemarkModel *comment;//备注信息
@property (nonatomic, strong, nullable) NSDictionary *company; //默认公司信息

@property (nonatomic, strong, nullable) NSString *crmCompany;
@property (nonatomic, strong, nullable) NSString *crmType;
@property (nonatomic, assign) BOOL crmCanMove;
@property (nonatomic, strong, nullable) NSString *customerId;
@property (nonatomic, strong, nullable) NSArray *customRemark;

@property (nonatomic, strong, nullable) NSArray *extTags;//用户标签组

@property (nonatomic, assign) BOOL isGroupIdOrPersonId; //默认NO是personId
@property (nonatomic, strong, nullable) NSString *picId; //名片id
@property (nonatomic, assign) BOOL isInner;
///是否是协同空间成员
@property (nonatomic, assign) BOOL isSpaceMember;

@property (nonatomic, strong, nullable) NSArray *longOrgIds;

/*
 第一位表示帐号是否可用
 第二位表示是否激活
 第三位表示是否收藏(已废弃)
 第四位表示是否为公共帐号(已废弃)
 */
@property (nonatomic, assign) int status;//公共号默认是11，人默认是3
/*
 第一位表示该外部联系人跟你是否是好友
 */
@property (nonatomic, assign) int extStatus;

//T9 Person
@property (nonatomic, assign) int userId;

///搜索 名字高亮字段
@property (nonatomic, copy, nullable) NSAttributedString * highlightNameAttr;
///搜索 部门高亮字段
@property (nonatomic, copy, nullable) NSAttributedString * highlightDepartmentAttr;
@property (nonatomic, copy, nullable) NSString * recommend;
//帐号是否可用(是否离职)
- (BOOL)isAccountAvailable;
//帐号是否已激活
- (BOOL)isAccountActive;
//是否为公共帐号
- (BOOL)isPublicAccount;
//是否有头像
- (BOOL)hasHeaderPicture;

- (BOOL)isInCompany;

//是否为外部联系人
- (BOOL)isExternalPerson;
//是否是外部好友
- (BOOL)isExternalFriend;

- (nullable NSString *)externalPersonId;

- (nullable NSURL *)personHQPhotoUrl;//人员高清头像

- (nullable NSURL *)headerImageUrl;

@property (nonatomic, strong) YZJUIKitPersonModel* _Nonnull kitPersonModel;


@end

@interface NSString (PersonSimpleDataModel)
- (BOOL)isPublicAccount;
- (BOOL)isExternalPerson;
- (BOOL)isExternalGroup;
@end

@interface NSArray (PersonSimpleDataModel)

+ (NSArray<KDContactGroupDataModel *> *_Nullable)groupArrayWithPersons:(NSArray<PersonSimpleDataModel*> *_Nonnull)persons;

@end

