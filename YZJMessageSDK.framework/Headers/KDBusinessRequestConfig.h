//
//  KDBusinessRequestConfig.h
//  AFNetworking
//
//  Created by hour on 2018/9/3.
//

#import <Foundation/Foundation.h>

@interface KDBusinessRequestConfig : NSObject

+ (instancetype)sharedConfig;

// 是否打印Log
@property (assign, nonatomic) BOOL networkLogEnable;
    
//  [BOSConfig sharedConfig].user.token
@property (copy, nonatomic) NSString *userOpenToken;
// [BOSConfig sharedConfig].user.oauthToken
@property (copy, nonatomic) NSString *userOauthToken;

// [BOSConfig sharedConfig].user.oauthTokenSecret]
@property (copy, nonatomic) NSString *userOauthTokenSecret;

@property (copy, nonatomic) NSString *kdAppOauthKey;
@property (copy, nonatomic) NSString *kdAppOauthSecret;

    


@end
