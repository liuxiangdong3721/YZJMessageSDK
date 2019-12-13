//
//  XTChatViewController+UpdateData.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/2/27.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "XTChatViewController.h"
#import "BubbleDataInternal.h"
@interface XTChatViewController (DataTransform)
- (void)updateData;
- (BubbleDataInternal *)assembleBubbleDataWithRecord:(RecordDataModel *)record lastRecord:(RecordDataModel *)lastRecord;
//- (void)updateInMemoryBubbleData:(BubbleDataInternal *)bubbleData atIndex:(int)index; // 更新并刷新一个数据（目前高度更新在用）
@end
