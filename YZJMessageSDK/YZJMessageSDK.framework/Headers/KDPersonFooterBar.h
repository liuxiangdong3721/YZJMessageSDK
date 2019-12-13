//
//  KDPersonFooterBar.h
//  kdweibo
//
//  Created by Gil on 15/7/15.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol KDPersonFooterBarDelegate;
@interface KDPersonFooterBar : UIView
@property (nonatomic, strong, readonly) UIButton *msgButton;
@property (nonatomic, strong, readonly) UIButton *callButton;
@property (nonatomic, strong, readonly) UIButton *inviteExFriendBt;

@property (nonatomic, weak) id<KDPersonFooterBarDelegate> delegate;

- (void)showInviteView;
- (void)setInviteBtActionInvaild;
- (void)setGender:(BOOL)isFemale;
- (void)showCallButton;
- (void)hideCallButton;
- (void)showMsgButton;

- (void)showDenyPassView;

- (void)showConvertToContact;
- (void)hindenConverToContact;

@end

@protocol KDPersonFooterBarDelegate <NSObject>
@optional
- (void)personFooterViewMsgButtonPressed:(UIView *)view;
- (void)personFooterViewPhoneButtonPressed:(UIView *)view;
- (void)personFooterViewInviteExFriendButtonPressed:(UIView *)view;
- (void)personFooterViewConvertToContactButtonPressed:(UIView *)view;

- (void)personFooterViewExtFriendDenyBtnPressed:(UIView *)view;
- (void)personFooterViewExtFriendPassBtnPressed:(UIView *)view;
@end
