//
//  KDFileChooseTableView.h
//  kdweibo
//
//  Created by 张培增 on 2016/11/8.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XTFileCell.h"
@class KDFileChooseTableView;
@class KDFileModel;

typedef NS_ENUM(NSInteger, KDFileChooseTableViewType) {
    KDFileChooseTableViewType_MyFile = 1,                   //我的文件
    KDFileChooseTableViewType_ShareFile,                    //共享文件
    KDFileChooseTableViewType_PublicFile                    //企业文件
};

@protocol KDFileChooseTableViewDelegate <NSObject>

- (void)cellDidClicked:(KDFileChooseTableView *)tableView indexPath:(NSIndexPath *)indexPath model:(KDFileModel *)model;

@optional
//我上传的、我下载的、我收藏的文件夹点击事件
- (void)myFileListFolderCellDidClicked:(KDFileChooseTableView *)tableView indexPath:(NSIndexPath *)indexPath;

@end

@interface KDFileChooseTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) id<KDFileChooseTableViewDelegate> chooseDelegate;

@property (nonatomic, assign) KDFileChooseTableViewType tableViewType;
@property (nonatomic, strong) NSString                  *folderId;
@property (nonatomic, strong) NSMutableArray            *dataArray;
@property (nonatomic, assign) BOOL                      isFolderDetail;//是否文件夹详情

- (void)loadData;
- (void)reloadTableView;

@end
