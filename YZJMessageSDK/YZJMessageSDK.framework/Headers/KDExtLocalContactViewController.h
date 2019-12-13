//
//  KDExtLocalContactViewController.h
//  kdweibo
//
//  Created by Scan on 2017/9/12.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "KDChooseProtocol.h"

@interface KDExtLocalContactViewController : UIViewController<KDChooseReloadProtocol>

@property (nonatomic, assign) BOOL isRootOnChooseViewController;
@end
