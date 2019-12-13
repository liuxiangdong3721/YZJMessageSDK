//
//  XTFilePreviewViewController.h
//  XT
//
//  Created by kingdee eas on 13-11-7.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDFileModel.h"
#import "KDProgressView.h"
#import "KDForwardChooseViewController.h"

@class XTFileDetailViewController, KDButton;
@protocol XTFileDetailViewControllerDelegate <NSObject>

@optional
- (void)fileForwardFinish:(XTFileDetailViewController *)controller;
- (void)controller:(XTFileDetailViewController *)controller downloadFinishedWithModel:(KDFileModel *)model;
@end

typedef NS_ENUM(NSInteger, XTFileDetailFunctionType) {
    XTFileDetailFunctionType_nomal,
    XTFileDetailFunctionType_count
};

typedef NS_ENUM(NSInteger, XTFileDetailButtonType) {
    XTFileDetailButtonType_default,
    XTFileDetailButtonType_open,
    XTFileDetailButtonType_download,
    XTFileDetailButtonType_makeDownloadAction
};

typedef enum : NSUInteger {
    XTFileDetailSourceTypeChat,
    XTFileDetailSourceTypeSearch
} XTFileDetailSourceType;


@interface XTFileDetailViewController : UIViewController <KDForwardChooseViewControllerDelegate>

@property (nonatomic, weak) id<XTFileDetailViewControllerDelegate> delegate;

@property (nonatomic, strong) KDFileModel *file;

@property (nonatomic, assign) XTFileDetailButtonType needDownLoadWhenViewWillAppear;
@property (nonatomic, assign) XTFileDetailSourceType fileDetailSourceType;//文件来源方式
@property (nonatomic, assign) XTFileDetailFunctionType fileDetailFunctionType;
@property (nonatomic, strong) RecordDataModel *recordModel;

@property (nonatomic, strong) UIImageView *thumbnailPic;
@property (nonatomic, strong) UILabel *fileName;
@property (nonatomic, strong) UILabel *fileSize;
@property (nonatomic, strong) UILabel *percentLabel;
@property (nonatomic, strong) KDButton *downloadBtn;
@property (nonatomic, strong) UIButton *cancelDownloadBtn;
@property (nonatomic, strong) KDProgressView *progressView;//进度条

@property (nonatomic, assign) BOOL isDownloading;
@property (nonatomic, assign) BOOL bShouldNotPopToRootVC;
@property (nonatomic, assign) BOOL isFromSharePlayWPS;
@property (nonatomic, assign) BOOL isNeedDownloadToOpenInOtherApp;//下载后用其他app打开
@property (nonatomic, assign) BOOL isPushToPreviewControllerFlag;
@property (nonatomic, assign) BOOL isKingdeeYunExist;
@property (nonatomic, assign) BOOL isFromJSBridge;
@property (nonatomic, assign) BOOL isFromThirdParty;//是否来自第三方的详情桥,例如金蝶云盘
@property (nonatomic, assign) BOOL isReadOnly;//是否只读文件,只读文件屏蔽更多按钮

@property (nonatomic, strong) NSString *threadId;
@property (nonatomic, strong) NSString *messageId;
@property (nonatomic, strong) NSString *dedicatorId;//文件贡献者id
@property (nonatomic, strong) NSString *shareURL;
@property (nonatomic, strong) NSString *previewUrl;
@property (nonatomic, strong) NSString *previewAppId; //文件在线预览appId
@property (nonatomic, strong) NSString *previewAppName; //文件在线预览appName
@property (nonatomic, strong) NSString *personId;

- (id)initWithFile:(KDFileModel *)file;
- (void)downloadBtnClick:(id)sender;
- (NSString *)getDownLoadFilePath;
- (NSDictionary *)getDetailFileDict;
- (void)wpsBtnClicked:(id)sender;
@end
