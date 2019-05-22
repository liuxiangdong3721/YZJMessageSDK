//
//  KDRefreshFooterView.h
//  kdweibo
//
//  Created by 张培增 on 2017/5/16.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDRefreshBaseView.h"

@interface KDRefreshFooterView : KDRefreshBaseView

@property (nonatomic, assign) BOOL ignoreContentInset;

+ (instancetype)footer;

@end
