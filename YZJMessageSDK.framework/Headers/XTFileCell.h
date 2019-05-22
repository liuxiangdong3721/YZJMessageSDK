//
//  XTFileCell.h
//  XT
//
//  Created by kingdee eas on 13-11-28.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDTableViewCell.h"
@class DocumentFileModel;

@interface XTFileCell : KDTableViewCell

@property (nonatomic,assign) BOOL checked;
@property (nonatomic,strong) DocumentFileModel *file;
@property (nonatomic,assign) BOOL isPreview;

- (void)setChecked:(BOOL)checked;
- (void)setChecked:(BOOL)checked animated:(BOOL)animated;

@end
