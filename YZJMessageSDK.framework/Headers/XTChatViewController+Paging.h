//
// Created by Darren Zheng on 2017/3/12.
// Copyright (c) 2017 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BOSResultDataModel.h"


@interface XTChatViewController (Paging)
- (NSString *)dblatestMsgId;
// 事件[1] 首次进入聊天页面
- (void)loadOnePageAtViewDidLoad;

// 事件[2] 下拉 旧消息
- (void)startLoadingTop:(NSString *)oldestMsgId;

// 事件[3] 轮询、长连接，获取网络数据
- (void)fetchDataFromNet:(NSString *)msgId;

// 事件[4] 跳转
- (void)scrollToMsgId:(NSString *)msgId completion:(void (^)(void))completion;

// 事件 下分页
- (void)startLoadingBottom;

// 单纯的new方向更新数据到最新
- (void)fetchNewMessages;


- (void)fetchNearbyMsgId:(NSString *)msgId count:(int)count completion:(void (^)(void))completion;
// 只拉1条看msgId存不存在，有可能用户已经删了，就不跳了
- (void)checkMsgIdExistenceWithMsgId:(NSString *)msgId completion:(void (^)(BOOL succ))completion;
// 分页加载
- (void)getOnePageFromDBWithMsgId:(NSString *)msgId recordCountPerPage:(int)recordCountPerPage direction:(MessagePagingDirection)direction completion:(void (^)(NSArray *records))completionBlock;

// 消息拉取接口
- (void)msgListClientDidReceived:(ContactClient *)client result:(BOSResultDataModel *)result;
- (void)getMsgListClientWithGroupId:(NSString *)groupId userId:(NSString *)userId msgId:(NSString *)msgId type:(NSString *)type count:(NSString *)count completion:(void (^)(BOOL succ, NSDictionary *dictData))completion;


// 下拉 消息菊花
- (void)startLoading;
- (void)stopLoading;

- (void)updateLoading;
- (BOOL)isLoadingVisable;
- (void)scrollModeReset;
- (void)normalModeReset;

@end
