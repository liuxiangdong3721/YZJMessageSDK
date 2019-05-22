//
//  KDCollectionViewHeaderView.h
//  kdweibo
//
//  Created by Joyingx on 2016/10/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KDCollectionViewHeaderViewStyle) {
    KDCollectionViewHeaderViewStyleWhite = 0,              //小标题
    KDCollectionViewHeaderViewStyleGrayWhite,              //灰白小标题
    KDCollectionViewHeaderViewStyleSingleRemark,           //单行备注
    KDCollectionViewHeaderViewStyleDoubleRemark            //双行备注
};

@interface KDCollectionViewHeaderView : UICollectionReusableView

@property (nonatomic, strong) UILabel *label;
@property (nonatomic, strong) UIView *labelBGView;
@property (nonatomic, assign) KDCollectionViewHeaderViewStyle style;

+ (CGFloat)heightWithStyle:(KDCollectionViewHeaderViewStyle)style;

@end
