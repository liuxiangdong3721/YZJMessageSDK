//
//  KDSectionModel+StaticSection.h
//  kdweibo
//
//  Created by Scan on 2017/11/15.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDSectionModel.h"

#import "KDStaticRowModel.h"

@interface KDSectionModel (StaticSection)

+ (KDSectionModel *)makeStaticSection:(NSArray<NSNumber*>*)sortChooseType;

@end
