//
//  KDDetail.h
//  kdweibo
//
//  Created by Gil on 15/3/16.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PersonSimpleDataModel;

@interface KDDetail : NSObject

+ (void)toDetailWithPersonId:(NSString *)personId inController:(UIViewController *)controllor fromGroup:(GroupDataModel *)group;
+ (void)toDetailWithPerson:(PersonSimpleDataModel *)person inController:(UIViewController *)controllor fromGroup:(GroupDataModel *)group;
+ (void)toDetailFromJSWithPerson:(PersonSimpleDataModel *)person inController:(UIViewController *)controllor;

//+ (UIViewController *)toPreviewDetailWithPersonId:(NSString *)personId;
+ (UIViewController *)toPreviewDetailWithPerson:(PersonSimpleDataModel *)person fromGroup:(GroupDataModel *)group ;

+ (void)toDetailWithPersonId:(NSString *)personId inController:(UIViewController *)controllor callBack:(void(^)(BOOL isPass))callBack fromGroup:(GroupDataModel *)group ;
+ (void)toDetailWithPerson:(PersonSimpleDataModel *)person inController:(UIViewController *)controllor callBack:(void (^)(BOOL))callBack fromGroup:(GroupDataModel *)group ;

@end
