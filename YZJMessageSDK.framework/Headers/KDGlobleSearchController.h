//
//  KDGlobleSearchController.h
//  ocTestProject
//
//  Created by he15his on 2018/1/5.
//  Copyright © 2018年 he15his. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDSearchCommon.h"

typedef enum : NSUInteger {
    KDGlobleSearchTabTypeAll,
    KDGlobleSearchTabTypeContact,
    KDGlobleSearchTabTypeGroup,
    KDGlobleSearchTabTypeFile,
    KDGlobleSearchTabTypeOther
} KDGlobleSearchTabType;

@interface KDGlobleSearchController : UISearchController
@property (nonatomic, copy) void(^blockBeginSearching)(void);
@property (nonatomic, copy) void(^blockEndSearching)(void);
@property (nonatomic, assign) KDSearchOpenType searchFromType;
///搜索栏控制，默认是所有，可传多个，如果只有一个会隐藏Tab栏
@property (nonatomic, copy) NSArray *searchTabTypes;

- (instancetype)initWithContentsController:(UIViewController *)controller;

@end
