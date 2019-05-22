//
//  KDLiveBannerView.h
//  kdweibo
//
//  Created by kyle on 2017/4/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDMeetingBannerModel;
@interface KDLiveBannerView : UIView

@property (nonatomic, strong) KDMeetingBannerModel *bannerModel;
@property (nonatomic, copy) void (^blockButtonPressed)(void);

@end
