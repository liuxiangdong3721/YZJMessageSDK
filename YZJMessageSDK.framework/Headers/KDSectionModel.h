//
//  KDSectionModel.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDChooseProtocol.h"

@interface KDSectionModel : NSObject

@property (nonatomic, copy, nullable) NSString *title;
@property (nonatomic, copy, nonnull) NSArray<id <KDTableSectionRowProtocol>> * rowDatas;
@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, assign) CGFloat headerHeight;
@property (nonatomic, strong, nullable) UIView *headerView;
@property (nonatomic, assign) CGFloat footerHeight;
@property (nonatomic, strong, nullable) UIView *footerView;

@end
