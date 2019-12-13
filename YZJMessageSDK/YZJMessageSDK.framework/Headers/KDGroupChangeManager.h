//
//  KDGroupChangeManager.h
//  kdweibo
//
//  Created by kyle on 16/9/13.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GroupDataModel.h"

typedef void (^KDCreateGroupBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDCreateExtGroupBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDGroupAddPersonBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDCreateSingleGroupBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDCreateExternalQRBlock)(BOOL success, NSString *error, NSDictionary *result);
typedef void (^KDCreateUnarchiveUsersBlock)(BOOL success, NSString *error, NSDictionary *data);
typedef void (^KDCreateGroupForWechatShareBlock)(BOOL success, NSString *error, GroupDataModel *groupDM);
typedef void (^KDDoshareBlock)(BOOL success, NSString *error);

typedef void (^KDSetGroupStatusBlock)(BOOL success, NSString *error);

@interface KDGroupChangeManager : NSObject

@property (nonatomic, strong) KDCreateGroupBlock        createGroupBlock;
@property (nonatomic, strong) KDCreateExtGroupBlock     createExtGroupBlock;
@property (nonatomic, strong) KDGroupAddPersonBlock     addPersonBlock;
@property (nonatomic, strong) KDCreateSingleGroupBlock  createSingleGroupBlock;
@property (nonatomic, strong) KDCreateExternalQRBlock   createExternalQRBlock;
@property (nonatomic, strong) KDCreateUnarchiveUsersBlock       createUnarchiveUsersBlock;
@property (nonatomic, strong) KDCreateGroupForWechatShareBlock  createGroupForWechatShareBlock;
@property (nonatomic, strong) KDDoshareBlock    doshareBlock;

@property (nonatomic, strong) KDSetGroupStatusBlock     setGroupStatusBlock;

+ (instancetype)shareGroupChangeManager;
- (void)createGroupWithPersons:(NSArray *)persons
                      complete:(KDCreateGroupBlock)block;
- (void)createGroupWithPersonIds:(NSArray *)personIds
                        complete:(KDCreateGroupBlock)block;
- (void)createGroupWithPersons:(NSArray *)personIds
                     groupName:(NSString *)groupName
                         param:(NSDictionary *)param
                      complete:(KDCreateGroupBlock)block;
- (void)createGroupWithPersonIds:(NSArray *)personIds
                       groupName:(NSString *)groupName
                           param:(NSDictionary *)param
                        complete:(KDCreateGroupBlock)block;

- (void)createExtGroupWithPersonIds:(NSArray *)personIds
                            groupId:(NSString *)groupId
                          groupName:(NSString *)groupName
                              param:(NSDictionary *)param
                           complete:(KDCreateExtGroupBlock)block;

- (void)addPersonWithGroup:(GroupDataModel *)group
                   persons:(NSArray *)persons
                  complete:(KDGroupAddPersonBlock)block;
- (void)addPersonWithGroup:(GroupDataModel *)group
                 personIds:(NSArray *)personIds
                  complete:(KDGroupAddPersonBlock)block;

- (void)createSingleGroupComplete:(KDCreateSingleGroupBlock)block;
- (void)createSingleGroupWithUserIds:(NSArray *)userIds Complete:(KDCreateSingleGroupBlock)block;
- (void)createSingleGroupGroupName:(NSString *)groupName
                          Complete:(KDCreateSingleGroupBlock)block;
- (void)createExternalGroupQRWithGroup:(GroupDataModel *)group
                              complete:(KDCreateExternalQRBlock)block;
- (void)createUnarchiveUsersWithArr:(NSArray *)modelList
                           complete:(KDCreateUnarchiveUsersBlock)block;
- (void)doShareExtQRUrlWithUrl:(NSString *)url
                      complete:(KDDoshareBlock)block;
- (void)createGroupForWechatShareWithGroupId:(NSString *)groupId
                                       extId:(NSString *)extId
                                    complete:(KDCreateGroupForWechatShareBlock)block;

- (void)setGroupStatusWithGroupId:(NSString *)groupId
                              key:(NSString *)key
                            value:(int)value
                         complete:(KDSetGroupStatusBlock)block;

@end
