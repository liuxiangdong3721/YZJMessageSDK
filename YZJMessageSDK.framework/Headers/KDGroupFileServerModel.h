//
//  KDGroupFileServerModel.h
//  kdweibo
//
//  Created by 张培增 on 2017/2/24.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@interface KDGroupFileServerModel : KDJSONModel

@property (nonatomic, strong) NSString *fileId;
@property (nonatomic, strong) NSString *fileName;
@property (nonatomic, strong) NSString *fileExt;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *messageId;
@property (nonatomic, strong) NSString *folderId;
@property (nonatomic, strong) NSNumber *createTime;
@property (nonatomic, strong) NSNumber *length;
@property (nonatomic, assign) BOOL isDir;

@end
