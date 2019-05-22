//
//  KDUploadContactHelper.h
//  kdweibo
//
//  Created by sevli on 2016/12/13.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDUploadContactHelper : NSObject

// 加密  array = @[@{}] 格式
+ (NSString *)encryptArray:(NSArray *)array;

// 加密  string
+ (NSString *)encryptString:(NSString *)string;


@end
