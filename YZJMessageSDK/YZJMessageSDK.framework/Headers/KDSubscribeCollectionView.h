//
//  KDSubscribeCollectionView.h
//  kdweibo
//
//  Created by lichao_liu on 7/21/15.
//  Copyright (c) 2015 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum CellType {
    SubscribeCell = 0,
    UnreadCell
}CellType;

typedef void(^subscribeCollectionCellDelegate)(PersonSimpleDataModel *data);
@interface KDSubscribeCollectionView : UICollectionView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) NSMutableArray *subscribeDataArray;
@property (nonatomic, copy) subscribeCollectionCellDelegate subscribeCellDelegate;
@property (nonatomic, assign) CellType cellType;
@property (nonatomic, strong) NSString *topLabelStr;
@end
