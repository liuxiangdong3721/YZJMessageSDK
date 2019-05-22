//
//  KDExtTagModel.h
//  kdweibo
//
//  Created by huanghaining on 16/12/12.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDExtTagModel : NSObject

@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, assign) NSTimeInterval addTime;
@property (nonatomic, strong, nullable) NSArray *extUsers;
@property (nonatomic, assign) NSInteger total;

- (nullable instancetype)initWithDict:(NSDictionary *_Nonnull)dict;

@end
