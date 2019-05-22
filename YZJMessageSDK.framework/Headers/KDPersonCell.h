//
//  KDPersonCell.h
//  kdweibo
//
//  Created by Gil on 15/3/16.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"
#import "KDPersonDetail.h"
#import "KDContactInfo.h"

typedef void(^CellButtonClickBlock)(NSInteger index, NSString *value);

@interface KDPersonCharacterView : UIView
@property (nonatomic, assign, readonly) CGFloat width;
@property (nonatomic, strong) NSArray *characters;
@end

//基类，不直接使用，因为未做排版
@interface KDPersonCell : KDLS6Cell

@property (strong, nonatomic) KDContactInfo *personContactInfo;

@end


@interface KDPersonContactCell : KDPersonCell
@property (strong , nonatomic) CellButtonClickBlock buttonClickBlock;
@property (strong , nonatomic) NSString *contactType;
@end

@interface KDPersonCompanyCell : KDPersonCell
@property (nonatomic, strong) KDPersonCompanyInfo *companyInfo;
@property (nonatomic, strong, readonly) KDPersonCharacterView *characterView;
@end

@interface KDPersonOtherCell : KDPersonCell
@end

@interface KDPersonDynamicCell : KDPersonCell
@end

@interface KDPersonFoldCell : KDTableViewCell
@property (nonatomic, strong, readonly) UIImageView *foldImageView;

- (void)setTitle:(NSString *)title;
@end


@interface KDPersonDetailMedalCell : KDPersonCell

@property (nonatomic, strong, readonly) UILabel *countLabel;
@property (nonatomic, strong) NSArray *logoArr;

@end

@interface KDPersonCustomerOwnerCell : KDPersonCell

@property (nonatomic, strong, readonly) UIButton *transfButton;
@property (nonatomic, weak) id<KDPersonDetailActionProtocol> delegate;

@end


@interface KDPersonDetailQRCell : KDPersonCell

@end
