//
//  ContactClient.h
//  ContactsLite
//
//  Created by kingdee eas on 12-11-20.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import "BOSConnect.h"

#define EMPSERVERURL_HTTPGETIMAGE    @"xuntong/ecLite/convers/httpGetImage.action"   //获取图片(get方式)
#define EMPSERVERURL_MESSAGESEND     @"xuntong/ecLite/convers/send.action"           //会话发送
#define EMPSERVERURL_SENDFILE        @"xuntong/ecLite/convers/sendFile.action"       //发送文件消息
#define EMPSERVERURL_PUBLIC_SENDFILE @"xuntong/ecLite/convers/public/sendFile.action"//发送文件消息
#define EMPSERVERURL_PUBLIC_SEND     @"xuntong/ecLite/convers/public/send.action"    //公众号模式发送消息

@interface ContactClient : BOSConnect

@property (nonatomic, weak) UIViewController *controller;
@property (nonatomic, weak) id record;
@property (strong, nonatomic) NSString *clientKey;

//未读数
- (void)unreadCountWithUserIds:(NSArray *)userIds
                    updatetime:(NSString *)updateTime
             pubAcctUpdateTime:(NSString *)pubAcctUpdateTime
         msgLastReadUpdateTime:(NSString *)msgLastReadUpdateTime
            extGroupUpdateTime:(NSString *)extGroupUpdateTime
      extMsgLastReadUpdateTime:(NSString *)extMsgLastReadUpdateTime
           groupExitUpdateTime:(NSString *)groupExitUpdateTime
        extGroupExitUpdateTime:(NSString *)extGroupExitUpdateTime;

//已经退出的群组
- (void)getExitGroupListWithlLastUpdateTime:(NSString *)lastUpdateTime;//内部
- (void)getExitExtGroupListWithlLastUpdateTime:(NSString *)lastUpdateTime;//外部

- (void)getGroupListWithUpdateTime:(NSString *)lastUpdateTime;//会话列表
//分页请请求取会话列表
- (void)getGroupListWithUpdateTime:(NSString *)lastUpdateTime offset:(NSInteger)offset count:(NSInteger)count;//会话列表

- (void)getContentWithMsgID:(NSString *)msgID;
- (void)getPersonInfoWithPersonID:(NSString *)personID type:(NSString *)type;//人员信息
- (void)sendFileWithGroupId:(NSString *)groupId
                   toUserId:(NSString *)toUserId
                    msgType:(int)msgType
                     msgLen:(int)msgLen
                     upload:(NSData *)file
                    fileExt:(NSString *)fileExt
                      param:(NSString *)param
                clientMsgId:(NSString *)clientMsgId;
-(void)getFileWithMsgId:(NSString *)msgId;

- (void)publicGroupList:(NSString *)publicId updateTime:(NSString *)lastUpdateTime;
- (void)publicSendWithGroupId:(NSString *)groupId
                     publicId:(NSString *)publicId
                      msgType:(int)msgType
                      content:(NSString *)content
                      msgLent:(int)msgLen
                  clientMsgId:(NSString *)clientMsgId;//会话发送
- (void)publicGetContent:(NSString *)publicId msgId:(NSString *)msgId;
- (void)publicSendFileWithPublicId:(NSString *)publicId
                           groupId:(NSString *)groupId
                          toUserId:(NSString *)toUserId
                           msgType:(int)msgType
                            msgLen:(int)msgLen
                            upload:(NSData *)file
                           fileExt:(NSString *)fileExt
                       clientMsgId:(NSString *)clientMsgId;
-(void)publicGetFileWithPublicId:(NSString *)publicId msgId:(NSString *)msgId;


//********/群组/********//

- (void)creatGroupWithUserIds:(NSArray *)ids groupName:(NSString *)groupName;//创建群组
- (void)creatGroupWithUserIds:(NSArray *)ids groupName:(NSString *)groupName param:(NSDictionary *)param;
- (void)dissolveGroupWithGroupId:(NSString *)groupId; //解散群组
/**
 *  创建外部群组
 */
- (void)createExtenalGroupWithUserIds:(NSArray *)userIds groupId:(NSString *)groupId;
- (void)createExtenalGroupWithUserIds:(NSArray *)userIds groupId:(NSString *)groupId groupName:(NSString *)groupName;
- (void)createSingleGroup;//创建单人群聊
- (void)createSingleGroupWithUserIds:(NSArray *)userIds;
- (void)createSingleGroupWithGroupName:(NSString *)groupName;
- (void)createGroupForWechatShareWithGroupId:(NSString *)groupId extId:(NSString *)extId;
- (void)addGroupUserWithGroupId:(NSString *)groupId userIds:(NSArray *)ids;//添加成员
- (void)delGroupUserWithGroupId:(NSString *)groupId userId:(NSArray *)personIds;//删除成员
- (void)delHistoryRecordWithGoupID:(NSString *)groupID;//删除记录
- (void)markAllReadWithGroupID:(NSString *)groupID;//标记已读

