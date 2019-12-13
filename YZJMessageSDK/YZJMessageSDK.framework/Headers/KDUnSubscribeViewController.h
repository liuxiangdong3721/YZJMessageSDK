//
//  KDUnSubscribeViewController.h
//  kdweibo
//
//  Created by 钟伟杰 on 2018/1/19.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^unSubscribeVCBlock)(void);

@interface KDUnSubscribeViewController : UIViewController

@property (nonatomic, strong) NSMutableArray *canSubscribePubAccts;
@property (nonatomic, strong) unSubscribeVCBlock unSubscribeVCBlock;

@end
