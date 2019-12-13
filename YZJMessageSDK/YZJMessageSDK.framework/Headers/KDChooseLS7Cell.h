//
//  KDChooseLS7Cell.h
//  kdweibo
//
//  Created by Scan on 2018/5/24.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import "KDV10Cell.h"
#import "KDChooseProtocol.h"

@interface KDChooseLS7Cell : KDLS7Cell <KDChooseCellCheckProtocol>

@property (nonatomic, copy, nullable) void(^selectBlock)(void);

- (void)updateItemForNeedSelect:(BOOL)needSelectBtn;

@end
