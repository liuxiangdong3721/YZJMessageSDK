//
//  KDChooseContentCollectionViewController.h
//  kdweibo
//
//  Created by shen kuikui on 14-5-13.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "KDChooseProtocol.h"

@interface KDChooseContentCollectionViewController : UIViewController<KDChooseReloadProtocol>

@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, strong) NSArray *collectionDatas;
@property (nonatomic, assign) BOOL bShowSelectAll;

@end
