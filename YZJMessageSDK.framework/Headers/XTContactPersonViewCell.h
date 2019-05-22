//
//  XTContactPersonViewCell.h
//  kdweibo
//  通讯录-常用联系人cell
//  Created by weihao_xu on 14-4-18.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import "KDV10Cell.h"
#import "XTPersonHeaderImageView.h"
#import "PersonSimpleDataModel.h"

@interface XTContactPersonViewCell : KDLS2Cell

@property (nonatomic, readonly) PersonSimpleDataModel *person;

@property (nonatomic, strong) UILabel *managerLabel;
@property (nonatomic, strong) UIImageView *managerImageView;
@property (nonatomic, strong) UILabel *partJobLabel;//这个显示是否 兼职

@property (nonatomic, strong) UIImageView *extPersonImageView;
/**
 *  @param hiden  YES : 显示职位 NO : 显示部门
 */
- (void)setupCellData:(PersonSimpleDataModel *)person hidenDepartment:(BOOL)hiden;

@end
