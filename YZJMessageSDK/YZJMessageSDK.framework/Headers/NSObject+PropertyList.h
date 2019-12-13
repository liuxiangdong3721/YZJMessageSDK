//
//  NSObject+PropertyList.h
//  kdweibo
//  对象属性 方法获取
//  Created by liwenbo on 16/3/31.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
@interface NSObject (PropertyList)

- (NSArray *)getPropertyNames;

@end
