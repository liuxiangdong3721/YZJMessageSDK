//
//  KDPublicAccountDataModel.h
//  kdweibo
//
//  Created by Gil on 15/3/28.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "PersonSimpleDataModel.h"

@interface KDPublicAccountDataModel : PersonSimpleDataModel

@property(nonatomic, copy, nullable) NSString *menu;//菜单
@property(nonatomic, copy, nullable) NSString *note;//备注

@property(nonatomic, assign) BOOL subscribe; //关注状态，是否已关注
@property(nonatomic, assign) BOOL canUnsubscribe; //是否可取消关注
@property(nonatomic, assign) BOOL manager;//是否为管理员
@property(nonatomic, assign) BOOL share;//公共号内容能否被分享
@property(nonatomic, assign) BOOL fold;//是否参与折叠
@property(nonatomic, assign) BOOL reply;//是否可回复及查看菜单

@property(nonatomic, assign) BOOL isReject; //是否开启拒收消息

@property(nonatomic, assign) BOOL isSpecial; //是否是特殊的订阅号按钮，比如添加
///国际化的数据源
@property(nonatomic, copy, nullable) NSString *i18nNames;
///国际化名，如果是英文会显示英文
@property(nonatomic, copy, readonly, nullable) NSString *localizedName;

///公共号本地强制国际化的方法
+ (nullable NSString *)localizedNameWithName:(NSString *_Nonnull)name;

@end
