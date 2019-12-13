//
//  KDExternalSetting.h
//  XunTong
//
//  Created by Gil on 13-4-16.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>
#define kKDExternalSettingQueueName "KDExternalSetting.queue"

@interface KDExternalSetting : NSObject

//外部好友的上次更新时间
@property (nonatomic, strong) NSString *extPersonUpdateTime;
//外部组的上次更新时间
@property (nonatomic, strong) NSString *extGroupUpdateTime;
//外部组的上次消息读取状态更新时间
@property (nonatomic, strong) NSString *extMsgLastReadUpdateTime;
//工作圈名字上次更新时间
@property (nonatomic, strong) NSString *companyNameUpdateTime;
//外部会话组退出更新时间
@property (nonatomic, copy) NSString *extGroupExitUpdateTime;
//外部好友手机联系人上次更新时间
@property (nonatomic, strong) NSString *extMobilPersionUpdateTime;
//设置，如不设，运行会报错
//切换登录账户时需要重新设置
@property (strong, nonatomic) NSString *openId;

+ (KDExternalSetting *)sharedSetting;

- (void)reset;
- (BOOL)saveSetting;
- (void)cleanSetting;
@end
