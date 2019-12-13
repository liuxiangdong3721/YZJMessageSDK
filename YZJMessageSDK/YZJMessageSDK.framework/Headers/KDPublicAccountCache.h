//
//  KDPublicAccountCache.h
//  kdweibo
//
//  Created by Gil on 15/3/31.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDPublicAccountDataModel.h"

@interface KDPublicAccountCache : NSObject

+ (instancetype)sharedPublicAccountCache;

//key is personId


/**
*  从缓存中获取公共号信息
*
*  @param key 公共号ID personId
*
*  @return 公共号信息
*/
- (KDPublicAccountDataModel *)pubAcctForKey:(NSString *)key;
- (void)asyncPubAcctForKey:(NSString *)key
                completion:(void (^)(PersonSimpleDataModel *person))completion;

- (void)removePubAcctForKey:(NSString *)key;

- (void)removeAllPubAccts;

@end
