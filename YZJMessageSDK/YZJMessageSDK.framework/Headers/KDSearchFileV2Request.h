//
//  KDSearchFileV2Request.h
//  kdweibo
//
//  Created by kyle on 2017/3/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDSearchFileV2Request : KDBusinessRequest

- (instancetype)initWithCount:(int)count
                         page:(int)page
                         word:(NSString *)word
                     fileType:(NSString *)fileType
                     senderId:(NSString *)senderId
                         time:(int)time;

@end
