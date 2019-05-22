//
//  KDAddColleaguesByPhoneViewController.h
//  kdweibo
//
//  Created by 王 松 on 14-4-18.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "KDChooseSelectedView.h"

typedef NS_ENUM(NSUInteger, KDAddColleaguesByPhoneType) {
    KDAddColleaguesByPhoneType_Internal,
    KDAddColleaguesByPhoneType_External,
    KDAddColleaguesByPhoneType_Internal_MC_Mobile_add,
    KDAddColleaguesByPhoneType_External_JSB,
    KDAddColleaguesByPhoneType_Do_Not_Request, // 加人不要请求接口
};

@interface KDAddColleaguesByPhoneViewController : UIViewController

@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, copy) NSString *perSpaceInviteType;

- (void)setAddColleaguesType:(KDAddColleaguesByPhoneType)addType;

@end
