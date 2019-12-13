//
//  KDNoFileDefaultView.h
//  kdweibo
//
//  Created by 张培增 on 2016/11/18.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^KDNoFileDefaultViewBtnClickBlock)(void);

@interface KDNoFileDefaultView : UIView

@property (nonatomic, copy) KDNoFileDefaultViewBtnClickBlock btnClickBlock;

- (instancetype)initWithFrame:(CGRect)frame text:(NSString *)text hasButton:(BOOL)hasButton;

@end
