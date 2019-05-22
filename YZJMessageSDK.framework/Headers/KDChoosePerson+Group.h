//
//  KDChoosePerson+Group.h
//  kdweibo
//
//  Created by Scan on 2017/12/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (Group)

+ (void)groupAddPersonWithGroup:(GroupDataModel *)group controller:(UIViewController *)viewController complete:(void(^)(BOOL isNewGroup, GroupDataModel *resultGroup))complete;

+ (void)groupDelelePersonWithGroup:(GroupDataModel *)group controller:(UIViewController *)viewController complete:(void(^)(KDChooseSelectedView *selectedView))compelte;

+ (void)groupSetManagerWithGroup:(GroupDataModel *)group maxCount:(NSInteger)count controller:(UIViewController *)viewController complete:(void(^)(KDChooseSelectedView *selectedView))compelte;
@end
