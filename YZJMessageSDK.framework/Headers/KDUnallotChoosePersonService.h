//
//  ChatChoosePersonService.h
//  kdweibo
//
//  Created by Scan on 16/9/8.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KDContactGroupDataModel;

@interface KDUnallotChoosePersonService : NSObject

+ (void)loadUnallotPeronsComplete:(void(^)(KDContactGroupDataModel*))complete;

@end

@interface KDGroupAtPersonHelper: NSObject

+ (void)checkGroupAtPrefence:(GroupDataModel *)group complete:(void(^)(NSArray <NSString *>*))complete;

@end

