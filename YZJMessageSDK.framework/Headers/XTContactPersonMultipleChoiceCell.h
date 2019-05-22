//
//  XTContactPersonMultipleChoiceCell.h
//  XT
//
//  Created by Gil on 13-7-19.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import "KDTableViewCell.h"
#import "XTPersonHeaderImageView.h"

#import "KDChooseProtocol.h"

@interface XTContactPersonMultipleChoiceCell : KDTableViewCell<KDChooseCellCheckProtocol>

//UI
@property (nonatomic, strong, readonly) UIImageView *checkImageView;
@property (nonatomic, strong, readonly) XTPersonHeaderImageView *headerImageView;
@property (nonatomic, strong, readonly) UILabel *nameLabel;
@property (nonatomic, strong, readonly) UILabel *jobLabel;
@property (nonatomic, strong) UIImageView *extPersonImageView;
//Data
@property (nonatomic, readonly) PersonSimpleDataModel *person;


/**
 *  @param hiden  YES : 显示职位 NO : 显示部门
 */
- (void)setupCellData:(PersonSimpleDataModel *)person hidenDepartment:(BOOL)hiden;

@end

@interface XTContactPersonMultipleChoiceAtCell : XTContactPersonMultipleChoiceCell

@end
