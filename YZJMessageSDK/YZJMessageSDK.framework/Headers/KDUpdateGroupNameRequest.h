//
//  KDUpdateGroupNameRequest.h
//  kdweibo
//
//  Created by Gil on 2016/12/29.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//



@interface KDUpdateGroupNameRequest : KDBusinessRequest

- (instancetype)initWithGroupId:(NSString *)groupId
                      groupName:(NSString *)groupName;

@end
