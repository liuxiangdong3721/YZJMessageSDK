//
//  KDGlobleSearchSegementView.h
//  kdweibo
//
//  Created by he15his on 2018/1/11.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kGlobleSearchSegementViewHeight 40

@protocol KDGlobleSearchSegementViewDelegate<NSObject>
- (void)globleSearchSegementViewDidSelect:(NSUInteger)index;

@end

@interface KDGlobleSearchSegementView : UIView
@property (nonatomic, weak) id<KDGlobleSearchSegementViewDelegate> delegate;

- (void)scrollToIndex:(NSUInteger)index;
@end
