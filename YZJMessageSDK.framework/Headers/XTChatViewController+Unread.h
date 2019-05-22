//
//  XTChatViewController+unread.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/3/23.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "XTChatViewController.h"

@interface XTChatViewController (Unread)
- (void)clearUnreadByNewRecords:(NSMutableArray *_Nullable)newRecords completion:(void (^ _Nullable)(void))completion;
@end


//@interface XTChatViewController (GroupFile)
//
//@property (nonatomic, strong, nullable) NSString *groupId, *folderId;
//@property (nonatomic, assign) BOOL isAdmin;
//
////- (nullable NSString *)groupId;
////- (BOOL)isAdmin;
////- (nullable NSString *)folderId;
//
//@end
//
//
//@interface XTChatViewController (CellHeight)
//
//
//
////func cellHeight(dataInternal: BubbleDataInternal?, lastRecord: RecordDataModel?) -> CGFloat {
//
//@end



