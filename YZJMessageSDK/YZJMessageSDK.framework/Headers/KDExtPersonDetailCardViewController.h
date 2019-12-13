//
//  KDExtPersonDetailCardViewController.h
//  kdweibo
//
//  Created by 钟伟杰 on 2017/3/23.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^KDExtPersonDetailCardViewBlock)(void);


@interface KDExtPersonDetailCardViewController : UIViewController

@property (nonatomic, copy) KDExtPersonDetailCardViewBlock block;
@property (nonatomic, strong) NSString *picId;

@end
