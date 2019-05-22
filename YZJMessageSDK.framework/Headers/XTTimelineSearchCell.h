//
//  XTTimelineSearchCell.h
//  kdweibo
//
//  Created by Gil on 15/1/12.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "XTGroupHeaderImageView.h"
#import "KDPersistentBackgroundLabel.h"
@class GroupDataModel;
@class XTUnreadImageView;
@interface XTTimelineSearchCell : KDTableViewCell

@property (nonatomic, strong, readonly) XTGroupHeaderImageView *headerImageView;
@property (nonatomic, strong, readonly) UILabel *nameLabel;
@property (nonatomic, strong, readonly) UILabel *messageLabel;

@property (nonatomic, strong) GroupDataModel *group;
@property (nonatomic, strong) KDPersistentBackgroundLabel *groupLabel;

@end
