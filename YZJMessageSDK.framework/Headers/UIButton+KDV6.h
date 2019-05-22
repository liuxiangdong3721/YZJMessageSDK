//
//  UIButton+KDV6.h
//  kdweibo
//
//  Created by Gil on 15/7/6.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (KDV6)

+ (UIButton *)grayBtnWithTitle:(NSString *)title;
+ (UIButton *)yellowBtnWithTitle:(NSString *)title;

+ (UIButton *)backBtnInWhiteNavWithTitle:(NSString *)title;
+ (UIButton *)backBtnInWhiteNavWithTitle:(NSString *)title inNav:(BOOL)inNav;
+ (UIButton *)backBtnInBlueNavWithTitle:(NSString *)title;
+ (UIButton *)backBtnInBlueNavWithTitle:(NSString *)title inNav:(BOOL)inNav;
+ (UIButton *)btnInNavWithImage:(UIImage *)image
               highlightedImage:(UIImage *)highlightedImage;

@end
