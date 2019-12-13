//
//  KDImagePickerViewController.h
//  kdweibo
//
//  Created by Joyingx on 2016/10/9.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@class KDImagePickerViewController;

@protocol KDImagePickerViewControllerDelegate <NSObject>

@optional
- (void)imagePickerControllerWillFinishPickingMedia:(KDImagePickerViewController *)imagePickerController;
- (void)imagePickerController:(KDImagePickerViewController *)imagePickerController didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(KDImagePickerViewController *)imagePickerController;

@end

@interface KDImagePickerViewController : UIViewController

@property (nonatomic, weak) id<KDImagePickerViewControllerDelegate> delegate;

@property (nonatomic, assign) BOOL hideOriginal;  // 隐藏选择原图
@property (nonatomic, assign) BOOL bSendOriginal;
@property (nonatomic, assign) BOOL allowEditing; // 是否支持编辑
@property (nonatomic, assign) BOOL allowsMultipleSelection;
@property (nonatomic, assign) BOOL limitsMinimumNumberOfSelection;
@property (nonatomic, assign) BOOL limitsMaximumNumberOfSelection;
@property (nonatomic, assign) NSUInteger minimumNumberOfSelection;
@property (nonatomic, assign) NSUInteger maximumNumberOfSelection;

@property (nonatomic, assign) BOOL isShowVideoOnly; // 是否只支持视频
@property (nonatomic, assign) BOOL isGetVideoData; // 是否获取视频原始文件
@property (nonatomic, assign) NSInteger miniDuration; // 搜索视频最短时长
@property (nonatomic, assign) NSInteger maxDurationl; //搜索视频最长时长

@property (nonatomic, strong) NSString *actionButtonText; //操作按钮文案，默认为发送

@end
