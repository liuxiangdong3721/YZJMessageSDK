//
//  KDGroupFileAllListModel.h
//  kdweibo
//
//  Created by 张培增 on 2017/2/24.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//



@protocol KDGroupFileServerModel;

@interface KDGroupFileAllListModel : KDJSONModel

@property (nonatomic, strong) NSNumber *folderOffset;
@property (nonatomic, strong) NSNumber *fileOffset;
@property (nonatomic, strong) NSArray <KDGroupFileServerModel> *content;

@end
