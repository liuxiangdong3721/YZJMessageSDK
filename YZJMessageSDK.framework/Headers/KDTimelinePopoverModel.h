//
//  KDTimelinePopoverModel.h
//  kdweibo
//
//  Created by Darren Zheng on 19/10/2017.
//  Copyright © 2017 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDTimelinePopoverType.h"

@interface KDTimelinePopoverModel : NSObject <KDTimelinePopoverType>

@property (nonatomic, assign) id <KDCustomIMNavigationViewType> _Nullable customNavigationType;

- (instancetype _Nullable )initWithCustomNavigationType:(id <KDCustomIMNavigationViewType> _Nullable)customNavigationType;
- (void)reloadData;
- (void)setup;
- (void)popoverAnimation;
- (void)hidePop;
@property (nonatomic, strong) KDDoNotDisturbPopupView * _Nullable doNotDisturbPopupView;

@end

