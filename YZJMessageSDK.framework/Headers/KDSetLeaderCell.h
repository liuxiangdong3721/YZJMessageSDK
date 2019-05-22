//
//  KDSetLeaderCell.h
//  kdweibo
//
//  Created by KongBo on 15/9/7.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KDSetLeaderCellStyle) {
    KDSetLeaderCellStyleHeader,
    KDSetLeaderCellStyleChoose,
    KDSetLeaderCellStyleHandle
};

@interface KDSetLeaderCell : UITableViewCell

- (void)setCellStyle:(KDSetLeaderCellStyle)cellStyle;
- (void)setTitle:(NSString *)title;
- (void)setCellChoosed:(BOOL)choosed;
@end
