//
//  KDChoosePerson+CreateLive.h
//  kdweibo
//
//  Created by Scan on 2017/11/21.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (CreateLive)

+ (void)liveCreateOrAddtPerson:(UIViewController *)viewController selected:(NSArray<NSString *>*)selectPersonIds complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;
+ (void)videoMeetingCreateOrAddtPerson:(UIViewController *)viewController selected:(NSArray<NSString *>*)selectPersonIds complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;
@end
