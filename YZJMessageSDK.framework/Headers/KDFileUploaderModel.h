//
//  KDFileUploaderModel.h
//  kdweibo
//
//  Created by kyle on 2017/3/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDFileUploaderModel : KDJSONModel

@property (nonatomic, strong) NSString *senderName;
@property (nonatomic, strong) NSString *sender;
@property (nonatomic, strong) NSString *fileId;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end
