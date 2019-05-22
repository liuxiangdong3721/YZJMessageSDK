//
//  KDTodoPubView.h
//  kdweibo
//
//  Created by lichao_liu on 16/3/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDTodoPubModel.h"

typedef NS_ENUM(NSInteger,KDPubViewOperateType) {
    PubViewOperateType_hide,
    PubViewOperateType_show,
    PubViewOperateType_click
};
typedef void(^PubCollectionCellClickedBlock)(KDTodoPubModel *model,KDPubViewOperateType type);
@interface KDTodoPubView : UIView
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) NSArray *pubArray;
@property (nonatomic, copy) PubCollectionCellClickedBlock pubCellclickedBlock;

- (void)showTodoPubView;
- (void)hideTodoPubView;
@end
