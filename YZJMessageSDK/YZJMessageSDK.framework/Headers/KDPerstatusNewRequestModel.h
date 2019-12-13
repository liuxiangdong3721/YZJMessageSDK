//
//  KDPerstatusNewRequestModel.h
//  kdweibo
//
//  Created by sevli on 2017/3/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@protocol KDPerstatusModel;

@interface KDPerstatusNewRequestModel : KDJSONModel

@property (nonatomic, strong) NSNumber *lastTime;
@property (nonatomic, strong) NSArray <KDPerstatusModel> *status;

@end



@interface KDPerstatusModel : KDJSONModel

@property (nonatomic, copy) NSString *eid;
@property (nonatomic, copy) NSString *personId;
@property (nonatomic, copy) NSString *status;


@end
