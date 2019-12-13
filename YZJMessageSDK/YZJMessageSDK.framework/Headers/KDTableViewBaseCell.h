//
//  KDTableViewBaseCell.h
//  kdweibo
//
//  Created by 张培增 on 2018/3/30.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XTPersonHeaderImageView.h"
#import "KDTableViewCell.h"

typedef enum : NSUInteger {
    KDCommonListStyleLS1 = 1,
    KDCommonListStyleLS2,
    KDCommonListStyleLS3,
    KDCommonListStyleLS4,
    KDCommonListStyleLS5,
    KDCommonListStyleLS6,
    KDCommonListStyleLS7
} KDCommonListStyle;

@interface KDTableViewBaseCell : UITableViewCell

@property (nonatomic, assign) KDTableViewCellSeparatorLineStyle     separatorLineStyle;
@property (nonatomic, assign) KDTableViewCellAccessoryStyle         accessoryStyle;

@property (nonatomic, assign, readonly) CGFloat                     kd_imageViewWidth;

@property (nonatomic, strong, readonly) XTPersonHeaderImageView     *kd_imageView;
@property (nonatomic, strong, readonly) UIView                      *kd_labelView;
@property (nonatomic, strong, readonly) UILabel                     *kd_textLabel;
@property (nonatomic, strong, readonly) UILabel                     *kd_detailTextLabel;
@property (nonatomic, strong, readonly) UILabel                     *kd_timeLabel;
@property (nonatomic, strong, readonly) UIImageView                 *kd_disclosureIndicatorView;
@property (nonatomic, strong, readonly) UIView                      *kd_separatorLine;


/**
 自定义separatorLine间距

 @param leftInset 左间距
 @param rightInset 右间距
 */
- (void)kd_changeSeparatorLineLeftInset:(CGFloat)leftInset rightInset:(CGFloat)rightInset;


/**
 自定义disclosureIndicator右间距

 @param rightInset 右间距
 */
- (void)kd_changeDisclosureIndicatorRightInset:(CGFloat)rightInset;

/**
 自定义disclosureIndicator CenterY 偏移
 
 @param centerYOffset Y轴上中心偏移
 */
- (void)kd_changeDisclosureIndicatorCenterYOffset:(CGFloat)centerYOffset;


/**
 install constraints

 @param listStyle 列表样式
 */
- (void)kd_install:(KDCommonListStyle)listStyle;

/**
 uninstall constraints
 */
- (void)kd_uninstall;

@end
