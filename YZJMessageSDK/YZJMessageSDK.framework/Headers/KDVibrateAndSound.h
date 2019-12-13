//
//  KDVibrateAndSound.h
//  kdweibo
//  系统提示音和振动

//  Created by tangzeng on 16/11/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

@interface KDVibrateManager : NSObject
+ (instancetype)sharedManager;
- (void)play; //振动提醒
- (void)stop;
// 振动反馈
- (void)vibrateFeedBack;
@end

@interface KDSoundManager : NSObject
+ (instancetype)sharedManager;
- (void)stop;
- (void)playWithSoundName:(NSString *)soundName soundType:(NSString *)soundType;
//iOS9以上系统completion才有效
- (void)playWithSoundName:(NSString *)soundName soundType:(NSString *)soundType completion: (void (^)(void))completion;
@end
