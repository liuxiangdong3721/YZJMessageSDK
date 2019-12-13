//
//  KDChatManagerViewController.h
//  kdweibo
//
//  Created by liwenbo on 16/3/3.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#define MANAGER_LIMIT 5

@interface KDChatManagerViewController : UIViewController

@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, strong) void (^deleteManagerblock)(void);

//下面三个是用于部门群组创建时的选人
@property (nonatomic, assign) BOOL isFromDeptSettingVC;
@property (nonatomic, strong) NSString *orgId;
@property (nonatomic, assign) BOOL hasSetDeptGroup;
@property (nonatomic, strong) void (^didFinishSelectPersons)(NSMutableArray *personIds);
@property (nonatomic, strong) void (^deleteDepAdminsPersons)(NSMutableArray *personIds);
@end
