//
//  KDGetPersonInfoByIdRequest.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/1/18.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


//typedef void (^KDGetPersonInfoByIdCompletionBlock)(BOOL success, NSArray *persons, BOOL isAdminRight);

@interface KDGetPersonInfoByIdRequest : KDBusinessRequest

- (instancetype)initWithPersonIds:(NSString *)personIds;

@end
