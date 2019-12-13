//
//  KDTimelineBadgeModel.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/10/24.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol KDTimelineBadgeType, KDTimelineTabbarType;
@interface KDTimelineBadgeModel : NSObject 
@property (nonatomic, weak) id <KDTimelineTabbarType> _Nullable tabbarType;
- (instancetype _Nullable )initWithTabbarType:(id <KDTimelineTabbarType> _Nullable)tabbarType;

- (void)updateBagdeValue;
- (void)setApplicationBadgeNumber:(NSInteger)unreadCount;
- (void)updateApplicationBadgeNumber;
@end
