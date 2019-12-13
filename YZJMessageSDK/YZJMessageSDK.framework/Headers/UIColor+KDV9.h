//
//  UIColor+KDV9.h
//  kdweibo
//
//  Created by Gil on 15/7/1.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//  revisited by Darren on 16/9/5.
//  revisited by Pei on 17/5/2.

#import <UIKit/UIKit.h>

#define UIColorFromRGB(rgbValue) [UIColor colorWithRGB:rgbValue]
#define UIColorFromRGBA(rgbValue, alphaValue) [UIColor colorWithRGB:rgbValue alpha:alphaValue]

@interface UIColor (KDV9)

+ (UIColor *)kdTextColor1;          /**< 1D1D1D */
+ (UIColor *)kdTextColor1_half;     /**< 50%1D1D1D */
+ (UIColor *)kdTextColor2;          /**< 768893 */
+ (UIColor *)kdTextColor3;          /**< A4A8AB */
+ (UIColor *)kdTextColor4;          /**< EA5E56 */
+ (UIColor *)kdTextColor5;          /**< 3CBAFF */
+ (UIColor *)kdTextColor6;          /**< FFFFFF */
+ (UIColor *)kdTextColor6_half;     /**< 50%FFFFFF */
+ (UIColor *)kdTextColor7;          /**< 13BBAD */
+ (UIColor *)kdTextColor8;          /**< 32AA70 */
+ (UIColor *)kdTextColor9;          /**< DE4873 */
+ (UIColor *)kdTextColor10;         /**< 36%1F2D38 */
+ (UIColor *)kdTextColor11;         /**< F59C25 */
+ (UIColor *)kdTextColor12;         /**< E26735 */
+ (UIColor *)kdTextColor13;         /**< 3FB7DF */
+ (UIColor *)kdTextColor14;         /**< 655DD4 */
+ (UIColor *)kdTextColor15;         /**< 484B51 */
+ (UIColor *)kdTextColor16;         /**< 4570D3 */
+ (UIColor *)kdTextColor17;         /**< C2CCD0 */
+ (UIColor *)kdTextColor18;         /**< 4598F0 */

+ (UIColor *)kdBackgroundColor1;    /**< F6F7F8 */
+ (UIColor *)kdBackgroundColor2;    /**< FFFFFF */
+ (UIColor *)kdBackgroundColor3;    /**< E7E9EB */
+ (UIColor *)kdBackgroundColor4;    /**< FEEEEE */
+ (UIColor *)kdBackgroundColor5;    /**< 04142A */
+ (UIColor *)kdBackgroundColor6;    /**< F7F9FA v8下所有列表cell的背景色 */
+ (UIColor *)kdBackgroundColor7;    /**< F1F4F8 */
+ (UIColor *)kdDividingLineColor;   /**< E6E8EE */
+ (UIColor *)kdSubtitleColor;
+ (UIColor *)kdCellSelectedColor;   /**< 50%0xE8EEF0 v9通用cell点击颜色 */

+ (UIColor *)kdVoiceColor;
+ (UIColor *)kdLiveColor;
+ (UIColor *)kdLiveBannerColor;

+ (UIColor *)kdPopupColor;
+ (UIColor *)kdPopupBackgroundColor;

+ (UIColor *)kdButtonHightColor;
+ (UIColor *)kdQRScanMaskColor;
+ (UIColor *)kdMaskColor;

+ (UIColor *)colorWithRGB:(int)rgbValue;
+ (UIColor *)colorWithRGB:(int)rgbValue alpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexRGB:(NSString *)inColorString;
+ (UIColor *)colorWithHexRGB:(NSString *)inColorString alpha:(CGFloat)alpha;

+ (UIColor *)kdNavYellowColor;

+ (UIColor *)kdBlackColor;//十分之一的纯黑

@end
