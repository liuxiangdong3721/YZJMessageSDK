//
//  XTPersonHeaderView.h
//  XT
//
//  Created by Gil on 13-7-5.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XTPersonHeaderImageView.h"

@protocol XTPersonHeaderViewDelegate;
@protocol XTPersonHeaderViewLongPressDelegate;
@protocol XTPersonHeaderViewTapTwiceDelegate;
@interface XTPersonHeaderView : UIView

@property (nonatomic, strong) PersonSimpleDataModel *person;
@property (nonatomic, strong, readonly) XTPersonHeaderImageView *personHeaderImageView;
@property (nonatomic, strong, readonly) UILabel *personNameLabel;
@property (nonatomic, weak) id<XTPersonHeaderViewDelegate> delegate;
@property (nonatomic, weak) id<XTPersonHeaderViewLongPressDelegate> longPressdelegate;
@property (nonatomic, weak) id<XTPersonHeaderViewTapTwiceDelegate> tapTwicedelegate;

@property (nonatomic, assign) BOOL isLongPressEnable;
@property (nonatomic, strong) UIColor *highlightedColor;

- (id)initWithFrame:(CGRect)frame checkStatus:(BOOL)checkStatus;

- (void)tapHeaderView;

@end

@protocol XTPersonHeaderViewDelegate <NSObject>
- (void)personHeaderClicked:(XTPersonHeaderView *)headerView person:(PersonSimpleDataModel *)person;
@end

@protocol XTPersonHeaderViewLongPressDelegate <NSObject>
- (void)personHeaderLongPressed:(XTPersonHeaderView *)headerView person:(PersonSimpleDataModel *)person;
@end

@protocol XTPersonHeaderViewTapTwiceDelegate <NSObject>
- (void)personHeaderTapTwice:(XTPersonHeaderView *)headerView person:(PersonSimpleDataModel *)person;
@end
