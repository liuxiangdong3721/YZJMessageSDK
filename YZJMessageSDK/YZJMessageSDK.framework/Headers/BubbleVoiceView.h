//
//  BubbleVoiceView.h
//  XT
//
//  Created by Gil on 13-7-5.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BubbleVoiceView : UIView

@property (nonatomic, assign) BOOL isLeft;

@property (nonatomic, assign, readonly) BOOL isAnimation;
@property (nonatomic, strong, readonly) NSTimer *animationTimer;

- (BOOL)isAnimation;
- (void)startAnimations;
- (void)stopAnimations;


+ (CGFloat)bubbleVoiceViewHeight;

@end
