//
//  KDRefreshBaseView.h
//  kdweibo
//
//  Created by 张培增 on 2017/5/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDRefreshConst.h"
#import "UIView+MJExtension.h"
#import "UIScrollView+MJExtension.h"
//#import "LOTAnimationView.h"
#import <Lottie/Lottie.h>

#pragma mark - 控件的刷新状态
typedef enum {
    KDRefreshStatePulling = 1,          // 松开就可以进行刷新的状态
    KDRefreshStateNormal = 2,           // 普通状态
    KDRefreshStateRefreshing = 3,       // 正在刷新中的状态
    KDRefreshStateWillRefreshing = 4
} KDRefreshState;

#pragma mark - 控件的类型
typedef enum {
    KDRefreshViewTypeHeader = -1, // 头部控件
    KDRefreshViewTypeFooter = 1 // 尾部控件
} KDRefreshViewType;

@interface KDRefreshBaseView : UIView

#pragma mark - 父控件
@property (nonatomic, weak, readonly) UIScrollView *scrollView;
@property (nonatomic, assign, readonly) UIEdgeInsets scrollViewOriginalInset;

#pragma mark - 内部的控件
@property (nonatomic, strong, readonly) UILabel *statusLabel;
@property (nonatomic, strong, readonly) LOTAnimationView *logoAnimationView;
@property (nonatomic, strong, readonly) UIImageView *imageView;

@property (nonatomic, assign) CGFloat logoWidth;

@property (nonatomic, strong) NSString *lottieJsonFileName;

#pragma mark - 回调
/**
 *  开始进入刷新状态的监听器
 */
@property (weak, nonatomic) id beginRefreshingTaget;
/**
 *  开始进入刷新状态的监听方法
 */
@property (assign, nonatomic) SEL beginRefreshingAction;
/**
 *  开始进入刷新状态就会调用
 */
@property (nonatomic, copy) void (^beginRefreshingCallback)(void);

#pragma mark - 刷新相关
/**
 *  是否正在刷新
 */
@property (nonatomic, readonly, getter=isRefreshing) BOOL refreshing;
/**
 *  开始刷新
 */
- (void)beginRefreshing;
/**
 *  结束刷新
 */
- (void)endRefreshing;

#pragma mark - 交给子类去实现 和 调用
@property (assign, nonatomic) KDRefreshState state;

/**
 *  文字
 */
@property (copy, nonatomic) NSString *pullToRefreshText;
@property (copy, nonatomic) NSString *releaseToRefreshText;
@property (copy, nonatomic) NSString *refreshingText;

/**
 *  frame
 */
- (void)setupFrame;

@end
