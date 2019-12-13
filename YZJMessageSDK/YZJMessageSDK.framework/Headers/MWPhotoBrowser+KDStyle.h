//
//  MWPhotoBrowser+KDStyle.h
//  kdweibo
//
//  Created by Joyingx on 2016/9/16.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "MWPhotoBrowser.h"

extern void mb_swizzleMethod(Class class, SEL originalSelector, SEL swizzledSelector);

@interface MWPhotoBrowser (KDStyle)

@property (nonatomic, strong) NSMutableArray *selections; // 多选
@property (nonatomic) BOOL bOriginal; // 原图
@property (nonatomic) BOOL bHideOriginal; // 隐藏选择原图
@property (nonatomic, assign) BOOL bShowTitle; // 是否显示导航栏title
@property (nonatomic, assign) BOOL allowEditing; // 是否支持编辑
@property (nonatomic) BOOL bSinlgePhotoMode; // 快捷发送图片模式
@property (nonatomic, assign) NSInteger maximumNumberOfSelection;  // 最大选择图片数
@property (nonatomic, strong) NSString *actionButtonText; //操作按钮文案，默认为发送

@end
