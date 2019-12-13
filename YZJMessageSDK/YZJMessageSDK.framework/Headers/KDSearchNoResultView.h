//
//  KDSearchNoResultView.h
//  kdweibo
//
//  Created by kyle on 2017/3/13.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDSearchNoResultView : UIView

/**
 *  标题标签
 */
@property(nonatomic, strong) UILabel *labelTitle;

- (void)hide;
- (void)showInView:(UIView *)view;
- (void)showInView:(UIView *)view frame:(CGRect)frame;
@end
