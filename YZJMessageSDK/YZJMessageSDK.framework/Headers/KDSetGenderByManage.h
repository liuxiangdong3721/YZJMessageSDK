//
//  KDSetGenderByManage.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/2/20.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface KDSetGenderByManage : KDBusinessRequest

- (instancetype)initWithPersonId:(NSString *)personId andGender:(NSString *)gender;

@end
