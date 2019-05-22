//
//  KDTableViewHeaderFooterView.h
//  kdweibo
//
//  Created by Gil on 2016/10/19.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KDTableViewHeaderFooterViewStyle) {
    KDTableViewHeaderFooterViewStyleWhite = 0,              //小标题
    KDTableViewHeaderFooterViewStyleGrayWhite,              //灰白小标题
    KDTableViewHeaderFooterViewStyleSingleRemark,           //单行备注
    KDTableViewHeaderFooterViewStyleDoubleRemark,            //双行备注
    KDTableViewHeaderFooterViewStyleGrayWhiteSmall           //灰白窄行小标题
};

@interface KDTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSAttributedString *attributedTitle;
@property (strong, nonatomic) UIColor *titleColor;
@property (assign, readonly) KDTableViewHeaderFooterViewStyle style;

- (instancetype)initWithStyle:(KDTableViewHeaderFooterViewStyle)style;

+ (CGFloat)heightWithStyle:(KDTableViewHeaderFooterViewStyle)style;

@end
