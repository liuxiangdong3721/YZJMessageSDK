//
//  KDChooseProtocol.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#ifndef KDChooseProtocol_h
#define KDChooseProtocol_h

#import <UIKit/UIKit.h>

@class KDChooseSelectedView;

@protocol KDChooseReloadProtocol <NSObject>

- (void)reloadData;

@end

@protocol KDChooseCellCheckProtocol <NSObject>

@property (nonatomic, assign) BOOL check;
@property (nonatomic, assign) BOOL userInterFaceEnble;

@end

@protocol KDTableSectionRowProtocol <NSObject>

@property (nonatomic, assign, readonly) CGFloat rowHeight;
@property (nonatomic, copy, readonly, nonnull) NSString *cellIdentifier;

@property (nonatomic, copy, readonly, nonnull) NSString *rowTitle;
@property (nonatomic, copy, readonly, nullable) NSString *rowSubTitle;
@property (nonatomic, copy, readonly, nullable) NSString *rowHeadImageName;
@property (nonatomic, copy, readonly, nullable) NSString *rowHeadImageUrl;


- (nonnull UITableViewCell<KDChooseCellCheckProtocol>*)cellForIndex:(NSIndexPath*_Nullable)indexPath tableView:(UITableView*_Nullable)tableView selectedView:(KDChooseSelectedView *_Nullable)selectedView isSearch:(BOOL)isSearch;
- (void)didSelectAtIndex:(NSIndexPath*_Nullable)indexPath tableView:(UITableView*_Nullable)tableView selectedView:(KDChooseSelectedView *_Nullable)selectedView;

@end

#endif /* KDChooseProtocol_h */
