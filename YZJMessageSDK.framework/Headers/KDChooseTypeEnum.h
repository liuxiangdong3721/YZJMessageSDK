//
//  KDChooseTypeEnum.h
//  kdweibo
//
//  Created by Scan on 2017/4/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#ifndef KDChooseTypeEnum_h
#define KDChooseTypeEnum_h

typedef NS_ENUM(NSUInteger, KDChooseOrgPersonType) {
    KDChooseOrgPersonTypeNone = 0, // 获取组织架构人员
    KDChooseOrgPersonTypeConcern = 10,//关注类型 只获取上下级关系
};

typedef NS_ENUM(NSUInteger, KDScanCardResultType) {
    KDScanCardResultTypeDefault,
    KDScanCardResultTypeCustomer,
};

typedef NS_ENUM(NSInteger, KDCheckPhoneRelationShip) {
    KDCheckPhoneRelationShipColleague = 1,
    KDCheckPhoneRelationShipExtFriend = 2,
    KDCheckPhoneRelationShipOther,
};

#endif /* KDChooseTypeEnum_h */
