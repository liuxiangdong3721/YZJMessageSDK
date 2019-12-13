//
//  UIButton+EnlargeHitArea.h
//  kdweibo
//
//  Created by tangzeng on 2017/6/3.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

/*
 放大按钮的点击热区，例如：想点击区域向四周放大10，则[button setHitTestEdgeInsets:UIEdgeInsetsMake(-10, -10, -10, -10)];
 */

#import <UIKit/UIKit.h>

@interface UIButton (EnlargeHitArea)
@property(nonatomic, assign) UIEdgeInsets hitTestEdgeInsets;
@end
