//
//  KDQueryListByGidV2Request.h
//  kdweibo
//
//  Created by kyle on 2017/2/28.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDQueryListByGidV2Request : KDBusinessRequest

- (instancetype)initWithGroupId:(NSString *)gid groupType:(NSInteger)groupType groupRange:(NSInteger)groupRange;

@end
