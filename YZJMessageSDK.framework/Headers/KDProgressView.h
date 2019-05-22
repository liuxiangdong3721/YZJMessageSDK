//
//  KDProgressView.h
//  kdweibo
//
//  Created by bird on 13-12-30.
//  Copyright (c) 2013年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDProgressView : UIView {
    UIView *progressView_;
    UIView *trackView_;
}
@property(nonatomic, assign) float progress;
@property(nonatomic, strong) UIColor *progressTintColor;
@property(nonatomic, strong) UIColor *trackTintColor;
@end
