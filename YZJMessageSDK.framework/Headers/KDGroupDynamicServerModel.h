//
//  KDGroupDynamicServerModel.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/4/12.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDGroupDynamicParamServerModel : KDJSONModel
@property (nonatomic, strong, nullable) NSString *content;
@property (nonatomic, strong, nullable) NSString *title;
@property (nonatomic, strong, nullable) NSString *lightAppId;
@property (nonatomic, strong, nullable) NSString *thumbUrl;
@property (nonatomic, strong, nullable) NSString *webpageUrl;
@property (nonatomic, strong, nullable) NSString *primaryContent;
@property (nonatomic, strong, nullable) NSString *contentUrl;
@end

@interface KDGroupDynamicServerModel : KDJSONModel
@property (nonatomic, strong, nullable) NSString *theDynamicType;
@property (nonatomic, strong, nullable) NSString *personId;
@property (nonatomic, strong, nullable) NSNumber *createTime;
@property (nonatomic, assign) BOOL deleted;
@property (nonatomic, strong, nullable) NSString *sourceId;
@property (nonatomic, strong, nullable) KDGroupDynamicParamServerModel *params;

@end

@protocol KDGroupDynamicServerModel;
@interface KDGroupDynamicListServerModel : KDJSONModel
@property (nonatomic, strong, nullable) NSArray <KDGroupDynamicServerModel> *list;
@end
