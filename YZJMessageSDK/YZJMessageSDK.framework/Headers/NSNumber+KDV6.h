//
//  NSNumber+KDV6.h
//  kdweibo
//
//  Created by Gil on 15/7/1.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDStyleSyntaxSugar.h"
#import "UIDevice+Additions.h"

static inline CGFloat AdapterWidth(CGFloat width) {
    
    CGFloat pre = 1.0;
    if ([UIDevice currentDeviceType] <= UIDeviceType_iPhone5) {
        pre = 1.17;
    }
    
    return width / pre;
}

static inline CGFloat AdapterHeight(CGFloat height) {
    
    CGFloat pre = 1.0;
    if ([UIDevice currentDeviceType] <= UIDeviceType_iPhone5) {
        pre = 1.38;
    }
    
    return height / pre;
}

@interface NSNumber (KDV6)

+ (CGFloat)kdLeftItemDistance;
+ (CGFloat)kdRightItemDistance;

@end


@interface NSNumber (KDV7)

+ (CGFloat)kdInputViewLeftRightDistance_V7;

@end

@interface NSNumber (Distance)

+ (CGFloat)kd_distance1;
+ (CGFloat)kd_distance2;
+ (CGFloat)kd_distance3;
+ (CGFloat)kd_distance4;

+ (CGFloat)kd_cellHeight35;
+ (CGFloat)kd_cellHeight40;
+ (CGFloat)kd_cellHeight48;
+ (CGFloat)kd_cellHeight60;
+ (CGFloat)kd_cellHeight68;
+ (CGFloat)kd_cellHeight72;
+ (CGFloat)kd_cellHeight78;
+ (CGFloat)kd_cellHeight100;
+ (CGFloat)kd_font_enlargeNum;
@end
