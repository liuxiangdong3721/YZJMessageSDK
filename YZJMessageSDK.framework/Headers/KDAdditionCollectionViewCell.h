//
//  KDAdditionCollectionViewCell.h
//  kdweibo
//
//  Created by kyle on 2017/3/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDSearchFileButton.h"

@interface KDAdditionCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) KDSearchFileButton *fileButton;

@property (nonatomic, assign) BOOL isUser;
@property (nonatomic, strong) NSString *title;

@end
