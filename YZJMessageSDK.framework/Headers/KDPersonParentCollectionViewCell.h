//
//  KDPersonParentCollectionViewCell.h
//  kdweibo
//
//  Created by liwenbo on 16/4/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface KDPersonParentCollectionViewCell : UICollectionViewCell

@property (nonatomic, assign) BOOL singleMode;
@property (nonatomic, strong) KDPersonParentInfo *parentInfo;

@end
