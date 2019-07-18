//
//  KDAppAuthDataItemView.h
//  kdweibo
//
//  Created by shifking on 16/4/9.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDAppAuthDataItemView : UIView
- (instancetype)initWithAuthItemNames:(NSArray *)items;
/**
 *  根据items计算改控件高度
 */
+ (CGFloat)getItemViewHeightWithItemNames:(NSArray *)items;
@end
