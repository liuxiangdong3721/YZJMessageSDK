//
//  KDPersistentBackgroundLabel.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/5/11.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDPersistentBackgroundLabel : UILabel
@property (nonatomic, assign) UIEdgeInsets edgeInsets NS_REFINED_FOR_SWIFT;

- (void)setPersistentBackgroundColor:(UIColor*)color;

@end
