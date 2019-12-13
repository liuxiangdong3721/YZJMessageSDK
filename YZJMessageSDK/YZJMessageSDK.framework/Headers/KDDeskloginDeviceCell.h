//
//  KDDeskloginDeviceCell.h
//  kdweibo
//
//  Created by hour on 2018/4/28.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDDesktopDeviceModel;

typedef void(^KDExitBlock)(KDDesktopDeviceModel *model);

@interface KDDeskloginDeviceCell : KDLS2Cell

@property (nonatomic, strong) KDDesktopDeviceModel *model;
@property (nonatomic, strong) KDExitBlock exitBlock;

@end
