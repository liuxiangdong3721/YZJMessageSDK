//
//  KDPubAccHeaderView.h
//  kdweibo
//
//  Created by Gil on 15/3/16.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDPubAccHeaderView : UIView

@property (nonatomic, strong, readonly) UIImageView *photoView;
@property (nonatomic, strong, readonly) UILabel *nameLabel;
@property (nonatomic, strong, readonly) UILabel *distributionLabel;
@property (nonatomic, strong, readonly) UILabel *noteLabel;
- (CGFloat)viewHeight;

@end


