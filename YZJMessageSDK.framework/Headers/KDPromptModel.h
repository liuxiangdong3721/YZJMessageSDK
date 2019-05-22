//
//  KDPromptModel.h
//  kdweibo
//
//  Created by lichao_liu on 16/3/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger,KDPromptType) {
    KDPromptType_collect,//收藏
    KDPromptType_forward,//转发
    KDPromptType_uploadToComputer,//上传到电脑
    KDPromptType_webchat,//分享到微信
    KDPromptType_otherApp,//其他应用打开
    KDPromptType_wpsOpen,//wps 打开
    KDPromptType_kingdeeYunfile//企业云盘
};
@interface KDPromptModel : NSObject
@property (nonatomic, assign) KDPromptType promptType;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *imageName;
- (instancetype)initWithDict:(NSDictionary *)dict;
@end
