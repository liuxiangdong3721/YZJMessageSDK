//
//  KDChooseEnumDefine.h
//  kdweibo
//
//  Created by Scan on 2017/12/5.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#ifndef KDChooseEnumDefine_h
#define KDChooseEnumDefine_h

typedef NS_ENUM(NSUInteger, KDChooseRootViewType) { //预定义二级页面枚举
    KDChooseRootViewTypeDefault,        // KDChoosePersonsViewController
//    KDChooseRootViewTypeOrganization,   // KDChooseOrganizationViewController  
    KDChooseRootViewTypeExtFriend,      // KDChooseExternalFriendViewController
//    KDChooseRootViewTypeMobileContact,  // KDExtLocalContactViewController
    KDChooseRootViewTypeGroup,          // XTGroupTimelineViewController
    KDChooseRootViewTypeRole,          // XTGroupTimelineViewController
};

typedef enum : NSUInteger {
    KDChooseTypeOrg,  //组织架构
    KDChooseTypeExtFriend,  //外部好友
    KDChooseTypeGroup, //已有群组
    KDChooseTypeRole, //角色
    KDChooseTypePhonebook, //手机通讯录
    KDChooseTypeMobileContact, //手机联系人
    KDChooseTypeWeChat, //微信
    KDChooseTypeLinkSpace, //生态圈
    KDChooseTypeFaceGroup, //面对面建群
    
} KDChooseType;

typedef NS_ENUM(NSUInteger, KDChooseDataType) {
    KDChooseDataTypeDefault,  //遵循 选人范围 > ab方案 
    KDChooseDataTypeExtFriend,  //外部好友
    KDChooseDataTypeUnallot, //未分配人员
    KDChooseDataTypeRange, //选人范围
    KDChooseDataTypeInGroup, //当前群组
    KDChooseDataTypeRecetChat, //最近聊天
    KDChooseDataTypeAt, //At人选人范围
};



#endif /* KDChooseEnumDefine_h */
