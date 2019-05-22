//
//  KDNetworkInfoModal.h
//  kdweibo
//
//  Created by Scan on 17/2/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDNetworkInfoModal : NSObject <NSCoding>

@property(nonatomic, strong) NSString *networkPhotoUrl;
@property(nonatomic, copy) NSString *memberCount;
@property(nonatomic, strong) NSString *name;
@property(nonatomic, assign) BOOL allowApplyJoin;
@property(nonatomic, assign) BOOL allowNoAdminInvite;
@property (nonatomic, copy) NSString *creatorId;
@property (nonatomic, assign) BOOL allowMemberCount; // 是否显示人数
@property (nonatomic, strong) NSString *networkGroupId; //全员群ID


- (id)initWithDict:(NSDictionary *)dict;


@end
