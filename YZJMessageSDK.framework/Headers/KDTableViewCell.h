//
//  KDTableViewCell.h
//  kdweibo
//
//  Created by Gil on 15/7/2.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KDTableViewCellSeparatorLineStyle) {
    KDTableViewCellSeparatorLineNone = 0,//无分割线
    KDTableViewCellSeparatorLineTop,//分隔线顶端对齐
    KDTableViewCellSeparatorLineSpace,//分割线与顶端间隔
};

typedef NS_ENUM(NSUInteger, KDTableViewCellAccessoryStyle) {
    KDTableViewCellAccessoryStyleNone = 0,//无右侧箭头
    KDTableViewCellAccessoryStyleDisclosureIndicator,//有右侧箭头
};


@interface KDTableViewCell : UITableViewCell

@property (assign, nonatomic) KDTableViewCellSeparatorLineStyle separatorLineStyle;
@property (assign, nonatomic) KDTableViewCellAccessoryStyle accessoryStyle;
@property (assign, nonatomic) UIEdgeInsets separatorLineInset;


@property (strong, nonatomic, readonly) UIView *separatorLineView;
@property (strong, nonatomic, readonly) UIImageView *disclosureIndicatorView;

@property (nonatomic, copy) UIFont *textLabelFont;
@property (nonatomic, copy) UIFont *detailTextLabelFont;

@end
