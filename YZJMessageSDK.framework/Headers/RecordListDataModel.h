//
//  RecordListDataModel.h
//  ContactsLite
//
//  Created by Gil on 12-12-10.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import "BOSBaseDataModel.h"

@interface RecordListDataModel : BOSBaseDataModel

@property (nonatomic,copy) NSString *groupId;
@property (nonatomic,copy) NSString *updateTime;//本次更新时间, KD_DATE_ISO_8601_LONG_NUMERIC_FORMATTER
@property (nonatomic,assign) int count;//记录总数
@property (nonatomic,strong) NSMutableArray *list;//记录列表,RecordDataModel数组
@property (nonatomic, assign) int unreadCount; // 201501014新增，用于提高消息未读提示的准确率。
@end
