//
//  KDMercChannel+CMD.h
//  kdweibo
//
//  Created by hour on 2018/1/4.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import "KDMercChannel.h"

@interface KDMercChannel (CMD)

- (void)checkQueryAll;
//- (void)queryAll;

- (void)handle:(id)message;
- (void)handle:(id)message needRecord:(BOOL)needRecord;

@end
