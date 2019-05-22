//
//  UINavigationController+KDSelectedView.h
//  kdweibo
//
//  Created by Scan on 2017/12/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "KDChooseSelectedView.h"

@interface UINavigationController (KDSelectedView)

@property (nonatomic, strong, readonly) KDChooseSelectedView *kd_selectedView;

- (void)kd_setupSelectedView; // 不设置 config 配置项

/**
 以push方式跳入的vc 构建玩 kd_selectedView 之后需要clear
 */
- (void)kd_clearSelectedView;

@end
