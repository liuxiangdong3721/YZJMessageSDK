//
//  KDSingleSearchHelper.h
//  kdweibo
//
//  Created by he15his on 2018/1/15.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDGlobleSearchHelper.h"

///单独一个搜索请求
@interface KDSingleSearchHelper : NSObject
@property (nonatomic, assign) NSUInteger page;
@property (nonatomic, assign) BOOL hasMore;
@property (nonatomic, assign, readonly) BOOL filish;
@property (nonatomic, strong, readonly) KDGlobleSearchHelper *search;
@property (nonatomic, assign) KDSearchType searchType;
@property (nonatomic, copy) NSArray *datas;

/**
 *  请求发起方法
 *
 *  @param autoDelay NO:不延时， YES:自动延时搜索
 */
- (void)requestWithText:(NSString *)text
                   page:(NSUInteger)page
              autoDelay:(BOOL)autoDelay
           successBlock:(void(^)(BOOL, NSArray *))successBlock
           failureBlock:(void(^)(NSString *))failureBlock;

- (void)setDefaultValue;

- (void)setFilterConditionFrom:(KDGlobleSearchHelper *)searchHelper;
@end
