//
//  KDChatDetailServiceHelper.h
//  kdweibo
//
//  Created by liwenbo on 16/2/16.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^KDCreateIntChatRoomBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDCreateExtChatRoomBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDChatRoomAddPersonBlock)(BOOL success, NSString *error, int errorCode, NSDictionary *result);
typedef void (^KDChatDetailSendGroupIdBlock)(BOOL success, NSString *error, NSInteger errorCode);
typedef void (^KDChatRoomDeletePersonBlock)(BOOL success, NSString *error, NSDictionary *result);
typedef void (^KDChatRoomQuitBlock)(BOOL success, NSString *error);
typedef void (^KDChatDetailAddManagerBlock)(BOOL success, NSString *error, NSDictionary *result);
typedef void (^KDChatDetailDeleteManagerBlock)(BOOL success, NSString *error, NSDictionary *result);

@interface KDChatDetailServiceHelper : NSObject

+ (instancetype)sharedHelper;

//创建内部会话
- (void)creatGroupWithUserIds:(NSArray *)userIds
                    groupName:(NSString *)groupName
              completionBlock:(KDCreateIntChatRoomBlock)completeHandle;

//创建外部会话
- (void)createExtenalGroupWithUserIds:(NSArray *)userIds
                              groupId:(NSString *)groupId
                      completionBlock:(KDCreateExtChatRoomBlock)completeHandle;

//添加成员
- (void)addGroupUserWithGroupId:(NSString *)groupId
                        userIds:(NSArray *)ids
                completionBlock:(KDChatRoomAddPersonBlock)completeHandle;

//删除成员 (删除自己 = 退出聊天室)
- (void)deleteGroupUserWithGroupId:(NSString *)groupId userIds:(NSArray *)userIds completionBlock:(KDChatRoomDeletePersonBlock)completeHandle;


//发送groupid
//- (void)sendGroupId:(NSString *)groupId UnVerifiedUserIds:(NSArray *)unVerifiedUserIds completionBlock:(KDChatDetailSendGroupIdBlock)completeHandle;


//添加管理员
- (void)addManagerWithGroupId:(NSString *)groupId managerIds:(NSArray *)managerIds completionBlock:(void(^)(BOOL success, NSString *error, NSDictionary *result))completeHandle;

//删除管理员
- (void)deleteManagerWithGroupId:(NSString *)groupId managerId:(NSString *)managerId completionBlock:(void(^)(BOOL success, NSString *error, NSDictionary *result))completeHandle;





@end
