//
//  NSDictionary+Additions.h
//  kdweibo
//
//  Created by Jiandong Lai on 12-6-25.
//  Copyright (c) 2012年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (KD_Additions)

- (NSDate *)ASCDatetimeForKey:(NSString *)key;
- (NSDate *)ASCDatetimeWithMillionSecondsForKey:(NSString *)key;

@end
