//
//  KDRefreshConst.h
//  kdweibo
//
//  Created by 张培增 on 2017/5/11.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

// objc_msgSend
#define msgSend(...) ((void (*)(void *, SEL, UIView *))objc_msgSend)(__VA_ARGS__)

#define KDRefreshLabelTextColor UIColorFromRGBA(0xA0B0B9, 1)
#define KDRefreshLabelTextFont FS7

extern const CGFloat KDRefreshViewHeight;
extern const CGFloat KDRefreshFastAnimationDuration;
extern const CGFloat KDRefreshSlowAnimationDuration;
extern const CGFloat KDRefreshShowSuccessDuration;

extern NSString *const KDRefreshContentOffset;
extern NSString *const KDRefreshContentSize;
