//
//  KDChoosePersonsViewController+Search.h
//  kdweibo
//
//  Created by Scan on 2017/11/23.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePersonsViewController.h"

@class KDChooseSelectedView, KDSectionModel;

@interface KDChoosePersonsViewController (Search)

- (void)search:(NSString *)text selectedView:(KDChooseSelectedView *)selectedView complete:(void(^)(NSArray<KDSectionModel*>* result, BOOL filish))complete;
- (void)loadMoreSearchWithType:(KDSearchType)searchType
                  selectedView:(KDChooseSelectedView *)selectedView
                  successBlock:(void(^)(NSArray<KDSectionModel*>* result))successBlock
                  failureBlock:(void(^)(NSString *))failureBlock;
@end
