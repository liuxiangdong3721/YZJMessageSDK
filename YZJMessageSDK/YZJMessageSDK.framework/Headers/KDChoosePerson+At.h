//
//  KDChoosePerson+At.h
//  kdweibo
//
//  Created by Scan on 2017/12/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@class KDChooseSelectedView;

@interface KDChoosePerson (At)

+ (void)atChoosePerson:(UIViewController *)viewController group:(GroupDataModel *)group complete:(void(^)(KDChooseSelectedView *selectedView))compelte;

@end
