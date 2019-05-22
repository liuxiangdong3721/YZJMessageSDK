//
//  KDSearchTextCell.h
//  kdweibo
//
//  Created by sevli on 15/8/7.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "XTGroupHeaderImageView.h"

@class KDSearchTextModel;
@class XTUnreadImageView;
@interface KDSearchTextCell : KDTableViewCell

@property (nonatomic, assign) BOOL isNotShowTime;
@property (nonatomic, strong) KDSearchTextModel *searchModel;

@end
