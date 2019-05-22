//
//  KDPersonRowModel.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDChooseProtocol.h"

@interface KDPersonRowModel : NSObject <KDTableSectionRowProtocol>

- (id)initWithPerson:(PersonSimpleDataModel *)person;
@property (nonatomic, strong, readonly) PersonSimpleDataModel *person;

@end
