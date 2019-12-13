//
//  KDChatMemberViewController.h
//  kdweibo
//
//  Created by liwenbo on 16/2/16.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol KDChatMemberViewControllerDelegate<NSObject>
- (void)didSelectPerson:(PersonSimpleDataModel *)person;

@end

//群成员列表
@interface KDChatMemberViewController : UIViewController

@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, assign) BOOL isFromDeptSettingVC;
@property (nonatomic, assign) BOOL isSearchMessage;
@property (nonatomic, strong) NSString *orgId;
@property (nonatomic, weak) id<KDChatMemberViewControllerDelegate>delegate;

- (void)didSelectCallBackPerson:(PersonSimpleDataModel *)person;
@end
