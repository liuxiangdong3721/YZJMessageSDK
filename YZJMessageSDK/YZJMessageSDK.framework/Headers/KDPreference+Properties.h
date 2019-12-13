//
//  Created by quding
//

#import "KDPreference.h"

@interface KDPreference(Properties)

/* a */
@property (nonatomic, assign) NSInteger appPopStartCount;

// workbench header info
@property (nonatomic, copy) NSString *workbenchHeaderInfoJson;
@property (nonatomic, copy) NSString *workbenchHeaderAppListJson;
@property (nonatomic, assign) BOOL workbenchHeaderAppIsShowDoubleLine;   // 是否显示两行App  default NO
@property (nonatomic, assign) BOOL wbShowDoubleLineFromServer;  // default NO

// custom tab info
@property (nonatomic, copy) NSString *customTabInfoJson;

// 语音助手 YES 则已显示过help，NO则还没显示
@property (nonatomic, assign) BOOL voiceAssistantHelpShowed;

// 语音助手进入次数
@property (nonatomic, assign) NSInteger voiceAssistantEnterCount;

@property (nonatomic, copy) NSDictionary *mercCachedIPs;

/*
 {
 "101091429":{titlePbColor:"#ffffff","titleBgColor":"#999999"},
 "101091683":{titlePbColor:"#ffffff","titleBgColor":"#999999"}
 }
 */
//@property (nonatomic, copy) NSDictionary *hybridAppColors;

/*
 // appid为key   refresh 1 需要刷新本地 0不需要刷新
 {
 "10619":{version:200,"channel":1,"refresh":1},
 "10619":{version:200,"channel":1,"feresh":0}
 }
 */
//@property (nonatomic, copy) NSDictionary *hybridAppVersionDict;

/// 同事圈版本记录
@property (nonatomic, assign) NSInteger colleagueVersion;
@property (nonatomic, assign) NSInteger colleagueChannel;

// 数据库是否迁移成功
@property (nonatomic, assign) BOOL isMigrateDBSuccNew;
@property (nonatomic, assign) BOOL isXuntongSkipBackup;

@property (nonatomic, assign) BOOL debug_isUseWebtool;


@end
