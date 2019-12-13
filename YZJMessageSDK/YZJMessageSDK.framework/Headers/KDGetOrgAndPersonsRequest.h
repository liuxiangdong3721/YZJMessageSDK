//
//  KDGetOrgAndPersonsRequest.h
//  kdweibo
//
//  Created by Scan on 2017/4/6.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDGetOrgAndPersonsRequest : KDBusinessRequest

- (id)initWithOrgId:(NSString *)orgId type:(NSInteger)type;

@end

@interface KDIsSubPersonRequest : KDBusinessRequest

- (id)initWithPersonId:(NSString *)personId;

@end
