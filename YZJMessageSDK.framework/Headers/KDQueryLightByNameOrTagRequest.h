//
//  KDQueryLightByNameOrTagRequest.h
//  kdweibo
//
//  Created by Joyingx on 2017/1/9.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//


#import "KDQueryLightByNameOrTagModel.h"

@interface KDQueryLightByNameOrTagRequest : KDBusinessRequest

- (instancetype)initWithSearchKey:(NSString *)key;

@end
