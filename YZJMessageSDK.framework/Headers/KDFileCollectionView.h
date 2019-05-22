//
//  KDFileCollectionView.h
//  kdweibo
//
//  Created by lichao_liu on 16/7/11.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "XTMyFilesViewController.h"

@interface KDFileCollectionView : UICollectionView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property (nonatomic, assign) BOOL isPreviewed;
@property (nonatomic, assign) NSInteger fromType; //0:我下载的，1:我收藏的 3:我上传的
@property (nonatomic,weak) id<XTMyFilesViewControllerDelegate> filesViewControllerDelegate;
@property (nonatomic, strong) NSMutableArray *dataArray;
@property (nonatomic, weak) UIViewController *destinationController;
- (void)loadData;
@end
