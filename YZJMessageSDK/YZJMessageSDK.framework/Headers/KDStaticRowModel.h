//
//  KDStaticRowModel.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDChooseProtocol.h"
#import "KDChooseEnumDefine.h"

@interface KDStaticRowModel : NSObject <KDTableSectionRowProtocol>

@property (nonatomic, assign, readonly) KDChooseType type;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSString *imageName;

- (id)initWithTitle:(NSString *)title imageName:(NSString *)imageName type:(KDChooseType)type;

@end
