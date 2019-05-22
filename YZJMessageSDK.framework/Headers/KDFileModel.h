//
//  KDFileModel.h
//  kdweibo
//
//  Created by 张培增 on 2016/11/10.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSDate+Additions.h"
#import "ContactUtils.h"

#import "RecordDataModel.h"
#import "NSDictionary+Additions.h"
@interface KDFileModel : NSObject

@property (nonatomic, strong, nullable) NSString      *fileId;        //自己服务器的文件ID
@property (nonatomic, strong, nullable) NSString      *tpFileId;      //第三方的文件／文件夹ID
@property (nonatomic, strong, nullable) NSString      *tpPFolderId;   //父文件夹ID,没有时为0
@property (nonatomic, strong, nullable) NSString      *tpPFolderName;   //父文件夹名
@property (nonatomic, strong, nullable) NSString      *tpPFolderOwnerName;     //父文件夹拥有者

@property (nonatomic, strong, nullable) NSString      *fileName;      //文件／文件夹名称
@property (nonatomic, strong, nullable) NSString      *fileExt;       //文件扩展名
@property (nonatomic, strong, nullable) NSString      *ownerId;       //文件宿主userId
@property (nonatomic, strong, nullable) NSString      *ownerName;     //文件宿主名称
@property (nonatomic, strong, nullable) NSString      *md5;           //文件md5值
@property (nonatomic, strong, nullable) NSString      *downloadUrl;   //文件下载地址
@property (nonatomic, strong, nullable) NSString      *url;   //文件源地址
@property (nonatomic, strong, nullable) NSString      *path;          //文件本地存储路径
@property (nonatomic, strong, nullable) NSString      *length;         //文件的大小

@property (nonatomic, assign) BOOL          isDir;          //是否文件夹：1为文件夹，0为文件
@property (nonatomic, assign) BOOL          only_read; //是否是只读文件
@property (nonatomic, strong, nullable) NSDate        *uploadTime;    //上传时间

@property (nonatomic, assign, readonly) BOOL isFinished;     //是否已经下载到了本地


@property (nonatomic, copy, nullable) NSAttributedString *highlightNameAttr;
@property (nonatomic, copy, nullable) NSAttributedString *highlightPersonNameAttr;

- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict;
- (nullable id)initWithYunSearchDictionary:(NSDictionary *_Nonnull)dict;

- (nullable NSDictionary *)dictionaryFromFileModel;
- (nullable MessageFileDataModel *)messageFileFromFileModel;

//下载在本地的文件名
- (nullable NSString *)localFileName;
- (nullable NSString *)localDownloadPath;

@end

@interface DocumentFileModel : KDJSONModel

@property (nonatomic, strong, nullable) NSString *ownerName;
@property (nonatomic, strong, nullable) NSString *ownerId;
@property (nonatomic, strong, nullable) NSString *networkId;
@property (nonatomic, strong, nullable) NSString *contentType;
@property (nonatomic, strong, nullable) NSString *type;
@property (nonatomic, strong, nullable) NSString *fileId;
@property (nonatomic, strong, nullable) NSString *tpFileId;//第三方文件Id
@property (nonatomic, strong, nullable) NSString *md5;//文件md5值
@property (nonatomic, strong, nullable) NSString *pkId;
@property (nonatomic, strong, nullable) NSString *userId;
@property (nonatomic, assign) NSUInteger length;
@property (nonatomic, assign) BOOL isDeleted;
@property (nonatomic, strong, nullable) NSString *fileName;
@property (nonatomic, strong, nullable) NSString *fileExt;
@property (nonatomic, strong, nullable) NSDate *time;

@property (nonatomic, assign) int fromType;  //0：我的下载，我的收藏，最近浏览使用  1：我上传的

- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict;

- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict formType:(int)type;

- (nullable NSDictionary *)dictionaryFromFileModel;
@end
