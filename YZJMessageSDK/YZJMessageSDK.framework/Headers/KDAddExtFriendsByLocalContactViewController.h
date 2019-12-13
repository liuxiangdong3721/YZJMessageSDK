//
//  KDAddExtFriendsByLocalContactViewController.h
//  kdweibo
//
//  Created by KongBo on 15/9/17.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "KDChooseProtocol.h"
#import "KDChooseSelectedView.h"

typedef NS_ENUM(NSUInteger, AddExteralFriendsFromLocalContactVCType) {
    AddExteralFriendsFromLocalContactVCType_AddExtFriend,
    AddExteralFriendsFromLocalContactVCType_Select_LauchChat,
    AddExteralFriendsFromLocalContactVCType_Select_JSB,
};

@interface KDAddExtFriendsByLocalContactViewController : UIViewController <KDChooseReloadProtocol>

@property (nonatomic, assign) AddExteralFriendsFromLocalContactVCType addType;

@property (nonatomic, assign) BOOL canShowAddFriendByPhoneNumberHeaderView; // default NO;

@property (nonatomic, assign) BOOL canShowInviteView; // default YES 跟 canShowAddFriendByPhoneNumberHeaderView 互斥;

@property (nonatomic, assign) BOOL isFromCreateCompany;
@property (nonatomic, assign) BOOL isChildViewController;

@property (nonatomic, copy) NSString *perSpaceInviteType;
@property (nonatomic, strong, readonly) UITableView *tableView;
@end
