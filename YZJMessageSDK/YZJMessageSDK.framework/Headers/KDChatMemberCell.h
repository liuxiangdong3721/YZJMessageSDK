//
//  KDChatMemberCell.h
//  kdweibo
//
//  Created by liwenbo on 16/2/16.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDV10Cell.h"

@interface KDChatMemberCell : KDLS2Cell

@property (nonatomic, copy) void(^deletePersonBlock)(id person);
@property (nonatomic, strong) UIButton *deleteButton;
@property (nonatomic, strong) UIImageView *extImageView;

- (void)setupCellData:(PersonSimpleDataModel *)person hidenDepartment:(BOOL)hiden;
@end
