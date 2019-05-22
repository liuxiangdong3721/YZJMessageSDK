//
//  KDSubscribeCell.h
//  kdweibo
//
//  Created by lichao_liu on 7/21/15.
//  Copyright (c) 2015 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonSimpleDataModel.h"
@interface KDSubscribeCell : UICollectionViewCell
@property (nonatomic, strong) XTPersonHeaderImageView *appImageView;
@property (nonatomic, strong) PersonSimpleDataModel *data;
@property (nonatomic, strong) UILabel *appNameLabel;
@property (nonatomic, assign) BOOL isCreatorPerson;
@property (nonatomic, assign) NSInteger cellWidth;

@property (nonatomic, assign) BOOL isSpecialCell;
@end
