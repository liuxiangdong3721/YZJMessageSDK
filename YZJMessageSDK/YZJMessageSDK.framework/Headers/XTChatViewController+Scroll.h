//
//  XTChatViewController+Scroll.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/3/15.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "XTChatViewController.h"

@interface XTChatViewController (Scroll)
- (void)scrollRow:(NSInteger)row animated:(BOOL)animated;
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView *)scrollView;
//- (void)scrollViewDidScrollToTop:(UIScrollView *)scrollView;
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;
- (void)resetScrollPositionWithBlock:(void (^)(void))block;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView;

- (void)scrollReplyWithMsg:(NSString *)messageID replyFlag:(BOOL)flag;
- (void)scrollToBottomAnimated:(BOOL)bAnimated;
//- (void)unlimitedScrollToBottomAnimated:(BOOL)bAnimated;
@end
