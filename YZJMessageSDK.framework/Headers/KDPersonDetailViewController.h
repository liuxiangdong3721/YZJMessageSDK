//
//  KDPersonDetailViewController.h
//  kdweibo
//
//  Created by Gil on 15/3/13.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PersonSimpleDataModel;

@interface KDPersonDetailViewController : UIViewController

- (id)initWithPerson:(PersonSimpleDataModel *)person;


@property (nonatomic, copy) void(^extFriendReultCallBack)(BOOL isPass); //需要拒绝按钮回调

@end
