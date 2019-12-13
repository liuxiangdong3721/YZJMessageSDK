//
//  KDServer.h
//  kdweibo
//
//  Created by Gil on 2016/12/23.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kQingVersion @"0.9.81"

@interface KDServer : NSObject

//服务器配置，设置统一的baseUrl和HTTP Header Field
+ (void)configure;

//HTTP链接的默认User-Agent
+ (NSString *)defaultUserAgent;
//轻应用的UserAgent
+ (NSString *)qingUserAgent:(NSString *)qingVersion refresh:(void(^)(NSString *qingUA))refresh;

@end
