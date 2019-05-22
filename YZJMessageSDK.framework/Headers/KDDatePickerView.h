//
//  KDMessageRemoteSettingDatePickerView.h
//  kdweibo
//
//  Created by liwenbo on 15/12/2.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^KDDatePickerViewCompleteSetupBlock)(NSDate *aDate);
typedef void(^KDDatePickerViewCancelSetupBlock)(NSDate *aDate);

typedef NS_ENUM(NSUInteger, KDDatePickerType) {
//    KDBirthDayType,
    KDDatePickerTypeHireDay,
    KDDatePickerTypePositiveDay,
    KDDatePickerTypeOther
};

@interface KDDatePickerView : UIView


@property (nonatomic, strong) UIDatePicker *datePicker;
@property (nonatomic, copy) KDDatePickerViewCompleteSetupBlock completeSetup;
@property (nonatomic, copy) KDDatePickerViewCancelSetupBlock cancelSetup;
@property (nonatomic, assign) KDDatePickerType type;

- (void)setTitle:(NSString *)title;

@end
