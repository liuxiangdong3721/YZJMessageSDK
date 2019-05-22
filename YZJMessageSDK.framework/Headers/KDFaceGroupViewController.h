//
//  KDFaceGroupViewController.h
//  kdweibo
//
//  Created by kyle on 2017/5/22.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^KDFinishF2FGroupBlock)(GroupDataModel *groupModel);

@interface KDFaceGroupViewController : UIViewController

@property (nonatomic, strong) KDFinishF2FGroupBlock finishBlock;

@end
