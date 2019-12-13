//
//  KDPersonHeaderView.h
//  kdweibo
//
//  Created by Gil on 15/3/13.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

//0：保密，1：男，2：女，默认为0
typedef NS_ENUM(NSUInteger, KDPersonGender) {
    KDPersonGender_NotSet =0,
    KDPersonGender_Man = 1,
    KDPersonGender_Female = 2,
};

typedef void (^touchHeaderPhotoBlockHandler)(void);

@protocol KDPersonHeaderViewDelegate;

@interface KDPersonHeaderView : UIView
@property (nonatomic, strong, readonly) UIImageView *photoView;
@property (nonatomic, strong, readonly) UIImageView *backgroundImageView;
@property (nonatomic, strong, readonly) UILabel *nameLabel;
@property (nonatomic, strong, readonly) PersonDataModel *person;

@property (nonatomic, weak) id<KDPersonHeaderViewDelegate> delegate;
@property (nonatomic, assign) BOOL follow;


- (id)initWithFrame:(CGRect)frame Person:(PersonDataModel *)person;

- (void)layoutHeaderViewForScrollViewOffset:(CGPoint)offset;
- (void)setBackgroundViewFromGender:(KDPersonGender)gender;
- (void)updatePersonName:(NSString *)personName; //更新姓名
- (void)updatePersonJobTitle:(NSString *)jobTitle;//更新职位
- (void)updatePersonStatus:(PersonDataModel *)person;  // 更新离职状态
//- (void)updateOpenStatus:(PersonDataModel *)person; // 更新个人状态

- (void)setTouchHeaderPhotoBlock:(touchHeaderPhotoBlockHandler)handleBlock;

@end

@protocol KDPersonHeaderViewDelegate <NSObject>
@optional
//- (void)followButtonPressed:(UIView *)view;
@end
