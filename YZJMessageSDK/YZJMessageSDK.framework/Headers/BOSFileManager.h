//
//  BOSFileManager.h
//  Public
//
//  Created by Gil on 11-10-13.
//  Edited by Gil on 2012.09.11
//  Copyright 2011年 Kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

//文件管理相关方法
@interface BOSFileManager : NSObject {
}

+ (NSString *)xuntongPath;
+ (BOOL)fileExistAtXuntongPath:(NSString *)fileName;

+ (NSString *)oldCachesPathWithOpenId:(NSString *)openId;
+ (NSString *)oldDBPathWithOpenId:(NSString *)openId;
+ (NSString *)dbPathWithOpenId:(NSString *)openId;
+ (NSString *)encryptDBPathWithOpenId:(NSString *)openId;

+ (NSString *)currentUserCachesPathWithOpenId:(NSString *)openId;
+ (NSString *)currentUserDocumentPathWithOpenId:(NSString *)openId;

/*
 @desc 判断应用的Documents文件夹下是否存在某个文件;
 @param fileName_; -- 文件名
 @return BOOL;
 */
+ (BOOL)fileExistAtDocumentsDirectory:(NSString *)fileName_;

/*
 @desc 获取Documents文件夹下某个文件的完整路径;
 @param fileName_; -- 文件名
 @return 文件的完整路径;
 */
+ (NSString *)fileFullPathAtDocumentsDirectory:(NSString *)fileName_;

+ (NSString *)fileFullPathAtCachesDirectory:(NSString *)fileName_;

/* Document目录下的yunzhijia目录path */
+ (NSString *)yunzhijiaPathAtDocuments;
/* Cache目录下的yunzhijia目录path */
+ (NSString *)yunzhijiaPathAtCaches;

/*
 @desc 文件写入，路径默认为Documents文件夹下的完整路径;
 @param fileData_; -- 需要写入的文件数据,可以为NSString、NSData
 @param fileName_; -- 保存的文件名
 @return 是否成功;
 */
+(BOOL)writeToFile:(id)fileData_ fileName:(NSString *)fileName_;

/*
 @desc 删除Documents文件夹下的某一文件;
 @param _fileName; -- 要删除的文件名
 @return 是否成功;
 */
+(BOOL)deleteFileAtDocumentsDirectory:(NSString *)_fileName;


/*
 @desc 将某目录设置为iCloud不同步;
 @param path; -- 目录名
 @return void;
 */
+ (void)addSkipBackupAttributeToPath:(NSString*)path;

/*
 yunzhijia目录从Library/Caches中迁移到Document下
 */
+ (BOOL)isNeedMigrateDB;

@end

