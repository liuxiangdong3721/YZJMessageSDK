
//
//  Created by quding
//


/**
 *  自定义的userdefaults 为了防止系统的NSUserDefaults内容过于繁杂
 *  用法是直接用单利，然后存取的key和value，直接用property设置即可
 *  [[NSUserDefaults standardUserDefaults] setObject:@"AAA" forKey:@"username"];
 [[NSUserDefaults standardUserDefaults] synchronize];  --> 系统用法
 *  [SYUserDefaults standardUserDefaults].username = @"AAA"; --> 当前用法
 * NSString * username = [[NSUserDefaults standardUserDefaults] objectForKey:@"username"] --> 系统用法
 * NSString * username = [SYUserDefaults standardUserDefaults].username; -->当前用法
 
 *
 
 
 考虑到点：
     需要的key直接在SYUserDefaults+Properties添加property即可
     统一的读、写操作入口
     线程安全，避免数据不一致
     效率高，有内存缓存
     oc 和 swift 都可以操作  如何支持 Swift？
     支持 设置默认值
     - (long)default_user_long {
        return 20;
     }
    如何删除？
    set 为 nil

 支持的类型：
    NSNumber（Integer、Float、Double）
    NSString
    NSArray
    NSDictionary
    NSURL
    BOOL
 
 注意：
     不要放大的数据 例如 图片等
     返回的都是不可变数据，需要自己处理
     NSMutableArray mutableArray = [NSMutableArray arrayWithObjects:@”bird”,@”michael”, nil];
     NSArray  array = [NSArray arrayWithArray:mutableArray];
 
 性能测试参考：
    http://www.voidcn.com/article/p-rgwdorjk-hk.html
 
 
 数据规则：
     数据分别存储在三个plist文件中
     comm.plist
     userid.plist  不同用户对应不同文件  【切换用户，会自动更新数据】
     userid_quanziid.plist 不同用户，不同圈子 对应不同文件【切换用户或圈子，会自动更新数据】
 
     不同数据 根据前缀来做标识
     @property (nonatomic, assign) NSInteger quanzi_colleagueVersion;
     @property (nonatomic, assign) NSInteger user_colleagueVersion;
     @property (nonatomic, assign) BOOL comm_isMigrateDBSuccNew;
     @property (nonatomic, assign) BOOL isMigrateDBSuccNew;
 
 *
 */


#import <Foundation/Foundation.h>

@interface KDPreference : NSObject

+ (instancetype)standard;

- (BOOL)hasValueFroKey:(nullable NSString *)key;

- (void)setUser:(nullable NSString *)userId andQuanzi:(nullable NSString *)eid;
- (nullable NSString *)userId;
- (nullable NSString *)quanziId;

@end
