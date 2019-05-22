//
//  KDPersonCache.h
//  kdweibo
//
//  Created by Gil on 15/3/27.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PersonDataModel.h"
#import "TMMemoryCache.h"
@interface KDPersonCache : NSObject

+ (instancetype)sharedPersonCache;

//key is personId


/**
*  从缓存中获取人员信息
*
*  @param key 人员ID personId
*
*  @return 人员信息
*/
- (PersonSimpleDataModel *)personForKey:(NSString *)key;

- (PersonSimpleDataModel *)personForWebPersonId:(NSString *)key;

//如果存在缓存则返回person，不存在返回nil
- (PersonSimpleDataModel *)nullablePersonForKey:(NSString *)key;

- (PersonSimpleDataModel *)personForKeyInMemory:(NSString *)key;
- (void)setPersonInMemory:(PersonSimpleDataModel *)person forKey:(NSString *)key;

- (void)removePersonForKey:(NSString *)key;

- (void)removeAllPersons;
@property (nonatomic, strong) dispatch_queue_t fetchQueue;

// 批量替换 personForKey的方法 返回没有按照传入数组的顺序  //personid
- (void)personsForPersonIds:(NSArray <NSString *>*)keys needCompensate:(BOOL)compensate complete:(void(^)(NSArray <PersonSimpleDataModel *>* persons))complete;

// 批量 获取人员信息 oid 或者personid
- (NSArray <PersonSimpleDataModel *>*)personsForOidsOrPersonids:(NSArray <NSString *>*)keys;

// 批量 获取人员信息的头像和名字
- (void)personsInfoWithIds:(NSArray *)keys complete:(void(^)(NSArray <PersonSimpleDataModel *>* persons))complete;
@end
