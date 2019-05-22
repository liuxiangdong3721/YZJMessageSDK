//
//  PersonEditDataModel.h
//  kdweibo
//
//  Created by sevli on 16/10/20.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PersonEditDataModel : NSObject

@property (nonatomic, copy) NSString *fromDepartName;
@property (nonatomic, copy) NSString *fromDepartId;
@property (nonatomic, copy) NSString *toDepartName;
@property (nonatomic, copy) NSString *toDepartId;
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, copy) NSString *createPersonId;
@property (nonatomic, copy) NSString *createPersonName;
@property (nonatomic, copy) NSString *orgName;

@property (nonatomic, assign, readonly) BOOL isMoving;


- (instancetype)initWithDictionary:(NSDictionary *)dict;

- (NSString *)alertViewTitle:(PersonSimpleDataModel *)person;

@end
