//
//  KDPublicAccountService.h
//  kdweibo
//
//  Created by Darren Zheng on 2018/6/27.
//  Copyright © 2018 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RecordDataModel, KDPublicAccountDataModel, MessageNewsEachDataModel;

/**
 修改订阅状态回调
 
 @param succ: 是否成功
 @param toastMessage: 需要toast的信息
*/
typedef void (^UpdateSubscribeCompletion)(BOOL succ, KDPublicAccountDataModel * _Nullable model);

/**
 开启拒收消息回调

 @param succ 是否成功
 */
typedef void (^RejectMsgPidByUserRequestCompletion)(BOOL succ);


@interface KDPublicAccountService : NSObject

/**
 修改订阅状态
 */
- (void)updateSubscribeWithCompletion:(UpdateSubscribeCompletion _Nullable )completion;

/**
 开启拒收消息

 @param on 是否拒绝接收消息
 @param pid 公共号id
 */
- (void)rejectMsgPidByUserRequestWithOn:(BOOL)on
                                    pid:(NSString *_Nullable)pid
                             completion:(RejectMsgPidByUserRequestCompletion _Nullable )completion;

- (id _Nonnull )initWithPubAcctId:(NSString *_Nonnull)pubAcctId;
- (id _Nonnull )initWithPubAcct:(KDPublicAccountDataModel *_Nonnull)pubAcct;

@property (nonatomic, strong, readonly, nonnull) KDPublicAccountDataModel * pubAcct;


// 进入公共号消息列表事件
+ (void)enter_pubAcc:(NSString *_Nullable)_publicId;
// 公共号消息列表指定图文消息曝光次数
+ (void)list_article_exposure_time:(RecordDataModel *_Nullable)record group:(GroupDataModel *_Nullable)group;
// 公共号消息列表图文消息点击事件
+ (void)list_article_click:(RecordDataModel *_Nullable)record group:(GroupDataModel *_Nullable)group eachModel:(MessageNewsEachDataModel *_Nullable)eachModel;
// 公共号消息列表图文消息转发点击事件
+ (void)list_article_transmit_click:(RecordDataModel *_Nullable)record group:(GroupDataModel *_Nullable)group eachModel:(MessageNewsEachDataModel *_Nullable)eachModel;
// 公共号消息列表图文消息分享点击事件
+ (void)list_article_share_click:(RecordDataModel *_Nullable)record group:(GroupDataModel *_Nullable)group eachModel:(MessageNewsEachDataModel *_Nullable)eachModel;

// 公共号发言人用户留言列表的红点接口
typedef void (^PublicUnreadCompletion)(BOOL hasUnread);
+ (void)fetchPublicUnreadWithPublicId: (NSString *_Nullable)publicId completion:(PublicUnreadCompletion _Nullable )completion;
@end
