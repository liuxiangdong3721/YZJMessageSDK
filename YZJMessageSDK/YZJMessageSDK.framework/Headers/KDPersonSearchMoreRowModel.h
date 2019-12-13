//
//  KDPersonSearchMoreRowModel.h
//  kdweibo
//
//  Created by he15his on 2018/7/4.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDChooseProtocol.h"
#import "KDGlobleSearchHelper.h"
#import "KDChoosePersonsViewController.h"

@interface KDPersonSearchMoreRowModel : NSObject<KDTableSectionRowProtocol>

@property(nonatomic, assign) KDSearchType searchType;
@property(nonatomic, weak) KDGlobleSearchHelper *globleSearch;
@property(nonatomic, weak) KDChoosePersonsViewController *viewController;
@end
