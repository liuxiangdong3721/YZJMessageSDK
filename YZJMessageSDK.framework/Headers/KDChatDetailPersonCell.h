//
//  KDChatDetailPersonCell.h
//  kdweibo
//
//  Created by liwenbo on 16/2/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDSubscribeCell.h"

@interface KDChatDetailPersonCell : UICollectionViewCell
@property (nonatomic, assign) BOOL isShowDelete;
@property (nonatomic, assign) BOOL shouldSignExternalPerson;
@property (nonatomic, assign) BOOL isManager;  //是否管理员

@property (nonatomic, strong) XTPersonHeaderImageView *appImageView;
@property (nonatomic, strong)PersonSimpleDataModel *data;
@property (nonatomic, strong) UILabel *appNameLabel;


@end
