//
//  KDForwardChooseViewController.h
//  kdweibo
//
//  Created by kyle on 16/8/5.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

@class XTForwardDataModel, XTShareDataModel;
@protocol KDForwardChooseViewControllerDelegate;

@interface KDForwardChooseViewController : UIViewController

///是否隐藏右上角多选
@property (nonatomic, assign) BOOL isHideMultiChoose;

@property (nonatomic, copy) NSArray *blackList;
@property (nonatomic, copy) NSArray *whiteList;

@property (nonatomic, strong) XTShareDataModel *shareData;
@property (nonatomic, strong) XTForwardDataModel *forwardData;
@property (nonatomic, weak) id <KDForwardChooseViewControllerDelegate> delegate;
/// 是否直接跳到创建一个新聊天(暂时只有应用过期在用)
@property (nonatomic, assign) BOOL showCreateNewChat;
/// 选人范围(暂时只有应用过期在用)
@property (nonatomic, copy) NSArray *choosePersonRange;
///跟Delegate功能一样，参数bool代表是否是取消转发
@property (nonatomic, copy) void(^filishBlock)(BOOL isCancel, GroupDataModel *group, NSArray *persons);

- (id)initWithCreateExtenalGroup:(BOOL)isExternalGroup;

@end

@protocol KDForwardChooseViewControllerDelegate <NSObject>

@optional
/// 完成转发
- (void)didFinishForward;
/// 主动关闭
- (void)didCloseForward;

@end
