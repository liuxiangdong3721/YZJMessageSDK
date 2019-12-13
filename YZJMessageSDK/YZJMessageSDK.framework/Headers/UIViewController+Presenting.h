//
//  UIViewController+Presenting.h
//  kdweibo
//
//  Created by kyle on 2017/2/10.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Presenting)

//释放栈内所有presentVC
+ (UIViewController *)getFirstPresentingWithVC:(UIViewController *)currentViewController;

//释放一部分presentVC，返回到指定VC
+ (UIViewController *)jumpViewControllerFrom:(UIViewController *)currentViewController toDestViewController:(Class) destClass;

@end
