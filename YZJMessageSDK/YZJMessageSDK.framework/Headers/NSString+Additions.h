//
//  NSString+Additions.h
//
//  kdweibo
//
//  Created by Jiandong Lai on 12-4-25.
//  Copyright (c) 2012年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (KD_Additions)

+ (NSString *)randomStringWithWide:(int)randomWide;

// 从当前字符串中根据参数名称搜索参数值
- (NSString *)searchAsURLQueryWithNeedle:(NSString *)needle;

// 按照中文长度模式来计算长度
- (NSInteger)textLength;

- (BOOL)isNumText;

- (BOOL)isCountryPhone;

- (BOOL)hasHanzi;
@end
