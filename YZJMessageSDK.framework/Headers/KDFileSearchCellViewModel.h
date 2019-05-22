//
//  KDFileSearchCellViewModel.h
//  kdweibo
//
//  Created by he15his on 2018/1/22.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDFileSearchCellViewModel : NSObject
@property (nonatomic, strong) MessageFileDataModel *fileModel;
@property (nonatomic, copy) NSAttributedString *highlightNameAttr;
@property (nonatomic, copy) NSAttributedString *highlightPersonNameAttr;

@end
