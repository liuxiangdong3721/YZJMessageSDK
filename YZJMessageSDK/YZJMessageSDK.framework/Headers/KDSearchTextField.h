//
//  KDSearchTextField.h
//  kdweibo
//
//  Created by kyle on 2017/3/13.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^DeleteBackwardBlock)(void);

@interface KDSearchTextField : UITextField

@property (nonatomic, strong) DeleteBackwardBlock deleteBlock;

@end
