//
//  KDMercChannel.h
//  kdweibo
//
//  Created by hour on 2018/1/4.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDNotificationChannelDelegate.h"

#import <KDMerc/KDMerc.h>
#import "KDReachabilityManager.h"

#define kMercCGISendMsg @"/yzj/send_msg" // 发消息

FOUNDATION_EXPORT NSErrorDomain const _Nonnull KDMercMsgErrDomain;

typedef void (^KDMercConnectSuccessBlock) (void);
typedef void (^KDMercConnectFailedBlock) (void);

@interface KDMercChannel : NSObject <KDMercServiceDelegate>

@property (nonnull, strong, nonatomic) KDMercConnectSuccessBlock successBlock;
@property (nonnull, strong, nonatomic) KDMercConnectFailedBlock failedBlock;

@property (nonnull, strong, nonatomic, readonly) dispatch_queue_t handleQueue;
@property (nonnull, strong, nonatomic, readonly) NSMutableDictionary *cmdMap;

@property (assign, nonatomic, readonly) KDMercConnectStatus connStatus;

@property (nullable, weak, nonatomic) id<KDNotificationChannelDelegate> delegate;

@property (nonatomic, assign) NSTimeInterval queryTimeInterval;

- (void)openChannelWithPubKey:(nonnull NSString *)pubKey
                    openToken:(nonnull NSString *)openToken
                    userAgent:(nonnull NSString *)userAgent
                     clientId:(nonnull NSString *)clientId
              longLinkAddress:(nonnull NSString *)longLinkAddress
                 longLinkPort:(unsigned short)longLinkPort
              shortLinkAddress:(nonnull NSString *)shortLinkAddress
                shortLinkPort:(unsigned short)shortLinkPort;
- (void)closeChannel;

/// private method 外部不要调用
- (void)_openChannel;

- (void)report_onForeground:(BOOL)isForeground;
- (void)report_onNetworkChanged:(KDReachabilityStatus)status;
- (void)handleCrash;

- (nonnull NSString *)sessionId;

/**
 用于query，不需要返回数据

 @param msg query_msg
 */
- (void)queryMessage:(NSString * _Nonnull)msg;

- (void)sendMsg:(NSString * _Nonnull)msg
        withCGI:(NSString * _Nonnull)cgi
        success:(void (^_Nullable)(NSString * _Nullable) )succBlock
        failure:(void (^_Nullable)(NSError * _Nullable))failBlock;

@end
