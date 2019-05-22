//
//  KDSortPanelRequest.h
//  kdweibo
//
//  Created by kyle on 2017/1/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDSortPanelRequest : KDBusinessRequest

- (instancetype)initWithGroupAppFIDs:(NSString *)groupAppFIDs GroupId:(NSString *)gid groupType:(NSInteger)groupType groupRange:(NSInteger)groupRange;

@end
