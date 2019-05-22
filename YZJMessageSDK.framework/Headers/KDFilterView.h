//
//  KDFilterView.h
//  kdweibo
//
//  Created by he15his on 2018/1/18.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDFilterViewSection :NSObject
///是否等宽,若是，全部显示在一行，等宽
@property (nonatomic, assign) BOOL isFixedPitch;
@property (nonatomic, assign) NSInteger selectIndex; // 小于0就是没有选
@property (nonatomic, copy) NSArray *rowTitles;
@property (nonatomic, copy) NSString *title;

///最后一个不能选中，默认为NO
@property (nonatomic, assign) BOOL lastIndexNotSelect;

@end

@protocol KDFilterViewDelegate<NSObject>
- (void)filterViewDidSelectIndexPath:(NSIndexPath *)indexPath;

@end


/*
    cell高26， 上下距10， 上下cell间距12 ,section高30
 
 */
@interface KDFilterView : UIView
@property(nonatomic, strong) UICollectionView *collectionView;

//数据源
@property (nonatomic, copy) NSArray *sectionDatas;
//是否能选中，高亮
@property (nonatomic, assign) BOOL canSelected;
@property (nonatomic, weak) id<KDFilterViewDelegate> delegate;

- (void)clearAllSelect;
@end
