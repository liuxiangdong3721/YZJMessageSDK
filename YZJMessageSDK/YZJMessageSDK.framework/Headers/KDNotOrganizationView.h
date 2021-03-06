//
//  KDNotOrganizationView.h
//  kdweibo
//
//  Created by AlanWong on 14-10-15.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

/**
 *  当没有管理员没有设置组织架构的时候，从通讯录点击组织架构进入应该显示的界面
 */
#import <UIKit/UIKit.h>
#import "BOSSetting.h"

typedef void (^HandleBlock)(void);

@interface KDNotOrganizationView : UIView

@property(nonatomic, strong)HandleBlock handleBlock;

-(id)initWithFrame:(CGRect)frame
             style:(ContactStyle)showType
           isAdmin:(BOOL)isAdmin
        isCustomer:(BOOL)isCustomer;

@end
