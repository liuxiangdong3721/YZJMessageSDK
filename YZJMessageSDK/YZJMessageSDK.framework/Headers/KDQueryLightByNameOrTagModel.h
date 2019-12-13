//
//  KDQueryLightByNameOrTagModel.h
//  kdweibo
//
//  Created by Joyingx on 2017/1/9.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//


#import "KDAppDataModel.h"

@protocol KDAppDataModel;

@interface KDQueryLightByNameOrTagModel : KDJSONModel

@property (nonatomic, strong) NSArray<KDAppDataModel> *list;

@end
