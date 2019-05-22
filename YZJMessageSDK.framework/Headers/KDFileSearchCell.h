//
//  KDFileSearchCell.h
//  kdweibo
//
//  Created by Gil on 15/1/13.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "KDFileModel.h"

@class MessageFileDataModel;
@class KDFileSearchCellViewModel;

@interface KDFileSearchCell : KDTableViewCell

- (void)setCellViewModel:(KDFileSearchCellViewModel *)viewModel;
- (void)setFileModel:(KDFileModel *)fileModel;

@end
