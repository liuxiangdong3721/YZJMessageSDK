//
//  UIBarButtonItem+Custom.h
//  kdweibo
//
//  Created by sevli on 16/9/9.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    KDNavigationItemStyle_Normal = 0,    // system
    KDNavigationItemStyle_Blue,
    KDNavigationItemStyle_White,
} KDNavigationItemStyle;

@class GroupDataModel;

#define KDBARBUTTON_OFFSET_DEFAULT [UIBarButtonItem kd_leftSecondItemOffsetX]

@interface UIBarButtonItem (Custom)

+ (UIBarButtonItem * _Nullable)kd_makeDefaultBackItemTarget:(nullable id)target
                                                     action:(nullable SEL)action;

+ (UIBarButtonItem * _Nullable)kd_makeWhiteBackItemTarget:(nullable id)target
                                                   action:(nullable SEL)action;

+ (UIBarButtonItem * _Nullable)kd_makeWhiteCloseItemTarget:(nullable id)target
                                                    action:(nullable SEL)action;

+ (NSArray<UIBarButtonItem *> * _Nullable)kd_makeDefaultBackAndCloseItemTarget:(nullable id)target
                                                                    backAction:(nullable SEL)backAction
                                                                   closeAction:(nullable SEL)closeAction;

+ (NSArray<UIBarButtonItem *> * _Nullable)kd_makeWhiteBackAndCloseItemTarget:(nullable id)target
                                                                  backAction:(nullable SEL)backAction
                                                                 closeAction:(nullable SEL)closeAction;

+ (UIBarButtonItem * _Nullable)kd_makeRightSingleItemTarget:(nullable id)target
                                                  imageName:(nullable NSString *)imageName
                                              highlightName:(nullable NSString *)highlightName
                                                     action:(nullable SEL)action;

+ (NSArray<UIBarButtonItem *> * _Nullable)kd_makeRightDoubleItemTarget:(nullable id)target
                                                        firstImageName:(nullable NSString *)firstImageName
                                                    firstHighlightName:(nullable NSString *)firstHighlightName
                                                           firstAction:(nullable SEL)firstAction
                                                       secondImageName:(nullable NSString *)secondImageName
                                                   secondHighlightName:(nullable NSString *)secondHighlightName
                                                          secondAction:(nullable SEL)secondAction;

+ (NSArray<UIBarButtonItem *> * _Nullable)kd_makeRightDoubleItemTarget:(nullable id)target
                                                            firstImage:(nullable UIImage *)firstImage
                                                        firstHighlight:(nullable UIImage *)firstHighlight
                                                           firstAction:(nullable SEL)firstAction
                                                           secondImage:(nullable UIImage *)secondImage
                                                       secondHighlight:(nullable UIImage *)secondHighlight
                                                          secondAction:(nullable SEL)secondAction;

+ (NSArray<UIBarButtonItem *> * _Nullable)kd_makeLeftItemsWithCustomView:(nullable UIView *)customView;
+ (NSArray<UIBarButtonItem *> * _Nullable)kd_makeRightItemsWithCustomView:(nullable UIView *)customView;

+ (UIBarButtonItem * _Nullable)kd_makeLeftItemWithTitle:(nullable NSString *)title
                                                 target:(nullable id)target
                                                 action:(nullable SEL)action;

+ (UIBarButtonItem * _Nullable)kd_makeRightItemWithTitle:(nullable NSString *)title
                                                  target:(nullable id)target
                                                  action:(nullable SEL)action;

+ (UIBarButtonItem * _Nullable)kd_makeLeftItemWithTitle:(nullable NSString *)title
                                                  color:(nullable UIColor *)color
                                                 target:(nullable id)target
                                                 action:(nullable SEL)action;

+ (UIBarButtonItem * _Nullable)kd_makeRightItemWithTitle:(nullable NSString *)title
                                                   color:(nullable UIColor *)color
                                                  target:(nullable id)target
                                                  action:(nullable SEL)action;

// 修改KDBarButtonFixedView的offset, 仅限iOS11使用
- (void)changeBarButtonFixedViewOffset:(CGFloat)offset;
- (void)changeBarButtonFixedViewOffset:(CGFloat)offset width:(CGFloat)width height:(CGFloat)height;

+ (CGFloat)kd_titleWidth;
+ (CGFloat)kd_leftSecondItemOffsetX;
+ (CGFloat)kd_leftSecondImageOffsetX;
+ (CGFloat)kd_customViewDistance;

@end
