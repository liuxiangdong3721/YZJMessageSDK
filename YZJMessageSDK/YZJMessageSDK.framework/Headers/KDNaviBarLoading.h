//
//  KDNaviBarLoading.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/7/25.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KDNavigationBarLoadingType) {
    KDNavigationBarLoadingDefault = 0,
    KDNavigationBarLoadingCustom
};

@class KDCustomIMNavigationView;
@interface KDNaviBarLoading : NSObject

/**
 显示
 
 @param navigationItem 显示的导航条
 @param delay 几秒后开始展现
 @param duration 最大持续时间
 @param loadingTitle 加载中的标题
 @param triggerBlock 触发时回调
 @param completedTitle 完成后的回调，需要外界回传一个文本，以恢复原标题
 */
- (void)showNavigationBarLoading:(UINavigationItem *)navigationItem
                           delay:(NSTimeInterval)delay
                        duration:(NSTimeInterval)duration
                    loadingTitle:(NSString *)loadingTitle
                    triggerBlock:(void (^)(void))triggerBlock
                  completedTitle:(NSString * (^)(void))completedTitle;

// titleView 版本
- (void)showNavigationBarLoading:(UINavigationItem *)navigationItem
                           delay:(NSTimeInterval)delay
                        duration:(NSTimeInterval)duration
                    loadingTitle:(NSString *)loadingTitle
                    triggerBlock:(void (^)(void))triggerBlock
              completedTitleView:(UIView * (^)(void))completedTitleView;

// 消息导航栏版本
- (void)showCustomIMNavBarLoading:(KDCustomIMNavigationView *)customNavView
                            delay:(NSTimeInterval)delay
                         duration:(NSTimeInterval)duration
                     loadingTitle:(NSString *)loadingTitle
                     triggerBlock:(void (^)(void))triggerBlock
               completedTitleView:(UIView * (^)(void))completedTitleView;
/**
 隐藏
 
 @param navigationItem 显示的导航条
 @param originalTitle 原本标题
 */
- (void)hideNavigationBarLoading:(UINavigationItem *)navigationItem
                   originalTitle:(NSString *)originalTitle;


/**
 隐藏

 @param navigationItem 显示的导航条
 @param originalTitleView 原本titleview
 */
- (void)hideNavigationBarLoading:(UINavigationItem *)navigationItem
               originalTitleView:(UIView *)originalTitleView;

@property (nonatomic, assign) BOOL showLockTag;


@end
