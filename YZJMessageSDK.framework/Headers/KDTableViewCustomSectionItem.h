//
//  KDTableViewCustomSectionItem.h
//  kdweibo
//
//  Created by kyle on 2016/12/8.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, KDTableViewCustomSectionType){
    KDTableViewCustomSectionType0 = 0,
    KDTableViewCustomSectionType1 = 1,
    KDTableViewCustomSectionType2 = 2,
    KDTableViewCustomSectionType3 = 3,
    KDTableViewCustomSectionType4 = 4,
    KDTableViewCustomSectionType5 = 5,
    KDTableViewCustomSectionType6
};

@interface KDTableViewCustomSectionItem : NSObject

@property (nonatomic, assign) KDTableViewCustomSectionType sectionType;
@property (nonatomic, strong) NSMutableArray *rowList;
@property (nonatomic, strong) UIView *sectionView;

@property (nonatomic, assign) CGFloat headerHeight;
@property (nonatomic, assign) CGFloat rowHeight;

@property (nonatomic, assign) UITableViewCell *tableViewCell;

@end
