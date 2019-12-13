//
//  KDApplicationCommon.h
//  kdweibo
//
//  Created by sevli on 15/9/1.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#ifndef kdweibo_KDApplicationCommon_h
#define kdweibo_KDApplicationCommon_h

#define kImageDefaultIcon           @"app_default_icon.png"
#define kAppIconWidth               48                       //已添加应用图标宽
#define kAppIconHeight              48                       //已添加应用图标高
#define kAppViewWidth               (kAppIconWidth + 7 * 4)     //已添加应用视图的宽 （左右边距 ＋ 图标宽度）
#define kAppViewHeight              (12 + kAppIconWidth + 38)   //已添加应用视图的高 （上边距 ＋ 图标高度 ＋ 下边距
#define kTopMargin                  6.0f                        //最上边的间距

/**
 重新写了 appViewController布局     -------2015-09-01------- 李文博
 */
#define MAX_COUNT_INLINE 4 //(isiPhone6Plus||isiPad?4:3) //单行图标数量
#define KAppViewFeaturesCellHeight 94.0f
#define KAppBrandScrollViewHeight (ScreenFullWidth*248.0/750.0)
#define KApplicationCornerRadius(side) (2.f/21.f*side)


/**
 sheet页item类型
 */
typedef enum : NSUInteger {
    KApplicationTableTypeFeatured = 1,  // 精品
    KApplicationTableTypeCategory,      // 分类
    KApplicationTableTypeSearch,        // 搜索
    KApplicationTableTypeCase,          // 案例
    KApplicationTableTypeOpened         // 企业已开通
} KApplicationTableType;


typedef enum : NSInteger {
    KDOpenCellButtonType_None = -1,
    KDOpenCellButtonType_Open = 1,    //打开
    KDOpenCellButtonType_Add    //添加
} KDOpenCellButtonType;

typedef enum : NSInteger {
    KDOpenCellTypeNone = -1,
    KDOpenCellTypeNormal = 1,        // 普通用户应用列表
    KDOpenCellTypeAdmin,             // 管理员应用列表
    KDOpenCellTypeOpened_All,        // 企业已开通
    KDOpenCellTypeMore,              // 普通用户更多应用列表
    KDOpenCellTypeOther,
} KDOpenCellType;


#pragma mark - Notification
extern NSString * const KDApplicationNeedUpdateCompleteNotification;     //轻应用轮询update完成
extern NSString * const KDCompanyOpenedApplicationNeedUpdateCompleteNotification;     //企业已开通应用轮询update完成

#endif
