//
//  KDCycleBannerView.h
//  kdweibo
//
//  Created by Joyingx on 2016/9/27.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol KDCycleBannerViewDelegate <NSObject>

@required
/// 要展示的Banner数量
- (NSInteger)numberOfImagesForBannerView;
/// 指定位置要展示的图片URL
- (NSString *)imageURLForBannerAtIndex:(NSInteger)index;

@optional
/// 指定位置Banner是否可关闭
- (BOOL)couldBannerBeCloseAtIndex:(NSInteger)index;
/// 指定位置Banner被点击的回调方法
- (void)bannerDidTappedAtIndex:(NSInteger)index;
/// 指定位置Banner被关闭的回调方法
- (void)bannerDidClosedAtIndex:(NSInteger)index;
/// 指定位置广告曝光埋点所需属性字典
- (NSDictionary *)eventAttributesForBannerAtIndex:(NSInteger)index;

@end

@interface KDCycleBannerView : UIView

@property (nonatomic, weak) id<KDCycleBannerViewDelegate> delegate;
@property (nonatomic, assign) NSTimeInterval autoScrollTimeInterval;
@property (nonatomic, assign) BOOL shouldShowMask;

- (void)reloadData;

@end
