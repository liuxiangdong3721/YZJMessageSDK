//
//  KDChatDetailSearch.h
//  kdweibo
//
//  Created by liwenbo on 16/2/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KDSearchController;

@protocol KDChatDetailSearchDelegate <NSObject>

- (NSArray *)groupMemberArray;
@end

@interface KDChatDetailSearch : NSObject

@property (nonatomic, strong, readonly) KDSearchController *searchController;
@property (nonatomic, weak) id<KDChatDetailSearchDelegate> delegate;
@property (nonatomic, assign) BOOL isDelete;
@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, copy) void(^deletePersonBlock)(id person);
@property (nonatomic, assign) BOOL isSearchMessage;

- (id)initWithContentsController:(UIViewController *)contentsController;

- (void)cancelSearch;
@end
