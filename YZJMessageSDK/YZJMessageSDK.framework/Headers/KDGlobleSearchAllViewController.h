//
//  KDGlobleSearchAllViewController.h
//  kdweibo
//
//  Created by he15his on 2018/1/12.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDSearchCommon.h"
#import "KDGlobleSearchHelper.h"

@protocol KDGlobleSearchAllViewControllerDelegate<NSObject>

///回调点击更多的类型和对应的数据
- (void)globleSearchAllDidClickMoreWithType:(KDSearchType)type
                               searchHelper:(KDGlobleSearchHelper *)searchHelper;
- (void)globleSearchAllDidClickHistoryText:(NSString *)text;

@end

@interface KDGlobleSearchAllViewController : UIViewController
@property (nonatomic, strong, readonly) UITableView *tableView;
@property (nonatomic, strong, readonly) KDGlobleSearchHelper *globleSearch;

@property (nonatomic, assign) KDSearchOpenType searchFromType;
@property (nonatomic, assign) KDSearchType searchType;
@property (nonatomic, weak) UIViewController *contentsController;
@property (nonatomic, weak) id<KDGlobleSearchAllViewControllerDelegate> delegate;

///当前搜索的文字改变
- (void)searchTextDidChange:(NSString *)text;
///视图显示出来
- (void)viewDidAppearWithSearchText:(NSString *)text;


- (void)viewDidAppearWithType:(KDSearchType)type
                 searchHelper:(KDGlobleSearchHelper *)searchHelper;
///视图消失
- (void)viewDidDisappearWithSearchText:(NSString *)text;
///结束搜索事件
- (void)endSearch;
- (void)startSearch;

@end
