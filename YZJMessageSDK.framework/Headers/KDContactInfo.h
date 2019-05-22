//
//  KDContactInfo.h
//  kdweibo_common
//
//  Created by AlanWong on 15/1/12.
//  Copyright (c) 2015年 kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDContactInfo : NSObject
@property (copy, nonatomic) NSString * name;        //属性名称
@property (copy, nonatomic) NSString * type;        //属性类型，”E”表示email，”P”表示phone，”O”表示other “C”备注

@property (copy, nonatomic) NSString * value;       //属性值
@property (copy, nonatomic) NSString * publicid;    //只有公共属性才会有的id
@property (copy, nonatomic) NSString * permission;  //权限，与publicid同时存在，”R”表示value不可修改，”W” 表示value可修改
@property (copy, nonatomic) NSString * inputType;   //输入数据类型 date
@property (copy, nonatomic) NSString * uri;         //需要跳转的轻应用的连接

@property (assign, nonatomic) BOOL isAllowFlag;   //数据是否允许被编辑
@property (nonatomic, assign, readonly) BOOL defaultPermission;  // 默认是否可以修改


- (id)initWithDictionary:(NSDictionary *)dict;

- (id)initWithName:(NSString *)name type:(NSString *)type value:(NSString *)value;

- (id)initWithName:(NSString *)name type:(NSString *)type value:(NSString *)value isAllowFlag:(BOOL)isAllowFlag;

- (NSDictionary *)dictionary;

@end
