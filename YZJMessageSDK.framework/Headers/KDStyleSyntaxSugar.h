//
//  KDStyleSyntaxSugar.h
//  kdweibo
//
//  Created by Darren on 15/7/7.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//  revisited by Darren on 16/9/5.
//  revisited by Pei on 17/5/2.

#import "UIDevice+Additions.h"

#import "UIFont+KDV9.h"
#import "UIColor+KDV9.h"
#import "NSNumber+KDV6.h"

#pragma mark - Color -

#define FC1 [UIColor kdTextColor1]
#define FC1_HALF [UIColor kdTextColor1_half]
#define FC2 [UIColor kdTextColor2]
#define FC3 [UIColor kdTextColor3]
#define FC4 [UIColor kdTextColor4]
#define FC5 [UIColor kdTextColor5]
#define YZJ_BLUE [UIColor kdTextColor5]
#define FC6 [UIColor kdTextColor6]
#define FC6_HALF [UIColor kdTextColor6_half]
#define FC7 [UIColor kdTextColor7]
#define FC8 [UIColor kdTextColor8]
#define FC9 [UIColor kdTextColor9]
#define FC10 [UIColor kdTextColor10]
#define FC11 [UIColor kdTextColor11]
#define FC12 [UIColor kdTextColor12]
#define FC13 [UIColor kdTextColor13]
#define FC14 [UIColor kdTextColor14]
#define FC15 [UIColor kdTextColor15]
#define FC16 [UIColor kdTextColor16]
#define FC17 [UIColor kdTextColor17]
#define FC18 [UIColor kdTextColor18]

#define BGC1 [UIColor kdBackgroundColor1]
#define BGC2 [UIColor kdBackgroundColor2]
#define BGC3 [UIColor kdBackgroundColor3]
#define BGC4 [UIColor kdBackgroundColor4]
#define BGC5 [UIColor kdBackgroundColor5]
#define BGC6 [UIColor kdBackgroundColor6]
#define BGC7 [UIColor kdBackgroundColor7]

#define YZJ_Voice [UIColor kdVoiceColor]
#define YZJ_Live [UIColor kdLiveColor]
#define YZJ_Live_Banner [UIColor kdLiveBannerColor]

#define KD_WhiteNav_TextColor_Normal [UIColor kdTextColor1]
#define KD_WhiteNav_TextColor_Highlighted [UIColor kdTextColor1_half]

#pragma mark - Font -
//参与字体大小调整
#define FS0 [UIFont kdFont0]
#define FS1 [UIFont kdFont1]
#define FS2 [UIFont kdFont2]
#define FS3 [UIFont kdFont3]
#define FS4 [UIFont kdFont4]
#define FS5 [UIFont kdFont5]
#define FS6 [UIFont kdFont6]
#define FS7 [UIFont kdFont7]
#define FS8 [UIFont kdFont8]
#define FS9 [UIFont kdFont9]
#define FS10 [UIFont kdFont10]
#define FS11 [UIFont kdFont11]
#define FS12 [UIFont kdFont12]

//不 参与字体大小调整 (后面可能会减少一些)
#define FS0_O [UIFont kdFont0_O]
#define FS1_O [UIFont kdFont1_O]
#define FS2_O [UIFont kdFont2_O]
#define FS3_O [UIFont kdFont3_O]
#define FS4_O [UIFont kdFont4_O]
#define FS5_O [UIFont kdFont5_O]
#define FS6_O [UIFont kdFont6_O]
#define FS7_O [UIFont kdFont7_O]
#define FS8_O [UIFont kdFont8_O]
#define FS9_O [UIFont kdFont9_O]
#define FS10_O [UIFont kdFont10_O]
#define FS11_O [UIFont kdFont11_O]
#define FS12_O [UIFont kdFont12_O]

#define DZ1 [NSNumber kd_distance1]
#define DZ2 [NSNumber kd_distance2]
#define DZ3 [NSNumber kd_distance3]
#define DZ4 [NSNumber kd_distance4]

#define kSafeScreenTopInset (isiPhoneX ? 24.0f : 0.0f)
#define kSafeScreenBottomInset (isiPhoneX ? 34.0f : 0.0f)
#define kScreenOffsetY (isiPhoneX ? 88.0f : 64.0f)

#define ChangeFontNotification @"changeFontNotification"
#define kKDFontEnlargeCount  @"kKDFontEnlargeCount"
