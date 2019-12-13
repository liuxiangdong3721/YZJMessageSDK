//
//  KDUserHelper.h
//  kdweibo
//
//  Created by Gil on 14-7-16.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef void (^KDUserHelperCompletionBlock) (BOOL success, NSArray *persons, NSString *error);

@interface KDUserHelper : NSObject

//通过oid换取用户信息 单个
+ (void)exchangePersonWithOid:(NSString *)oid
                   completion:(KDUserHelperCompletionBlock)completionBlock;

// 通过oid换取用户信息
+ (void)exchangeExtPersonWithOid:(NSString *)oid
                      completion:(KDUserHelperCompletionBlock)completionBlock;

@end
