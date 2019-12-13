//
//  KDTimelineGroupFilterType.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/10/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDCustomIMNavigationViewOCCompatible.h"
@class KDGroupFilterViewController, KDGroupClassifyTipsView;
@protocol KDTimelineGroupFilterType <KDCustomIMNavigationViewOCCompatible>
@property (nonatomic, assign) BOOL show;
@property (nonatomic, assign) BOOL groupFilterMode;  // 群组分组模式
@property (nonatomic, strong) KDGroupFilterViewController * _Nullable groupFilterVC;
@property (nonatomic, strong) KDGroupClassifyTipsView * _Nullable groupClassifyTipsView;
@property (nonatomic, strong) NSArray * _Nullable groupIDs;     // 群组分组的groupID列表
@property (nonatomic, copy, nullable) NSString *classifyID;
- (void)addGroupFilterView;
- (void)onTitleViewPress;
- (void)checkGroupClassifyTipsShow:(nullable NSArray *)models;
- (void)checkAddGroupButtonShow:(nullable NSArray *)models;
@end
