//
//  KDChoosePerson+CreateVoiceMetting.h
//  kdweibo
//
//  Created by Scan on 2017/11/21.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (CreateVoiceMetting)

+ (void)voiceMettingCreateOrAddtPerson:(UIViewController *)viewController selected:(NSArray<NSString *>*)selectPersonIds complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

/**
 @param isShowExt isShowExt 是否展示外部好友 默认YES
 */
+ (void)voiceMettingCreateOrAddtPerson:(UIViewController *)viewController isShowExt:(BOOL)isShowExt selected:(NSArray<NSString *>*)selectPersonIds complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;



@end
