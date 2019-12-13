//
//  KDSearchContactModel.h
//  kdweibo
//
//  Created by kyle on 2017/3/24.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDSearchContactModel : KDJSONModel

@property (nonatomic, copy) NSString *personId;
@property (nonatomic, copy) NSString *jobTitle;
@property (nonatomic, copy) NSString *department;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *photoUrl;
@property (nonatomic, copy) NSString *oid;
@property (nonatomic, copy) NSString *recommend;
@property (nonatomic, assign) int status;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

+ (PersonSimpleDataModel *)contactToPerson:(KDSearchContactModel *)contact;
@end
