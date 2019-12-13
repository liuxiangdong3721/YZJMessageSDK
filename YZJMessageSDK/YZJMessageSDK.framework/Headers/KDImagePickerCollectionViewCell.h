//
//  KDImagePickerCollectionViewCell.h
//  kdweibo
//
//  Created by Joyingx on 2016/10/10.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDImagePickerCollectionViewCell;

@protocol KDImagePickerCollectionViewCellDelegate <NSObject>

@optional
- (BOOL)shouldChekCell:(KDImagePickerCollectionViewCell *)cell;
- (void)imagePickerCell:(KDImagePickerCollectionViewCell *)cell imageDidChecked:(BOOL)checked;

@end

@interface KDImagePickerCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) id<KDImagePickerCollectionViewCellDelegate> delegate;
@property (nonatomic, strong) NSString *representedAssetIdentifier;

- (void)setImage:(UIImage *)image;
- (void)setChecked:(BOOL)checked num:(NSInteger)num;
- (void)setDuration:(double)duration;

@end
