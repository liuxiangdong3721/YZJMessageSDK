//
//  KDStaticRowModel+KDCheckRole.h
//  kdweibo
//
//  Created by Scan on 2017/11/15.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDStaticRowModel.h"

@interface KDStaticRowModel (KDCheckRole)

+ (void)checkHasRole:(void(^)(BOOL hasRole))compete;

+ (void)checkHasLinkSpace:(void(^)(BOOL hasSpace))complete;

@end
