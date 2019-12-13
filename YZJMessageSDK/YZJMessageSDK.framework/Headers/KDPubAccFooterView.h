//
//  KDPubAccFooterView.h
//  kdweibo
//
//  Created by Darren Zheng on 2018/6/28.
//  Copyright © 2018 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol KDPubAccFooterViewDelegate;

@interface KDPubAccFooterView : UIView
@property (nonatomic, strong) UIButton *attentionButton;
@property (nonatomic, weak) id<KDPubAccFooterViewDelegate> delegate;
@end

@protocol KDPubAccFooterViewDelegate <NSObject>
- (void)pubAccFooterViewAttentionButtonPressed:(KDPubAccFooterView *)view;
@end
