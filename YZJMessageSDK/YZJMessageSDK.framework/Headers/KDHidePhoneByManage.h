//
//  KDHidePhoneByManage.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/2/23.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface KDHidePhoneByManage : KDBusinessRequest

- (instancetype)initWithPersonId:(NSString *)personId flag:(NSString *)flag;

@end
