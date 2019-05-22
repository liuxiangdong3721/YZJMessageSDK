//
//  KDRemarkModel.h
//  kdweibo
//
//  Created by 孔博 on 15/12/15.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDRemarkModel : NSObject
@property (nonatomic, strong, nullable) NSString *personId;
@property (nonatomic, strong, nullable) NSString *name;
@property (nonatomic, strong, nullable) NSString *companyName;
@property (nonatomic, strong, nullable) NSString *jobTitle;

+ (nullable KDRemarkModel *)string2RemarkModel:(NSString *_Nonnull)string;
- (nullable NSString *)remarkModel2String;
@end
