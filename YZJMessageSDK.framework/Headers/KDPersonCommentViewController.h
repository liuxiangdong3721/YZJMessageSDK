//
//  KDPersonCommentViewController.h
//  kdweibo
//
//  Created by KongBo on 15/12/2.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@class KDRemarkModel;
@class KDExContactModel;
@class KDChooseSelectedView;
typedef NS_ENUM(NSUInteger, KDPersonCommentPageComeFromType) {
    KDPersonCommentPageComeForm_AddByPhoneNumber,
    KDPersonCommentPageComeForm_AddByContact,
    KDPersonCommentPageComeForm_PersonDetail,
    KDPersonCommentPageComeForm_JSB_NewUser_FromLocalContact,
    KDPersonCommentPageComeForm_JSB_YZJUers_FromLocalContact,
    KDPersonCommentPageComeForm_JSB_NewUser_AddByPhoneNumber,
    KDPersonCommentPageComeForm_JSB_YZJUers_AddByPhoneNumber
};

typedef void(^handleCommentPersonBlock)(BOOL success, KDRemarkModel *comment);

@interface KDPersonCommentViewController : UIViewController
@property (nonatomic, strong) KDChooseSelectedView *selectPersonsView;

- (void)commentPerson:(KDExContactModel *)contact commentType:(KDPersonCommentPageComeFromType)type
    handleResultBlock:(handleCommentPersonBlock)resultBlock;

@end
