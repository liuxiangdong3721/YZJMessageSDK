//
//  KDCommentEditeViewController.h
//  kdweibo
//
//  Created by 孔博 on 15/12/15.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDRemarkModel.h"

@interface KDCommentEditeViewController : UIViewController
@property (strong, nonatomic) NSMutableArray *personDetails;
@property (strong, nonatomic) NSString *personId;
@property (strong, nonatomic) KDRemarkModel *remarkModel;
@end
