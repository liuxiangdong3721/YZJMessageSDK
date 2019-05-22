//
//  KDApplicationCenterCategoryViewController.h
//  kdweibo
//
//  Created by sevli on 15/9/2.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDApplicationCommon.h"
#import "KDAppCategoryDataModel.h"
#import "KDAppCaseDataModel.h"
#import "KDAppBrandDataModel.h"
#import "KDAppDataModel.h"

@protocol KDApplicationCenterCategoryViewDelegate <NSObject>

@optional

- (void)viewDetail:(KDAppDataModel *)appDM;

- (void)showOperateSheet:(KDAppDataModel *)appDM;

- (void)openAppDetail:(KDAppDataModel *)appModel;

- (void)addApp:(KDAppDataModel *)appDM;

- (void)goToAppWithDataModel:(KDAppDataModel *)appModel;

- (void)storeAppToBeDeletedIntoUserDefault:(KDAppDataModel *)appModel;

- (void)goToSubCategoryViewControllerWithCategoryDataModel:(KDAppCategoryDataModel *)categoryDM;

- (void)goToCaseWebViewControllerWithCaseDataModel:(KDAppCaseDataModel *)caseDM;

- (void)goToBrandViewController:(KDAppBrandDataModel *)brandDM;

//- (void)appCenterAdDidTap:(KDAdvertisementModel *)adModel;

- (void)goToEnterpriseOpenedController;

@end


@interface KDApplicationCenterSlideSwitchSubView : UIView

@property (nonatomic, weak) id<KDApplicationCenterCategoryViewDelegate>delegate;

@property (nonatomic, assign) KApplicationTableType applicationTableType; //app分页类型

@property (nonatomic, strong) NSArray *dataArray;//数据源

@property (nonatomic, strong) NSArray *favoriteAppArr;//showAppArray

@property (nonatomic, strong, readonly) UITableView *tableView;


- (instancetype)initWithFrame:(CGRect)frame TableViewStyle:(UITableViewStyle)style;

- (void)refreshUI;

- (void)tableViewReloadData;

@end
