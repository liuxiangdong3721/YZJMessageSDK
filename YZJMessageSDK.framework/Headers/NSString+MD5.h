//
//  NSString+MD5.h
//  Pods
//
//  Created by 钟伟杰 on 2016/11/25.
//
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)

/// 兼容旧代码
- (NSString *)kd_md5Sting;

/*
 项目中默认 32位 小写
 */
- (NSString *)kd_md5String;

// 32位 小写
- (NSString *)kd_md5HashToLower32Bit;

// 32位 大写
- (NSString *)kd_md5HashToUpper32Bit;

// 16位 小写
- (NSString *)kd_md5HashToLower16Bit;

// 16位 大写
- (NSString *)kd_md5HashToUpper16Bit;


@end
