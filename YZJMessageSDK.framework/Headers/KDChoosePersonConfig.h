//
//  KDChoosePersonConfig.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDChooseEnumDefine.h"
#import "KDChooseTypeEnum.h"

@interface KDChooseRolePersonConfig : NSObject

@property (nonatomic, copy, nullable) NSString *  appIds;
@property (nonatomic, assign) BOOL showSelectedRoles; //是否直接跳转到展示已选中的角色列表界面
@property (nonatomic, copy, nullable) NSString *selectedRoleIds;

@end

@interface KDChooseOrgnazitionConfig : NSObject

@property (nonatomic, assign) KDChooseOrgPersonType concernType;

@end

//群组加人配置，业务不一样
@interface KDChooseGroupAddPersonConfig : NSObject

- (instancetype _Nonnull)initWithGroup:(GroupDataModel  *_Nullable)group;
@property (nonatomic, strong, readonly) GroupDataModel * _Nullable addPersonGroup;

@end

#pragma mark -
//语音会议配置
@interface KDChooseVoiceMeetConfig : NSObject

@property (nonatomic, copy) NSArray <PersonSimpleDataModel *>* _Nullable joiners;

@end

#pragma mark -
//已有群组配置
@interface KDChooseGroupTimeConfig : NSObject

@property (nonatomic, assign) BOOL canShowExtGroup;
@property (nonatomic, assign) BOOL isMultChooseGroup;
@property (nonatomic, copy, nullable) NSString *groupSearchKeyWord;
@property (nonatomic, assign) BOOL mayHiddenSelectAll; //已有群组的组内 多余100 人的时候不显示全选 （发起群聊和群组加人）

@property (nonatomic, strong, nullable) NSArray<NSString *> *blackGroupIds;  //不显示的群组Ids

@end

#pragma mark -
//外部好友配置
@interface KDChooseExtFriendConfig : NSObject

@property (nonatomic, assign) BOOL canShowWechat;
@property (nonatomic, assign) BOOL isExtLocalAddMultChoose;
@property (nonatomic, copy, nullable) NSString *adduserType;

@end

#pragma mark -

@interface KDChoosePersonConfig : NSObject<NSCopying>

@property (nonatomic, assign) BOOL isChooseViewControllerPush; //default NO
@property (nonatomic, weak, nullable)   UIViewController *onPushedViewController; //default nil, 哪个vc push过来的 设置 isChooseViewControllerPush YES 时，需要设置 作用：返回手势时候，做一些清理工作

@property (nonatomic, assign) BOOL isMultChoose;  //default YES
@property (nonatomic, assign) BOOL canDisplaySelf; //default NO
@property (nonatomic, assign) BOOL canDispalyIndexTitle; //default NO

@property (nonatomic, assign) NSInteger minSelectCount; //default 1
@property (nonatomic, assign) NSInteger maxSelectCount; //default MAX_INT

@property (nonatomic, strong, nullable) NSArray<NSString *> *selectedPersonIds; //openid 或者 personid  //default nil
@property (nonatomic, strong, nullable) NSArray<NSString *> *blackPersonsOids;  //openid 或者 personid  //default nil
@property (nonatomic, strong, nullable) NSArray<NSString *> *selectPersonsRangeIds; //openid 或者 personid  //default nil
@property (nonatomic, strong, nullable) NSArray<NSString *> *unEnableSelectPersonsIds; //openid 或者 personid //default nil

@property (nonatomic, assign) BOOL showAllSelectWhenSelectInRange; //default NO
@property (nonatomic, strong, nullable) NSString *allSelectTitle; //default 全选

@property (nonatomic, assign) BOOL recentHiddenExtPerson; //default NO
@property (nonatomic, assign) BOOL isSearchShowPersonJobTitle; //default NO

@property (nonatomic, strong, nullable) NSString *title; //vc 的标题
@property (nonatomic, strong, nullable) NSString *buttonTitle; //default 确定

@property (nonatomic, strong, nullable) KDChooseGroupTimeConfig *groupConfig;  //default nil
@property (nonatomic, strong, nullable) KDChooseExtFriendConfig *extFriendConfig; //default nil
@property (nonatomic, strong, nullable) KDChooseVoiceMeetConfig *voiceMeetConfig; //default nil
@property (nonatomic, strong, nullable) KDChooseGroupAddPersonConfig *groupAddConfig; //default nil
@property (nonatomic, strong, nullable) KDChooseOrgnazitionConfig *orgConfig;
@property (nonatomic, strong, nullable) KDChooseRolePersonConfig *roleConfig;

@property (nonatomic, strong, nullable) NSString *personCellClassString; //defalut XTContactPersonMultipleChoiceCell

+ (KDChoosePersonConfig *_Nonnull)defaultConfig;

@end

@interface KDChooseConfig : NSObject

@property (nonatomic, strong) NSArray <NSArray<NSNumber*>*>* _Nullable staticConfig; // NSNumber numberOf: KDChooseType
@property (nonatomic, assign) KDChooseDataType displayType;

@property (nonatomic, strong, nonnull) KDChoosePersonConfig *personConfig; //default
/**
 staticConfig default arraywith: KDChooseTypeOrg,KDChooseTypeExtFriend, KDChooseTypeGroup, KDChooseTypeRole
 displayType default KDChooseDataTypeDefault
 personConfig default nil
 */
+ (KDChooseConfig *_Nonnull)makeDefaultConfig;

@end
