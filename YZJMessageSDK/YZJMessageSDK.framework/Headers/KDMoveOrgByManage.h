//
//  KDMoveOrgByManage.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/2/23.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface KDMoveOrgByManage : KDBusinessRequest

- (instancetype)initWithPersonId:(NSString *)personId orgId:(NSString *)orgId dotoken:(NSString *)dotoken dotokensecret:(NSString *)dotokensecret;

@end
