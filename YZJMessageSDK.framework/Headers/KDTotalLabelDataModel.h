//
//  KDTotalLabelDataModel.h
//  kdweibo
//
//  Created by AlanWong on 14/12/16.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDTotalLabelDataModel : NSObject

@property(nonatomic,assign)NSInteger totalCount;
-(NSInteger)count;
-(instancetype)initWithTotalCount:(NSInteger)totalCount;
@end
