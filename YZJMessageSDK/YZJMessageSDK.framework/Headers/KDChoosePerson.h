//
//  KDChoosePerson.h
//  kdweibo
//
//  Created by Scan on 2017/11/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDChoosePersonConfig.h"
#import "KDChooseEnumDefine.h"

@class KDChooseSelectedView;

@interface KDChoosePerson : NSObject

/**
 选人跳转的主页 都以 present 一个 navigationController 方式

 @param rootType KDChooseRootViewTypeDefault时，只能展现默认的数据
 @param config KDChooseConfig
 @param viewController <#viewController description#>
 @param complete <#complete description#>
 */
+ (void)choosePersonWithRootType:(KDChooseRootViewType)rootType config:(KDChooseConfig *_Nonnull)config controller:(UIViewController *_Nonnull)viewController complete:(void(^_Nullable)(KDChooseSelectedView * _Nonnull selectedView))complete;

/**
 选人跳转的主页 都以 present 一个 navigationController 方式 

 @param rootType KDChooseRootViewTypeDefault时，只能展现默认的数据
 @param config KDChoosePersonConfig
 @param staticArray only KDChooseRootViewTypeDefault type set staticArray
 @param viewController <#viewController description#>
 @param complete <#complete description#>
 */
+ (void)choosePersonWithRootType:(KDChooseRootViewType)rootType personConfig:(KDChoosePersonConfig *_Nonnull)config staticArray:(NSArray<NSNumber *>*_Nullable)staticArray controller:(UIViewController *_Nonnull)viewController complete:(void(^_Nullable)(KDChooseSelectedView * _Nonnull selectedView))complete;

/**
 开始选人: 人员数据 由 选人范围 > ab方案 决定

 @param config <#config description#>
 @param staticArray <#staticArray description#>
 @param viewController <#viewController description#>
 @param complete <#complete description#>
 */
+ (void)selectPersonWithConfig:(KDChoosePersonConfig *_Nonnull)config staticArray:(NSArray<NSNumber *>* _Nullable)staticArray controller:(UIViewController * _Nonnull)viewController complete:(void(^_Nullable)(NSArray<PersonSimpleDataModel *>* _Nonnull persons))complete;
@end
