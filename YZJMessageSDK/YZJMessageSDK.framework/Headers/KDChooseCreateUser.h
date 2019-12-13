//
//  KDChooseCreateUser.h
//  kdweibo
//
//  Created by Scan on 2017/11/16.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KDChooseSelectedView;

@interface KDChooseCreateUser : NSObject

+ (void)createUnarchiveUsers:(KDChooseSelectedView *)selectedView complete:(void(^)(NSArray<PersonSimpleDataModel*> *persons))block;
@end
