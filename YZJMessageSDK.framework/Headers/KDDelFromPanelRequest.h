//
//  KDDelFromPanelRequest.h
//  kdweibo
//
//  Created by kyle on 2017/1/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDDelFromPanelRequest : KDBusinessRequest

- (instancetype)initWithGroupAppFIDs:(NSString *)groupAppFID GroupId:(NSString *)gid groupType:(NSInteger)groupType groupRange:(NSInteger)groupRange;

@end
