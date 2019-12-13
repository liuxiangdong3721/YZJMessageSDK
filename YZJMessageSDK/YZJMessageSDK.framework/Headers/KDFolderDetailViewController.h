//
//  KDFolderDetailViewController.h
//  kdweibo
//
//  Created by 张培增 on 2016/11/11.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDFileChooseTableView.h"

@interface KDFolderDetailViewController : UIViewController

@property (nonatomic, assign) KDFileChooseTableViewType tableViewType;
@property (nonatomic, strong) NSString                  *folderId;

@end
