//
//  KDTimelinePopoverType.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/10/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDCustomIMNavigationViewOCCompatible.h"
@class KDDoNotDisturbPopupView;
@protocol KDTimelinePopoverType <KDCustomIMNavigationViewOCCompatible>
- (void)setup;
- (void)popoverAnimation;
- (void)hidePop;
- (void)reloadData;
@property (nonatomic, strong) KDDoNotDisturbPopupView *doNotDisturbPopupView;
@end

