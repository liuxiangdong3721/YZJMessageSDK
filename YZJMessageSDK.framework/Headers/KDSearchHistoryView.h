//
//  KDSearchHistoryView.h
//  kdweibo
//
//  Created by kyle on 2017/3/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDSearchHistoryView : UIView

@property (nonatomic, strong) NSMutableArray *dataList;
@property (nonatomic, strong) void(^searchHisBlock)(NSString *title);
@property (nonatomic, strong) void(^searchHisClearBlock)(void);

@end
