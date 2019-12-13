//
//  KDCompanyManager.h
//  kdweibo
//
//  Created by kyle on 16/10/20.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GroupDataModel.h"

typedef void(^KDFindNetworkInfoBlock)(BOOL success, NSString *message, NSDictionary *dic);

@interface KDCompanyManager : NSObject

@property (nonatomic, strong) KDFindNetworkInfoBlock  findNetworkInfoBlock;

+ (instancetype)shareKDCompanyManager;

- (void)findNetworkInfoComplete:(KDFindNetworkInfoBlock)block;

@end
