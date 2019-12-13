//
//  KDMoreSearchCell.h
//  kdweibo
//
//  Created by sevli on 15/8/5.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"

@interface KDMoreSearchCell : KDTableViewCell
//是加载更多模式
@property (nonatomic, assign) BOOL isLoadMoreModel;
//是否是加载中，加载中有动画
@property (nonatomic, assign) BOOL isLoading;

@end
