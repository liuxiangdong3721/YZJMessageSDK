//
//  KDTodoClient.h
//  kdweibo
//
//  Created by lichao_liu on 16/3/17.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BOSConnect.h"

// OPENAPI CLIENT
@interface KDTodoClient : BOSConnect

#define openapi_mark_create @"openapi/client/v1/msgassist/message/mark/create.json"
- (void)createMarkWithMarkType:(int)markType
                     messageId:(NSString *)messageId
                        todoId:(NSString *)todoId
                       groupId:(NSString *)groupId;

#define openapi_mark_delete @"openapi/client/v1/msgassist/message/mark/delete.json"
- (void)deleteMarkWithId:(NSString *)markId;

#define openapi_mark_list @"openapi/client/v1/msgassist/message/mark/list.json"
- (void)queryMarkListWithId:(NSString *)markId
                   pageSize:(int)pageSize
                  direction: (int)direction;

#define openapi_create_merge @"openapi/client/v1/msgassist/message/merge/create.json"
- (void)createMergeWithGroupId:(NSString *)groupId
                   mergeMsgIds:(NSArray *)msgIds;

#define openapi_get_merge @"openapi/client/v1/msgassist/message/merge/get.json"
- (void)getMergeWithMergeId:(NSString *)mergeId;

// 拉取表情数据
#define openapi_get_customemoji @"openapi/client/v1/msgassist/message/customemoji/get.json"
- (void)getCustomemojiWithLastModifiedTime:(NSString *)lastModifiedTime;

// 添加表情
#define openapi_add_customemoji @"openapi/client/v1/msgassist/message/customemoji/add.json"
- (void)addCustomemojiWithEmojiId:(NSString *)emojiId fileName:(NSString *)fileName;

// 删除表情
#define openapi_delete_customemoji @"openapi/client/v1/msgassist/message/customemoji/removeAll.json"
- (void)deleteCustomemojiWithEmojiIds:(NSArray *)emojiIds;


@end
