//
//  KDGlobleNoResultView.h
//  kdweibo
//
//  Created by he15his on 2018/1/18.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDGlobleNoResultView : UIView

@property (nonatomic, assign) BOOL hiddenFeedbackView;

- (void)showInView:(UIView *)view
        searchText:(NSString *)searchText
     feedbackBlock:(void(^)(void))feedbackBlock;

- (void)hide;
@end
