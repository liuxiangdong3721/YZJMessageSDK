//
//  XTExtComparator.h
//  XT
//
//  Created by kingdee eas on 13-11-4.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XTFileUtils : NSObject

+ (BOOL)canOpenFile:(NSString *)ext;

// 特殊的文件类型
+ (BOOL)isSpecialExt:(NSString *)ext;

// 仅能使用WPS打开的文件类型
+ (BOOL)isUseWPSOpenExt:(NSString *)ext;

// 文件后缀判断
+ (BOOL)isFolderExt:(NSString *)ext;
+ (BOOL)isPhotoExt:(NSString *)ext;
+ (BOOL)isStaticPhotoExt:(NSString *)ext;
+ (BOOL)isGifExt:(NSString *)ext;
+ (BOOL)isDocExt:(NSString *)ext;
+ (BOOL)isWordExt:(NSString *)ext;
+ (BOOL)isExcelExt:(NSString *)ext;
+ (BOOL)isPPTExt:(NSString *)ext;
+ (BOOL)isPDFExt:(NSString *)ext;
+ (BOOL)isZipExt:(NSString *)ext;
+ (BOOL)isMusicExt:(NSString *)ext;
+ (BOOL)isVideoExt:(NSString *)ext;
+ (BOOL)isTxtExt:(NSString *)ext;
+ (BOOL)isHTMLExt:(NSString *)ext;

// 文件共享类型
+ (BOOL)isSharePlayFileExt:(NSString *)ext;

// 获取文件图标
+ (NSString *)getFileIconWithExt:(NSString *)ext;
+ (NSString *)getEncryptFileIconWithExt:(NSString *)ext encryed:(BOOL)encryed;

// 文件大小
+ (NSString *)fileSize:(NSString *)size;

@end
