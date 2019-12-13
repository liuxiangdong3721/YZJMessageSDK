//
//  XTContactContentTopViewCell.h
//  kdweibo
//  通讯录-组织架构、公共帐号等顶层cell
//  Created by weihao_xu on 14-4-18.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"

typedef void (^handleBlcok)(BOOL isExpand);

@interface XTContactContentTopViewCell : KDTableViewCell

@property (nonatomic, strong) UIImageView *avatarImageView;
@property (nonatomic, strong) UILabel *discoveryLabel;
@property (nonatomic, strong) UILabel *updateLabel;
@property (nonatomic, strong) UIImageView *updateRedIcon;

@property (nonatomic, strong) UIButton *managerButton;

- (void)setUpdateTitle:(NSUInteger)updateCount;
- (void)setManagerStype:(BOOL)inManager handleBlcok:(handleBlcok)blcok;
@end

@interface KDContactContentRequestCell : KDTableViewCell

@property (nonatomic, assign, readonly) BOOL isNetError;
- (void)setNetError;
- (void)setNetRequesting;

- (void)setNoOrg;

@end
