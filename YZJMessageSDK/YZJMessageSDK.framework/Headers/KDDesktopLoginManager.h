//
//  KDDesktopLoginManager.h
//  kdweibo
//
//  Created by hour on 2018/4/27.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class KDDesktopDeviceModel;

@interface KDDesktopLoginManager : NSObject

@property (nonatomic, strong) NSArray<KDDesktopDeviceModel *> *devices;

// 是否静音
@property (nonatomic, assign) BOOL isMuteMobilePush;


+ (instancetype)sharedManager;

- (void)query;

- (void)queryHasDesktopLogin:(NSNumber *)updateTime;
- (void)queryGetStatus;

- (BOOL)isShowDesktopLogin;

- (void)removeDeviceWithDeviceId:(NSString *)deviceId;

@end
