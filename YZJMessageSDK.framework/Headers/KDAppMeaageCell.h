//
//  KDAppMeaageCell.h
//  kdweibo
//
//  Created by kyle on 16/8/20.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "KDAppMessageModel.h"
#import "KDV10Cell.h"

@interface KDAppMeaageCell : KDLS2Cell

@property (nonatomic, strong) KDAppMessageModel *messageModel;

@end
