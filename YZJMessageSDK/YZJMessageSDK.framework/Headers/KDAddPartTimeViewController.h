//
//  KDAddPartTimeViewController.h
//  kdweibo
//
//  Created by Scan on 16/6/17.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonDataModel.h"

/**
 *  新增简直部门和职位VC
 */
@interface KDAddPartTimeViewController : UIViewController

@property (nonatomic, strong, nonnull) PersonDataModel *person;
@property (nonatomic, copy, nullable) void (^didFinishChoosePartTimeBlock)( NSArray * _Nullable partTime);

@end
