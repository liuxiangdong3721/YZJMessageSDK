//
//  KDPersonActionCommCell.h
//  kdweibo
//
//  Created by 孔博 on 15/12/8.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "KDChooseProtocol.h"

@class KDRemindActiveCell;

@protocol KDRemindActiveCellDelegate <NSObject>

- (void)didRemindCell:(KDRemindActiveCell *)cell;

@end

@interface KDRemindActiveCell : KDLS2Cell

@property (nonatomic, weak) id<KDRemindActiveCellDelegate>remindDelegate;

@property (nonatomic, strong) PersonSimpleDataModel *person;

- (void)setChecked:(BOOL)checked;


@end

@interface KDExtLocalContactCell : KDLS2Cell

@property (nonatomic, strong) UIImageView *headerImagev;
@property (nonatomic, strong) UILabel *lastPhoneLabel;

@property (nonatomic, strong) KDButton *messgeButton;
@property (nonatomic, strong) KDButton *callButton;
@property (nonatomic, copy) void(^messageBlock)(void);
@property (nonatomic, copy) void(^callBlock)(void);
@end

@interface KDExtLocalContactChooseCell: KDExtLocalContactCell <KDChooseCellCheckProtocol>

@property (nonatomic, strong, readonly) UIImageView *checkImageView;

@end
