//
//  NSTimer+Block.h
//  kdweibo
//
//  Created by 张培增 on 16/1/26.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Block)

+ (NSTimer *)KDBlock_ScheduledTimerWithTimeInterval:(NSTimeInterval)time block:(void(^)(void))block repeats:(BOOL)repeats;

@end
