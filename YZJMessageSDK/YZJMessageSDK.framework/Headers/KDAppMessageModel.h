//
//  KDAppMessageModel.h
//  kdweibo
//
//  Created by kyle on 16/8/20.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDAppMessageModel : NSObject

@property (nonatomic, strong) NSString *personId;            //消息所属用户的
@property (nonatomic, strong) NSString *appid;
@property (nonatomic, strong) NSString *appName;
@property (nonatomic, strong) NSString *messageId;            //该轻应用消息的id
@property (nonatomic, strong) NSString *title;               //消息的标题
@property (nonatomic, strong) NSString *thumbUrl;             //该消息的缩略图
@property (nonatomic, strong) NSString *webpageUrl;           //轻应用的跳转url
@property (nonatomic, strong) NSString *content;              //消息的内容
@property (nonatomic, strong) NSString *pubAccId;            //轻应用对应公共号id
@property (nonatomic, strong) NSString *sendTime;

- (id)initWithDictionary:(NSDictionary *)dict;

@end
