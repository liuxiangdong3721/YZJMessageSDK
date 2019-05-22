//
//  KDBusinessRequest.h
//  kdweibo
//
//  Created by Gil on 2016/12/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDRequest.h"

@interface KDBusinessRequest : KDRequest

- (NSDictionary *)requestHTTPHeaderField;

@end
