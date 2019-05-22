//
//  KDFileChooseManager.h
//  kdweibo
//
//  Created by 张培增 on 2016/11/16.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDFileChooseManager : NSObject

@property (nonatomic, strong) NSMutableArray         *selectedFiles;
@property (nonatomic, assign) BOOL                   isFromJSBridge;

@property (nonatomic, strong) NSString               *folderId;         //群文件夹id
@property (nonatomic, strong) NSString               *folderName;       //群文件夹name

+ (KDFileChooseManager *)sharedInstance;

- (BOOL)fileDidSelected:(DocumentFileModel *)file fromVC:(UIViewController *)vc;
- (void)fileDidReomved:(DocumentFileModel *)file fromVC:(UIViewController *)vc;
- (BOOL)fileChecked:(DocumentFileModel *)file;

- (void)updateRightBarButtonItemTitle:(UIViewController *)vc;

- (void)clearSelectedFiles;

- (void)sendFileFormViewController:(UIViewController *)vc;

@end
