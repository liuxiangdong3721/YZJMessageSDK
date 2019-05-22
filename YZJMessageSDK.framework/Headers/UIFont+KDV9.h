//
//  UIFont+KDV9.h
//  kdweibo
//
//  Created by Gil on 15/7/1.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//  revisited by Darren on 16/9/5.
//  revisited by Pei on 17/5/2.

#import <UIKit/UIKit.h>

//参与字体变化
@interface UIFont (KDV9)
+ (UIFont *)kdFont0;
+ (UIFont *)kdFont1;
+ (UIFont *)kdFont2;
+ (UIFont *)kdFont3;
+ (UIFont *)kdFont4;
+ (UIFont *)kdFont5;
+ (UIFont *)kdFont6;
+ (UIFont *)kdFont7;
+ (UIFont *)kdFont8;
+ (UIFont *)kdFont9;
+ (UIFont *)kdFont10;
+ (UIFont *)kdFont11;
+ (UIFont *)kdFont12;
+ (UIFont *)kdTabbarFont;
@end

//不参与字体大小变化的
@interface UIFont (KDFontStyle)
+ (UIFont *)kdFont0_O;
+ (UIFont *)kdFont1_O;
+ (UIFont *)kdFont2_O;
+ (UIFont *)kdFont3_O;
+ (UIFont *)kdFont4_O;
+ (UIFont *)kdFont5_O;
+ (UIFont *)kdFont6_O;
+ (UIFont *)kdFont7_O;
+ (UIFont *)kdFont8_O;
+ (UIFont *)kdFont9_O;
+ (UIFont *)kdFont10_O;
+ (UIFont *)kdFont11_O;
+ (UIFont *)kdFont12_O;

@end
