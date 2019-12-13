//
//  KDPromptView.h
//  kdweibo
//
//  Created by lichao_liu on 16/3/25.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KDPromptModel.h"
typedef void(^KDPromptBlock) (KDPromptModel *model);
@interface KDPromptView : UIView

- (instancetype)initWithFrame:(CGRect)frame dataArray:(NSArray *)dataArray block:(KDPromptBlock)block;

- (void)show;
- (void)dismiss;
@end
