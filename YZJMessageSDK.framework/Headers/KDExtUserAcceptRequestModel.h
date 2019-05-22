//
//  KDExtUserAcceptRequestModel.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/8/17.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol KDExtUserAccsptDetailModel;

@interface KDExtUserAcceptRequestModel : KDJSONModel

@property (nonatomic, strong) NSArray<KDExtUserAccsptDetailModel> *msgList;
@property (nonatomic, strong) NSNumber *status;

@end

@interface KDExtUserAccsptDetailModel : KDJSONModel

@property (nonatomic, strong) NSString *msgId;
@property (nonatomic, strong) NSString *msg;
@property (nonatomic, strong) NSString *toUserId;
@property (nonatomic, strong) NSString *fromUserId;
@property (nonatomic, strong) NSString *creatTime;


@end
