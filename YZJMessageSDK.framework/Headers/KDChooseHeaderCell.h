//
//  KDChooseHeaderCell.h
//  kdweibo
//
//  Created by kyle on 16/10/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "KDChooseHeaderModel.h"

typedef void(^KDChooseHeaderViewBlock)(KDChooseHeaderModelButtonType type);

@interface KDChooseHeaderCell : KDTableViewCell

@property (nonatomic, strong) NSMutableArray *dataList;
@property (nonatomic, strong) KDChooseHeaderViewBlock block;

@end
