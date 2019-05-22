//
//  KDAddExternalFriendsFromLocalContactCell.h
//  kdweibo
//
//  Created by KongBo on 15/9/19.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"

#import "KDChooseProtocol.h"

typedef void (^KDAddExternalLocalContactCellInviteClickBlock)(void);

@interface KDAddExternalFriendsFromLocalContactCell : KDTableViewCell<KDChooseCellCheckProtocol>
@property(nonatomic, assign) BOOL muliCheck;
@property(nonatomic, strong, readonly) UILabel *nameLabel;
@property(nonatomic, strong, readonly) UILabel *phoneLabel;
@property(nonatomic, assign) BOOL isInvited;
@property(nonatomic, assign) CGFloat sectionIndexSpace;
@property(nonatomic, strong) KDAddExternalLocalContactCellInviteClickBlock clickBlock;

//- (void)showIsYunZhiJiaUser:(BOOL)isUser;

@property(nonatomic, strong, readonly) UIImageView *checkImageView;

@end
