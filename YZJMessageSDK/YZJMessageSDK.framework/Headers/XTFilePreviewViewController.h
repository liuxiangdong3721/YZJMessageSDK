//
//  XTFilePreviewViewController.h
//  XT
//
//  Created by kingdee eas on 13-11-11.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "XTFileDetailViewController.h"

@class KDVideoFilePreviewView;

@interface XTFilePreviewViewController : UIViewController<UIScrollViewDelegate>

@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, strong) KDVideoFilePreviewView *videoFilePreviewView;
@property (nonatomic, weak) XTFileDetailViewController *detailViewController;

@property (nonatomic, strong) KDFileModel *file;
@property (nonatomic, strong) RecordDataModel *recordModel;

@property (nonatomic, strong) NSDictionary *fileDetailDictionary; //从聊天组转发文件所需参数,threadId,messageId,fileId
@property (nonatomic, strong) NSString *filePath;
@property (nonatomic, strong) NSString *shareURL;
@property (nonatomic, strong) UIView *bottomView;

@property (nonatomic, assign) BOOL isHiddenBottomViewFlag;
@property (nonatomic, assign) BOOL isWebviewLoadOver;
@property (nonatomic, assign) BOOL isKingdeeYunExist;
@property (nonatomic, assign) BOOL isFromThirdParty;//是否来自第三方的详情桥,例如金蝶云盘
@property (nonatomic, assign) BOOL isReadOnly;//是否只读文件,只读文件屏蔽底部按钮
@property (nonatomic, assign) BOOL isHpCast;//是否正在投屏
@property (nonatomic, assign) BOOL isLocalVideo;

- (instancetype)initWithAppId:(NSString *)appId;
@property (nonatomic, copy) NSString *(^blockEditURL)(NSString *strURL);
@property (nonatomic, copy) void(^getLightAppBlock)(BOOL result);
- (void)shareFile;
- (BOOL)reviewWithAnotherApp;
- (void)stowFile;
@end
