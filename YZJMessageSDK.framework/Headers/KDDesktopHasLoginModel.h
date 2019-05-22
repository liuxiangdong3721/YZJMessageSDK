//
//  KDDesktopHasLoginModel.h
//  kdweibo
//
//  Created by hour on 2018/4/26.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//



@protocol KDDesktopDeviceModel;

@interface KDDesktopHasLoginModel : KDJSONModel

@property (nonatomic, strong) NSArray<KDDesktopDeviceModel> *devices;

@end


@interface KDDesktopDeviceModel : KDJSONModel

@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, copy) NSString *deviceName;

@end
