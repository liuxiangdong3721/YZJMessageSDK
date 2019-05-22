//
//  KDMsgassistClient.h
//  kdweibo
//
//  Created by kyle on 16/7/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "BOSConnect.h"

@interface KDMsgassistClient : BOSConnect

- (void)createRelationWithNetwrokId:(NSString *)networkId;
- (void)deleteRelationWithNetwrokId:(NSString *)networkId;
- (void)getRelationList;
- (void)getRelationNetworkMsgs;
- (void)getRelationGroupMsgsWithNetworkId:(NSString *)networkId;
- (void)getDefaultNetworkId;
- (void)getRelationGroupsWithPersonId:(NSString *)personId;

- (void)getLightAppMsgsWithGroupId:(NSString *)groupId
                             appid:(NSString *)appid
                         messageId:(NSString *)messageId
                             limit:(NSInteger)limit
                         direction:(NSInteger)direction;
- (void)getLightAppListWithGroupId:(NSString *)groupId;

//内部组二维码
- (void)getInnerQRUrlWithGroupId:(NSString *)groupId;
- (void)doShareQRUrlWithUrl:(NSString *)url;

// 人员状态
- (void)getPersonStatusWithEid:(NSString *)eid lastUpdateTime:(NSNumber *)lastUpdateTime;

// 部门群组
- (void)getGroupIdWithOrgId:(NSString *)orgId;

- (void)dismissDepGroupWithOrgId:(NSString *)orgId;
- (void)doAdminWithOrgId:(NSString *)orgId operator:(NSString *)operator adminPersonIds:(NSArray *)adminPersonIds;
@end
