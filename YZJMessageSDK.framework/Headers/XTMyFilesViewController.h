//
//  XTMyFilesViewController.h
//  kdweibo
//
//  Created by bird on 14-10-15.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "KDWebViewController.h"
@class DocumentFileModel;

typedef  NS_ENUM(NSInteger, KDFileFolderType) {
    KDFileFolderType_download,
    KDFileFolderType_collect,
    KDFileFolderType_recent,
    KDFileFolderType_me
};

@protocol XTMyFilesViewControllerDelegate <NSObject>
- (void)fileDidSelected:(DocumentFileModel *)file;
- (void)fileDidReomved:(DocumentFileModel *)file;
- (BOOL)fileChecked:(DocumentFileModel *)file;
- (BOOL)isPreviewModel;
@end

@class XTMyFilesViewController;

@protocol XTMyFilesViewControllerJSBridgeDelegate <NSObject>
@optional
-(void)theSelectedFiles:(NSArray *)array;
@end


@interface XTMyFilesViewController : UIViewController <XTMyFilesViewControllerDelegate>
@property (nonatomic, weak) id delegate;
@property (nonatomic, weak) id <XTMyFilesViewControllerJSBridgeDelegate> JSBridgeDelegate;
@property (nonatomic, assign) int fromType;     //0:传输文件 1:应用 2:文件共享
@property (nonatomic, assign) BOOL fromJSBridge;      //V5.0之后从web唤醒
//@property (nonatomic, strong) KDWebViewController *fromViewController;      //V5.0之后从web唤醒, 里层页面pop
@property (nonatomic, assign) BOOL fromFileAssistant;//来自文件助手
@property (nonatomic, assign) BOOL isFromExtenalGroup;//来自外部群组
@end

@protocol SendFileDelegate <NSObject>
- (void)sendShareFile:(NSDictionary *)dict;
@end
