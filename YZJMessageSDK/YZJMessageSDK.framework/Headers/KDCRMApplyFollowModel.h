//
//  KDCRMApplyFollowModel.h
//  kdweibo
//
//  Created by sevli on 2017/4/8.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@protocol KDCRMApplyModel;

@interface KDCRMApplyModel : KDJSONModel

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *urlParam;
@property (nonatomic, strong) NSString *logoUrl;

@end


@interface KDCRMApplyFollowModel : KDJSONModel


@property (nonatomic, assign) BOOL hasFollowed;
@property (nonatomic, strong) NSString *applyOid;
@property (nonatomic, strong) NSString *approvalOid;
@property (nonatomic, strong) NSString *approvalPid;
@property (nonatomic, strong) KDCRMApplyModel *applyMsgInfo;



@end
