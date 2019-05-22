//
//  KDGetExtPersonsByExtIdsRequest.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/1/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface KDGetExtPersonsByExtIdsRequest : KDBusinessRequest

- (instancetype)initWithExtIds:(NSString *)ids isSingleId:(BOOL)singleId;

@end
