//
//  KDSectionModel+ViewDatas.h
//  kdweibo
//
//  Created by Scan on 2017/12/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDSectionModel.h"

@class KDChooseConfig;

@interface KDSectionModel (ViewDatas)

+ (void)makeViewPersonSectionDatasWithConfig:(KDChooseConfig *)config complete:(void(^)(NSArray<KDSectionModel*>* personSections))complete;

+ (NSArray<KDSectionModel*>*)makeAllSelectSectionWithConfig:(KDChooseConfig *)config allPerons:(NSArray<KDSectionModel*>*)allPerson;

@end
