//
//  KDChoosePersonsViewController.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

//#import "KDSearchCommon.h"
#import "KDChoosePersonConfig.h"
#import "KDGlobleSearchHelper.h"
@class KDChooseSelectedView;
//MARK: - 新选人界面

@interface KDChoosePersonsViewController : UIViewController

- (instancetype _Nullable )initWithConfig:(KDChooseConfig *_Nonnull)config;

@property (nonnull, copy) void(^completeSelect)(KDChooseSelectedView * _Nonnull selectedView);
@property (nonnull, copy) void(^cancelSelect)(KDChooseSelectedView * _Nonnull selectedView);
@property (nonatomic, strong, nullable) KDGlobleSearchHelper *globleSearch;

- (void)loadMoreCellClickWithType:(KDSearchType)searchType;
@end
