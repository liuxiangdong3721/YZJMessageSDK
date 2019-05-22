//
//  KDPictureCollectionViewCell.h
//  kdweibo
//
//  Created by lichao_liu on 16/7/6.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDFileModel.h"
/**
 选项1
 pictureModel
 *   
 选项2
 fileModel  
 isChecked
 isPreview
 */
typedef void(^KDImageCheckBlock)(BOOL isChcked);
@interface KDPictureCollectionViewCell : UICollectionViewCell
@property (nonatomic, assign) BOOL isChecked;
@property (nonatomic, assign) BOOL isPreview;
@property (nonatomic, strong) DocumentFileModel *fileModel;
@property (nonatomic, copy) KDImageCheckBlock imageCheckBlock;
@property (nonatomic, strong) UIImageView *fileImageView;
@end
