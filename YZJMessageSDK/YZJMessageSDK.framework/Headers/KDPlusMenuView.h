//
//  KDPlusMenuView.h
//  kdweibo
//
//  Created by Darren on 15/5/20.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDPlusMenuViewModel;
@interface KDPlusMenuView : UIView

// @[KDPlusMenuViewModel]
@property (nonatomic, strong) UITableView *tableViewMain;
@property (nonatomic, strong) NSMutableArray *mArrayModels;
@property (nonatomic, strong) void (^backgroundPressed)(void);
- (void)shrinkTable;
- (void)restoreTable;
- (void)hideInCenter;
- (void)addModel:(KDPlusMenuViewModel *)model;

- (void)setBGRoundRect;
@end

//////////////////////////////////////////////////////////////////////////

@interface KDPlusMenuViewModel : NSObject

@property (nonatomic, strong) NSString *strImageName;
@property (nonatomic, strong) NSString *selectImageName;
@property (nonatomic, strong) NSString *strTitle;
@property (nonatomic, strong) NSString *base64StrImage;
@property (nonatomic, assign) BOOL hasNew;
@property (nonatomic, strong) void (^selection)(void);

+ (KDPlusMenuViewModel *)modelWithTitle:(NSString *)strTitle
                              imageName:(NSString *)strImageName
                        selectImageName:(NSString *)selectStrImageName
                              selection:(void (^)(void))block;

+ (KDPlusMenuViewModel *)modelWithTitle:(NSString *)strTitle
                              imageName:(NSString *)strImageName
                              selection:(void (^)(void))block;

+ (KDPlusMenuViewModel *)modelWithTitle:(NSString *)strTitle
                              base64StrImage:(NSString *)base64StrImage
                              selection:(void (^)(void))block;
+ (KDPlusMenuViewModel *)modelWithTitle:(NSString *)strTitle
                                 hasNew:(BOOL)hasNew
                              selection:(void (^)(void))block;
@end
