//
//  KDFileTableView.h
//  kdweibo
//
//  Created by lichao_liu on 16/7/8.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDFileModel.h"

@protocol XTMyFilesViewControllerDelegate;
@interface KDFileTableView : UITableView<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic, assign) BOOL isPreviewed;
@property (nonatomic, assign) NSInteger fromType; //0:我下载的，1:我收藏的 3:我上传的
@property (nonatomic,weak) id<XTMyFilesViewControllerDelegate> filesViewControllerDelegate;
@property (nonatomic, assign) BOOL isFromSharePlay;
@property (nonatomic, strong) NSMutableArray *dataArray;
@property (nonatomic, assign) NSInteger fileQueryType; //0 文档  1 图片  4 其他
@property (nonatomic, weak) UIViewController *destinationController;
- (void)loadData;
@end
