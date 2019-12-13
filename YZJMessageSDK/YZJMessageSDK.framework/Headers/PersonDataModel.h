//
//  PersonDataModel.h
//  ContactsLite
//
//  Created by kingdee eas on 12-11-13.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import "PersonSimpleDataModel.h"
#import "KDContactInfo.h"

@interface PersonDataModel : PersonSimpleDataModel

@property (nonatomic, strong, nullable) NSString *orgId; //组织id, 有则返回, 没有则不返回
@property (nonatomic, strong, nullable) NSString *eName;  /**< 公司名称 */

@property (nonatomic, assign) BOOL isLunar;    // 是否阴历生日
@property (nonatomic, copy, nullable) NSString *birthday; /**< 生日 */

@property (nonatomic, strong, nullable) NSArray *contactArray;            //contact数组
@property (nonatomic, strong, nullable) NSMutableArray *phoneArray;       //电话数组 (三个数组都是从contact数组解析得来的，包含KDContactInfo实例)
@property (nonatomic, strong, nullable) NSMutableArray *emailArray;       //email数组
@property (nonatomic, strong, nullable) NSMutableArray *otherArray;       //其他的数组

@property (nonatomic, assign) BOOL isHidePhone;

/*
 "hideType":String //隐藏类型，public:公开模式，allHide:全员隐藏，partHide:部分隐藏
 partHide 时 手机号可见，但脱敏
*/
@property (nonatomic, copy, nullable) NSString *hideType;

@property (nonatomic, strong, nullable) NSArray *orgInfo;
@property (nonatomic, strong, nullable) NSString *fulldepartment;//部门长名称
@property (nonatomic, strong, nullable) NSArray *roleInfo; /**< 角色标签 */

@property (nonatomic, strong, nullable) NSArray *defaultParentList;  //默认上级
@property (nonatomic, strong, nullable) NSArray *assignParentList;   //指定上级

@property (nonatomic, strong, nullable) NSString *hireDate; //入职日期
@property (nonatomic, strong, nullable) NSString *positiveDate; //转正日期
@property (nonatomic, strong, nullable) NSString *identityId; //身份证号

@property (nonatomic, assign) BOOL isContactFriend; //是否是联系人好友
@property (nonatomic, strong, nullable) NSString *contactName; //联系人名称
@property (nonatomic, strong, nullable) NSString *contactNamePY;//联系人拼音
@property (nonatomic, strong, nullable) NSString *contactUserStatus;//ACTIVE,DELETED 加这个状态字段 default ACTIVE

- (nullable id)initWithPersonSimple:(PersonSimpleDataModel *_Nonnull)personSimple;
- (nullable id)initWithOpenDictionary:(NSDictionary *_Nonnull)dict;

//contactArray的jsonstr
- (void)appendContacts:(NSArray *)contacts;
- (nullable NSString *)contactsJSONString;
- (void)setContactsWithString:(NSString *_Nonnull)jsonStr;

- (nullable NSString *)orgInfoJSONString;
- (void)setOrgInfoWithString:(NSString *_Nonnull)jsonStr;

- (nullable NSString *)defaultParentListJSONString;
- (void)setDefaultParentListWithString:(NSString *_Nonnull)jsonStr;

- (nullable NSString *)assignParentListJSONString;
- (void)setAssignParentListWithString:(NSString *_Nonnull)jsonStr;

// 判断 contactUserStatus;//ACTIVE,DELETED 加这个状态字段
- (BOOL)isActive;

@end

@interface KDPersonJob : NSObject
@property (nonatomic, strong, nullable) NSString *orgId;
@property (nonatomic, strong, nullable) NSString *department;
@property (nonatomic, assign) int isPartJob;//1表示兼职
@property (nonatomic, assign) int isOrgHeader; // //1表示部门负责人，其他表示不是部门负责人
@property (nonatomic, strong, nullable) NSString *jobTitle;
@property (nonatomic, strong, nullable) NSString *fulldepartment;
- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict;
- (nullable NSDictionary *)toDictionary;
- (nullable NSString *)displayFullDepatement;
@end


@interface KDPersonParentInfo : NSObject
@property (nonatomic, strong, nullable) NSString *personId;     //默认上级personId
@property (nonatomic, strong, nullable) NSString *photoUrl;     //默认上级头像URL
@property (nonatomic, strong, nullable) NSString *personName;    //默认上级名称
@property (nonatomic, assign) int ptype;    //是否同时汇报

- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict;
- (nullable NSDictionary *)toDictionary;

@end

