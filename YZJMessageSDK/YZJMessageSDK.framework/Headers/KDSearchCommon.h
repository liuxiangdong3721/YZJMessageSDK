//
//  KDSearchCommon.h
//  kdweibo
//
//  Created by Gil on 15/8/13.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#ifndef kdweibo_KDSearchCommon_h
#define kdweibo_KDSearchCommon_h

//----------------搜索类型---------------//
typedef NS_ENUM(NSInteger, KDSearchType){
    kSearchTypeContact = 1, /**<联系人*/
    kSearchTypeSpaceMebmer = 1 << 1, /**<协同空间成员*/
    kSearchTypeExtContact = 1 << 2, /**<外部联系人*/
    kSearchTypeGroup = 1 << 3,/**<会话*/
    KSearchTypeText = 1 << 4,/**<文本*/
    kSearchTypeFile = 1 << 5,/**<文件*/
    kSearchTypeYunFile = 1 << 6,/**<企业云盘文件*/
    kSearchTypePublic = 1 << 7,/**<订阅*/
    kSearchTypeHuntApp = 1 << 8/**<应用消息*/
};
//-----------------------------------------//

typedef enum : NSUInteger {
    KDSearchOpenTypeMessage = 1,
    KDSearchOpenTypeContact,
} KDSearchOpenType;

#endif
