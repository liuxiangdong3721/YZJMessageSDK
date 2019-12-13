//
//  KDGroupFolderListModel.h
//  kdweibo
//
//  Created by 张培增 on 2017/3/3.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@protocol KDGroupFileServerModel;

@interface KDGroupFolderListModel : KDJSONModel

@property (nonatomic, strong) NSString *fileId;             // 文件夹Id
@property (nonatomic, strong) NSString *fileName;           // 文件夹name
@property (nonatomic, strong) NSArray <KDGroupFileServerModel> *content;

@end
