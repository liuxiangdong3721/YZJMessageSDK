//
//  UIColor+KDColorImage.h
//  kdweibo
//
//  Created by Scan on 2017/5/24.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (KDColorImage)

- (UIImage *)kd_colorImage;

- (UIImage *)kd_colorImageSize:(CGSize)size;

- (UIImage *)kd_colorImageCoverColor:(UIColor *)color;

@end