- (void)setGroupStatusWithGroupId:(NSString *)groupId
                              key:(NSString *)key
                            value:(int)value;
//- (void)transferManagerWithGroupId:(NSString *)groupId managerId:(NSString *)managerId;

- (void)addManagerWithGroupId:(NSString *)groupId managerIds:(NSArray *)managerIds;

- (void)deleteManagerWithGroupId:(NSString *)groupId managerId:(NSString *)managerId;

//删除组或者消息
- (void)delGroupWithGroupId:(NSString *)groupId;
- (void)delMessageWithGroupId:(NSString *)groupId msgIds:(NSArray *)msgIds;
- (void)delMessageWithPublicId:(NSString *)publicId groupId:(NSString *)groupId msgIds:(NSArray *)msgIds;

//消息已读未读列表
- (void)getMessageUreadListWithLastUpdateTime:(NSString *)lastUpdateTime;
- (void)getMessageUreadDetailWithGroupId:(NSString *)groupId MsgId:(NSString *)msgId;
- (void)notifyUnreadUsersWithGroupId:(NSString *)groupId MsgId:(NSString *)msgId;
- (void)notifyUnreadUsersWithGroupId:(NSString *)groupId MsgId:(NSString *)msgId notifyType:(NSString *)notifyType;
//获取【外部】消息已读未读列表
- (void)getExtMessageUreadListWithLastUpdateTime:(NSString *)lastUpdateTime;

//搜索群组内聊天消息
- (void)searchRecordListInGroupWithWord:(NSString *)textWord Page:(int)page Count:(int)count GroupId:(NSString *)groupID;
//搜索群组聊天消息
- (void)searchTextListByGroupWithWord:(NSString *)textWord Page:(int)page Count:(int)count;
//搜索会话文本信息
- (void)searchTextRecordListWithWord:(NSString *)textWord Page:(int)page Count:(int)count;

//搜索会话文件信息
- (void)searchFileRecordListWithWord:(NSString *)textWord Page:(int)page Count:(int)count;

// 外部会话组列表拉取
- (void)getExternalGroupListWithUpdateTime:(NSString *)lastUpdateTime;
- (void)getExternalGroupListWithUpdateTime:(NSString *)lastUpdateTime offset:(NSInteger)offset count:(NSInteger)count;

//外部组二维码
- (void)generateQRUrlWithGroupId:(NSString *)groupId extenalId:(NSString *)extId personId:(NSString *)personId;

// 消息分页
#define EMPSERVERURL_MSGLIST @"xuntong/ecLite/convers/msgList.action"
- (void)getMsgListWithGroupId:(NSString *)groupId
                       userId:(NSString *)userId
                        msgId:(NSString *)msgId
                         type:(NSString *)type
                        count:(NSString *)count;

// 公共号发言人消息分页
#define EMPSERVERURL_PUBLIC_SPEAKER_MSGLIST @"xuntong/ecLite/convers/public/msgList.action"
- (void)getPublicSpeakerMsgListWithGroupId:(NSString *)groupId
                             userId:(NSString *)userId
                              msgId:(NSString *)msgId
                               type:(NSString *)type
                              count:(NSString *)count
                           publicId:(NSString *)publicId;


//获取勿扰状态
- (void)getDoNorDisturb;


//设置勿扰时间
- (void)updateDoNotDisturbWithEnable:(BOOL)enable from:(NSString *)fromTime to:(NSString *)toTime;

// 获取真实消息内容
#define EMPSERVERURL_MSGINFO @"xuntong/ecLite/convers/notrace/msgInfo"
- (void)getNotraceMsgInfoWithGroupId:(NSString *)groupId msgId:(NSString *)msgId;

// 删除真实消息内容
#define EMPSERVERURL_DELMSG  @"xuntong/ecLite/convers/notrace/delMsg"
- (void)deleteNotraceMsgInfoWithGroupId:(NSString *)groupId msgId:(NSString *)msgId;

- (void)websecurityCheck:(NSString *)url;

// 忽略可能认识的人
- (void)ignorePartner:(NSString *)phone;

@end


