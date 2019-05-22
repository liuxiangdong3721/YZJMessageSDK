//
//  KDGetCustomerListModel.h
//  kdweibo
//
//  Created by sevli on 2017/4/8.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//


#import "KDCRMCustomerModel.h"

@protocol KDCRMCustomerModel;

@interface KDCustomerListModel : KDJSONModel

@property (nonatomic, strong) NSArray <KDCRMCustomerModel>*list; // 列表
@property (nonatomic, assign) NSInteger total; // 总数
@property (nonatomic, strong) NSString *appId; // appid


@end
