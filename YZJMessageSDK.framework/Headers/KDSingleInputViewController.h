//
//  KDSingleInputViewController.h
//  kdweibo
//
//  Created by Jiandong Lai on 12-6-1.
//  Copyright (c) 2012年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDRemarkModel.h"

@class PersonDataModel;
typedef void (^KDSingleInputViewBlock)(NSString *);
typedef enum{
    EditName_type_Myname,
    EditName_type_OtherName,
    EditName_type_ExtRemarkName,
    EditName_type_ExtRemarkCompanyName,
    
    //增加一个修改身份证功能
    EditIdentityId_type,
    //增加一个修改用户名
    EditName_type_GroupPersonName,
    EditName_type_noRequest,
}EditName_type;


@interface KDSingleInputViewController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate> {
@private
    NSString *content_;
    UITextField *inputTextField_;
}

@property (nonatomic, copy) NSString *content;
@property (assign , nonatomic) EditName_type editType;
@property (nonatomic, copy) KDSingleInputViewBlock block;
@property (strong , nonatomic) PersonDataModel *person;
@property (strong, nonatomic) KDRemarkModel *remark;
@end
