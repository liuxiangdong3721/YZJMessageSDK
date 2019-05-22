//
//  KDEventAnalysis.h
//  kdweibo_common
//
//  Created by Gil on 14-9-19.
//  Copyright (c) 2014年 kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDEventAnalysis : NSObject

// attributes可为nil
+ (void)event:(NSString *)eventId;
+ (void)event:(NSString *)eventId attributes:(NSDictionary *)attributes;
+ (void)event:(NSString *)eventId attributes:(NSDictionary *)attributes counter:(int)number;

@end
