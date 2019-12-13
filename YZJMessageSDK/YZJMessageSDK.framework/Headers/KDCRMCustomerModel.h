//
//  KDCRMCustomerModel.h
//  kdweibo
//
//  Created by sevli on 2017/4/8.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//




@protocol KDCRMCustomerModel;

@interface KDCRMCustomerModel : KDJSONModel

@property (nonatomic, strong) NSString *customerId;   // 客户ID
@property (nonatomic, strong) NSString *customerName; // 客户姓名
@property (nonatomic, strong) NSString *managerName; // 负责人姓名
@property (nonatomic, assign) NSInteger followStatus; // 关注状态
@property (nonatomic, strong) NSString *urlParam;    // 跳转ID


@end
