//
//  KDExtFriendTopCell.h
//  kdweibo
//
//  Created by Scan on 16/7/7.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KDaddExtFrTopCellActionType) {
    KDaddExtFrTopCellActionType_InputPhoneNumber,
    KDaddExtFrTopCellActionType_Contact,
    KDaddExtFrTopCellActionType_WeChat,    // 微信邀请
    KDaddExtFrTopCellActionType_Card,      // 名片邀请
    KDaddExtFrTopCellActionType_SweepCard, // 扫对方名片
    KDaddExtFrTopCellActionType_Phone,     // 手机邀请
};

typedef void (^KDaddExtFrTopCellActionBlock)(KDaddExtFrTopCellActionType type);

@interface KDExtFriendTopCell : KDTableViewCell

@property (copy, nonatomic) KDaddExtFrTopCellActionBlock actionBlock;

- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier isInvite:(BOOL)isinvite;



@end
