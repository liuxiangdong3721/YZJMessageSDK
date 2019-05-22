//
//  KDTipsView.h
//  kdweibo
//
//  Created by liwenbo on 16/9/20.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#define LineOffset 20.f
#define Key_Exsit(key) [[NSUserDefaults standardUserDefaults] boolForKey:key]

typedef enum : NSUInteger {
    TipsUpLeft = 1,
    TipsUpCenter,
    TipsUpRight,
    TipsDownLeft,
    TipsDownCenter,
    TipsDownRight
} KDTipsDirectType;

typedef enum : NSUInteger {

    KDTipsLevelApp,           // app级   项目显示一次
    KDTipsLevelPerson,        // 用户级   用户只显示一次
    KDTipsLevelNetwork,       // 圈级    当前圈当前用户只显示一次
} KDTipsLevel;


__attribute ((objc_subclassing_restricted))
@interface KDTipsView : UIView


@property (nonatomic, assign) KDTipsLevel level;                        // 生命周期
@property (nonatomic, assign) CGFloat lineHeight;                       // 竖线长度
@property (nonatomic, assign) CGPoint markPoint;                        // 相对标记视图的标记点
@property (nonatomic, assign) CGPoint orginPoint;                       // 相对父视图标记点
@property (nonatomic, weak) UIView *markView;                           // 标记视图
@property (nonatomic, weak, readonly) UIView *inView;                   // 暂时 appwindow
@property (nonatomic, strong, readonly) UIView *containerView;          // tipsView
@property (nonatomic, assign, readonly) KDTipsDirectType directType;    // 样式
@property (nonatomic, copy, readonly) NSString *key;
@property (nonatomic, copy) void(^block)(void);                             // 点击事件
@property (nonatomic, assign, readonly) BOOL bshowTips;                           // 是否显示
@property (nonatomic, assign, readonly) CGSize calculateSize;

- (instancetype)initWithType:(KDTipsDirectType)directType
                     content:(NSString *)content
                         key:(NSString *)key;



- (instancetype)initWithType:(KDTipsDirectType)directType
                     content:(NSString *)content
                         key:(NSString *)key
                   bshowTips:(BOOL)bshowTips;


- (instancetype)initWithType:(KDTipsDirectType)directType
                     content:(NSString *)content
                         key:(NSString *)key
                    markView:(UIView *)markView
                   markPoint:(CGPoint)markPoint
                   bshowTips:(BOOL)bshowTips;

- (instancetype)initWithType:(KDTipsDirectType)directType
                     content:(NSString *)content
                         key:(NSString *)key
                    markView:(UIView *)markView
                   markPoint:(CGPoint)markPoint
                  lineOffset:(CGFloat)lineOffset
                   bshowTips:(BOOL)bshowTips;

- (instancetype)initWithType:(KDTipsDirectType)directType
                     content:(NSString *)content
                         key:(NSString *)key
                    markView:(UIView *)markView
                   markPoint:(CGPoint)markPoint
                  lineOffset:(CGFloat)lineOffset
                   bshowTips:(BOOL)bshowTips
                 bottomImage:(UIImage *)image;

- (void)removeTips;

@end


@interface KDTipsView (Custom)

+ (KDTipsView *)tipsWithDirectType:(KDTipsDirectType)directType
                           content:(NSString *)content
                               key:(NSString *)key
                         bshowTips:(BOOL)bshowTips;

+ (KDTipsView *)tipsWithDirectType:(KDTipsDirectType)directType
                           content:(NSString *)content
                               key:(NSString *)key
                          markView:(UIView *)markView
                         markPoint:(CGPoint)markPoint
                         bshowTips:(BOOL)bshowTips;



@end


