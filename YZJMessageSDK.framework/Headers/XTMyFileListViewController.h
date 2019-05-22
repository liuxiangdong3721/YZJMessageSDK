//
//  XTMyFileListViewController.h
//  kdweibo
//
//  Created by bird on 14-10-16.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XTMyFilesViewControllerDelegate;

@interface XTMyFileListViewController : UIViewController

@property (nonatomic, assign) NSInteger fromType; //0:我下载的，1:我收藏的 3:我上传的
@property (nonatomic,weak) id<XTMyFilesViewControllerDelegate> delegate;
@property (nonatomic, assign) BOOL isFromSharePlay;
@end
