//
//  XTForwardDataModel.h
//  XT
//
//  Created by kingdee eas on 13-11-13.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger{
    ForwardMessageFile = 1, //文件
    ForwardMessageText = 2, //文本
    ForwardMessagePicture = 3, //图片
    ForwardMessageNews = 4, //新闻
    ForwardMessageCombine = 5, // 合并转发
    ForwardMessageIntelligentDocument = 6, // 智能文档

} ForwardMessageType;

@interface XTForwardDataModel : NSObject

@property (nonatomic, assign) ForwardMessageType forwardType;
@property (nonatomic, strong) NSString *message; //文本消息内容
@property (nonatomic, strong) id paramObject; //传递转发参数
@property (nonatomic, strong) NSArray *paramObjectArray; //批量转发参数

//转发文字需要用到
@property (nonatomic, strong) NSString * contentString;
//二维码转发
//转发图片需要用到
@property (nonatomic, strong) NSURL * thumbnailUrl;
@property (nonatomic, strong) NSURL * originalUrl;

@property (nonatomic, strong) UIImage *localImage;
//转发新闻需要用到
@property (nonatomic, copy) NSString * appName;
@property (nonatomic, copy) NSString * imageUrl;
@property (nonatomic, copy) NSString * text;
@property (nonatomic, copy) NSString * title;
@property (nonatomic, copy) NSString * webUrl;
@property (nonatomic, copy) NSString * appId;

@property (nonatomic, copy) NSString * mergeId;
@property (nonatomic, copy) NSArray *mergeRecords;
@property (nonatomic, strong) GroupDataModel *sourceGroup; // 发起转发的原会话组

@property (nonatomic, strong) NSDictionary *toDictionary;

@property (nonatomic, assign) int msgLen; // 视频时长

- (id)initWithDictionary:(NSDictionary *)dict;

@end
