//
//  KDPersonDetailMedalModel.h
//  kdweibo
//
//  Created by sevli on 2017/2/9.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDPersonDetailMedalModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *logoUrl;
@property (nonatomic, assign) NSInteger level;


- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end
