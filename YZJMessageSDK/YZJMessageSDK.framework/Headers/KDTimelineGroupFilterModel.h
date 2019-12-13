//
//  KDTimelineGroupFilterModel.h
//  kdweibo
//
//  Created by Darren Zheng on 18/10/2017.
//  Copyright © 2017 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDTimelineGroupFilterType.h"
@class KDTimelineVC, KDGroupFilterViewController, KDGroupClassifyTipsView;
@protocol KDTimelineNavigationBarType;

@interface KDTimelineGroupFilterModel: NSObject <KDTimelineGroupFilterType>
@property (nonatomic, assign) BOOL show;
@property (nonatomic, strong) KDGroupFilterViewController * _Nullable groupFilterVC;
@property (nonatomic, strong) KDGroupClassifyTipsView * _Nullable groupClassifyTipsView;

//@property (nonatomic, weak) id <KDTimelineNavigationBarType> _Nullable navigationBarType;
//- (instancetype _Nullable)initWithNavigationBarType:(id <KDTimelineNavigationBarType> _Nullable)navigationBarType;
@property (nonatomic, assign) id <KDCustomIMNavigationViewType> _Nullable customNavigationType;
- (instancetype _Nullable )initWithCustomNavigationType:(id <KDCustomIMNavigationViewType> _Nullable)customNavigationType;
@property (nonatomic, assign) BOOL groupFilterMode;  // 群组分组模式
@property (nonatomic, strong) NSArray * _Nullable groupIDs;     // 群组分组的groupID列表
@property (nonatomic, copy, nullable) NSString *classifyID;
- (void)addGroupFilterView;
- (void)onTitleViewPress;
- (void)checkGroupClassifyTipsShow:(nullable NSArray *)models;
- (void)checkAddGroupButtonShow:(nullable NSArray *)models;
@end
