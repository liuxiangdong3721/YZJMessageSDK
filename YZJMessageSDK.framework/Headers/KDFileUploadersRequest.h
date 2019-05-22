//
//  KDFileUploadersRequest.h
//  kdweibo
//
//  Created by kyle on 2017/3/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDFileUploadersRequest : KDBusinessRequest

- (instancetype)initWithCount:(int)count
                         page:(int)page
                      groupId:(NSString *)groupId;

@end
