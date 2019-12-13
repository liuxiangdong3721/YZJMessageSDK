//
//  XTDeleteService.h
//  XT
//
//  Created by Gil on 13-10-14.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XTDeleteService : NSObject

+ (XTDeleteService *)shareService;

- (void)deleteGroupWithGroupId:(NSString *)groupId;
- (void)deleteMessageWithGroupId:(NSString *)groupId msgIds:(NSArray *)msgIds;
- (void)deleteMessageWithPublicId:(NSString *)publicId groupId:(NSString *)groupId msgIds:(NSArray *)msgIds;
@end
