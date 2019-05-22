//
//  KDSearchRecordInGroupViewController.h
//  kdweibo
//
//  Created by kyle on 16/7/19.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDSearchTextModel;

///聊天记录列表
@interface KDSearchRecordInGroupViewController : UIViewController

@property (nonatomic, strong) NSString *searchKeyWords;
@property (nonatomic, strong) KDSearchTextModel *textModel;
@property (nonatomic, assign) KDSearchOpenType searchFromType;
@property (nonatomic, assign) BOOL isSearchAll;
@end
