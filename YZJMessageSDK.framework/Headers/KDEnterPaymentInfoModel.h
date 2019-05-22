//
//  KDEnterPaymentInfoModel.h
//  kdweibo
//
//  Created by Joyingx on 2017/1/16.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDEnterPaymentInfoModel : KDJSONModel

/// 企业版本，default、basic、pro
@property (nonatomic, strong) NSString *ver;
/// 企业版中文名称，基础版、标准企业版、高级企业版
@property (nonatomic, strong) NSString *verName;
/// 套餐ID
@property (nonatomic, strong) NSString *packageId;
/// 当前团队人数
@property (nonatomic, assign) NSInteger teamPersonNum;
/// 当前服务器时间，如：2017-01-10 20:23:20
@property (nonatomic, strong) NSString *serverDate;
/// 套餐开始时间
@property (nonatomic, strong) NSString *beginTime;
/// 套餐结束时间
@property (nonatomic, strong) NSString *endTime;

@end
