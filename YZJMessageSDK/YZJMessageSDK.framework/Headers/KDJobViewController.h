//
//  KDJobViewController.h
//  kdweibo
//
//  Created by KongBo on 15/9/6.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^setJobTitleResultBlock)(NSString *newJobTitle, BOOL success);
typedef enum{
    EditJob_Type_MyJob,
    EditJob_Type_OtherJob,
    EditJob_Type_PartTimeJob,
    EditJob_Type_ShowRoleInfos,
}EditJob_Type;
@interface KDJobViewController : UIViewController
@property (assign , nonatomic) EditJob_Type editType;
@property (strong , nonatomic) PersonDataModel *person;

@property (strong , nonatomic) NSArray *roleInfos; //editType == EditJob_Type_ShowRoleInfos

- (void)setJobTitle:(NSString *)jobTitle getResultBlock:(setJobTitleResultBlock)resultBlock;
@end
