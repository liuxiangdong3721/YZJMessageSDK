//
//  KDSearchExtPersonModel.h
//  kdweibo
//
//  Created by kyle on 2017/3/24.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDSearchExtPersonModel : KDJSONModel

@property (nonatomic, strong) NSString *companyName;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *photoUrl;
@property (nonatomic, strong) NSString *webUserId;

@property (nonatomic, assign) int status;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

+ (PersonSimpleDataModel *)modelToPerson:(KDSearchExtPersonModel *)contact;

@end
