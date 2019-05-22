//
//  KDChoosePerson+Others.h
//  kdweibo
//
//  Created by Scan on 2017/12/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (Others)

/** 个人详情转移客户  单选 */
+ (void)personTransferCustomer:(UIViewController *)viewController complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

/** 任务加人*/
+ (void)taskAddPerson:(UIViewController *)viewController selected:(NSArray<NSString *>*)personIds  complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

/** app 开通范围选人 */
+ (void)appPermisSelectPerson:(UIViewController *)viewController selected:(NSArray<NSString *>*)personIds  complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

/** 企业互联空间选人 */
+ (void)LikeSpaceSelectPersons:(UIViewController *)viewController chooseConfig:(KDChooseConfig *)config complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;
@end
