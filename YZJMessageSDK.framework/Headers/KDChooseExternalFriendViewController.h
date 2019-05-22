//
//  KDChooseExternalFriendViewController.h
//  kdweibo
//
//  Created by KongBo on 15/9/18.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "KDChooseSelectedView.h"
#import "KDChooseProtocol.h"

@interface KDChooseExternalFriendViewController : UIViewController<KDChooseReloadProtocol>

@property (nonatomic, strong) NSString *adduserType;

@end
