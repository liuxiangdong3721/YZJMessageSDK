//
//  NSURL+Util.h
//  KDFoundation
//
//  Created by hour on 2018/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURL (Util)

/// str 中的中文做编码
+ (NSURL *)kd_URLWithString:(nonnull NSString *)str;

+ (NSDictionary *)decodingURL:(NSURL *)url;
+ (NSDictionary *)decodingURLWithString:(NSString *)urlString;

@end

NS_ASSUME_NONNULL_END
