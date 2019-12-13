//
//  XTSearchCell.h
//  XT
//
//  Created by Gil on 13-7-15.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import "KDTableViewCell.h"
#import "XTPersonHeaderImageView.h"

typedef void(^XTSearchCellBlock)(void);

@class PersonSimpleDataModel;
@interface XTSearchCell : KDTableViewCell

@property (nonatomic, assign) BOOL alwaysHiddenSendMessageButton;
//Data
@property (nonatomic, strong) PersonSimpleDataModel *person;

@property (nonatomic, strong) XTSearchCellBlock block;

@end
