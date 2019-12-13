//
//  UIImage+KDV6.h
//  kdweibo
//
//  Created by Gil on 15/7/2.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (KDV6)

+ (UIImage *)kd_imageWithColor:(UIColor *)color;

+ (UIImage *)kd_imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)kd_imageWithColor:(UIColor *)color coverColor:(UIColor *)color;

+ (UIImage *)capture:(UIView *)view;

+ (UIImage *)localizedImageInYZJUIKitWithNamed:(NSString *)named bundleNamed:(NSString *)bundleNamed;

+ (UIImage *)imageInYZJUIKitWithNamed:(NSString *)named;

+ (UIImage *)imageInPodWithNamed:(NSString *)named bundleNamed:(NSString *)bundleNamed;

@end
