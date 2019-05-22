//
//  KDPersonEditRequest.h
//  kdweibo
//
//  Created by 孔博 on 15/12/3.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class KDRemarkModel;

typedef void (^KDPersonEditRequestDidCompleteBlock)(BOOL success , NSString *error);

@interface KDPersonEditRequestManager : NSObject

+ (void)deleteExContactWithExId:(NSString *)exId
              handleResultBlock:(KDPersonEditRequestDidCompleteBlock)handleBlock;
+ (void)commentExtFriendWithExId:(NSString *)exId
                          remark:(KDRemarkModel *)remark
              handleResultBlock:(KDPersonEditRequestDidCompleteBlock)handleBlock;
@end
