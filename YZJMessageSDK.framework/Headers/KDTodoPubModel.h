//
//  KDTodoPubModel.h
//  kdweibo
//
//  Created by lichao_liu on 16/3/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDTodoPubModel : KDJSONModel

@property (nonatomic, strong) NSString *appid;
@property (nonatomic, strong) NSString *appname;
@property (nonatomic, strong) NSString *appimageurl;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end
