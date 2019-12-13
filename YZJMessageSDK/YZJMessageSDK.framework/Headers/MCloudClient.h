//
//  MCloudClient.h
//  Public
//
//  Created by Gil on 12-4-27.
//  Edited by Gil on 2012.09.12
//  Copyright (c) 2012年 Kingdee.com. All rights reserved.
//

#import "BOSConnect.h"

@interface MCloudClient : BOSConnect

- (void)getAppParamsWithCust3gNo:(NSString *)cust3gNo;

- (void)getLightAppURLWithMid:(NSString *)mid
                        appid:(NSString *)appid
                    openToken:(NSString *)openToken
                     urlParam:(NSString *)urlParam;

- (void)getLightAppTicketWithAppid:(NSString *)appid
                         openToken:(NSString *)openToken;

@end
