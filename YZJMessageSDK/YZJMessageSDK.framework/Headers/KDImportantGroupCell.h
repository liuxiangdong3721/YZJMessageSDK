//
//  KDImportantGroupCell.h
//  kdweibo
//
//  Created by kyle on 16/5/13.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"

@class XTGroupHeaderImageView;

@interface KDImportantGroupCell : KDTableViewBaseCell

@property (nonatomic, strong) XTGroupHeaderImageView *headerImageView;
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, assign) BOOL isExtenal;

@property (nonatomic, strong) UIImageView *extenalSignImageView; //外部联系人/群组

@end
