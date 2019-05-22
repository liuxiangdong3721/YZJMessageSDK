//
//  XTPersonHeaderImageView.h
//  XT
//
//  Created by Gil on 13-7-5.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YZJUIKitPersonModel;
@interface XTPersonHeaderImageView : UIImageView

@property (nonatomic, strong) YZJUIKitPersonModel *person;
@property (nonatomic, strong) UILabel *personStatusLabel;   // 人员状态
@property (nonatomic, strong) UILabel *statusLabel;
- (id)initWithFrame:(CGRect)frame checkStatus:(BOOL)checkStatus;
@property (nonatomic, assign) BOOL checkStatus;

@end
