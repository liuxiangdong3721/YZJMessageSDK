//
//  KDUnSubscribeCell.h
//  kdweibo
//
//  Created by 钟伟杰 on 2018/1/19.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^didSubscribeBlock)(PersonSimpleDataModel *subscribeInfo);

@interface KDUnSubscribeCell : KDLS2Cell

@property (nonatomic, strong) UIButton *subscribeButton;
@property (nonatomic, strong) PersonSimpleDataModel *subscribeInfo;
@property (nonatomic, strong) didSubscribeBlock unSubscribeBlock;

@end
