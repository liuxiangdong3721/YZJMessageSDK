//
//  KDSearchFeedbackView.h
//  kdweibo
//
//  Created by he15his on 2018/1/19.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDSearchFeedbackView : UIView
@property (nonatomic, copy) void(^feedbackBlock)(void);

@end
