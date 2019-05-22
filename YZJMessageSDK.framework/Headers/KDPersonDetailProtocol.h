//
//  KDPersonDetailProtocol.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/1/11.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol KDPersonDetailProtocol <NSObject>

@optional
//构造方法
- (instancetype)initWithSpecialIdentifier:(NSString *)identifier;

//塞数据
- (void)configWith:(id)cellDate;

//传indexPath
- (void)configWithIndexPath:(NSIndexPath *)indexPath extParam:(id)extParam;

@end






@protocol KDPersonDetailActionProtocol <NSObject>

@optional

- (void)customActionWithCell:(id)cell;

@end
