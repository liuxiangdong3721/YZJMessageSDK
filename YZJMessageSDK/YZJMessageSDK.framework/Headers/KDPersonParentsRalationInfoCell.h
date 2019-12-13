//
//  KDPersonParentsRalationInfoCell.h
//  kdweibo
//
//  Created by liwenbo on 16/4/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "KDPersonDetailProtocol.h"
#import "KDPersonDetail.h"

@interface KDPersonParentsRalationInfoCell : KDTableViewBaseCell

@property (nonatomic, strong) NSArray *dataArr;
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, weak) id<KDPersonDetailActionProtocol> delegate;
@property (nonatomic, assign) NSInteger sectionCount;
@property (nonatomic, strong, readonly) KDPersonDetailParent *detailParent;
@property (nonatomic, assign, readonly) BOOL isExpanded;

@property (nonatomic, copy) void(^expandBlock)(BOOL isExpended);
@property (nonatomic, copy) void(^detailBlock)(NSString *personId);


@end



