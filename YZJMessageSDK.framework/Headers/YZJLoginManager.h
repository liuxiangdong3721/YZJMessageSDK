//
//  YZJLoginManager.h
//  Pods-YZJLogin_Example
//
//  Created by hour on 2019/2/21.
//

#import <Foundation/Foundation.h>

typedef void(^LoginBlock)(NSDictionary<NSString *, id> *);
typedef void(^LogoutBlock)();

NS_ASSUME_NONNULL_BEGIN

@interface YZJLoginManager : NSObject

+ (instancetype)sharedInstance;

- (void)login;

- (void)logout;

- (BOOL)isLogin;

//当前活跃的聊天界面的group
@property (nonatomic, strong, nullable) GroupDataModel *currentShowGroup;


- (void)postCurrentShowGroupNotification:(nullable GroupDataModel *)currentShowGroup;

@end

NS_ASSUME_NONNULL_END
