//
//  ContactUtils.h
//  ContactsLite
//
//  Created by Gil on 12-11-14.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BOSSetting.h"
#import "BOSFileManager.h"

#define kRecorderDirectoryName @"speechs"
#define kFileDirectoryName @"files"

extern NSDateFormatter *fullDateFormatter;
extern NSDateFormatter *shortDateFormatter;
extern NSDateFormatter *lastDateFormatter;

@class GroupDataModel;
@interface ContactUtils : NSObject

+ (NSString *)oldRecordPath;
+ (NSString *)oldFilePath;

+ (NSString *)recordPath;
+ (NSString *)recordFilePath;
+ (NSString *)recordTempFilePath;
+ (NSString *)recordFilePathWithGroupId:(NSString *)groupId;

+ (NSString *)fileFilePath;
+ (NSString *)fileFilePathWithFileId:(NSString *)fileId;
+ (NSString *)fileFilePathWithDownloadURL:(NSString *)downloadURL;
+ (NSString *)fileTempFilePath;

+(NSString *)uuid;

+(NSData *)XOR80:(NSData *)sourceData;




/*
  format methods
 */
+ (NSString *)currentDateString;
+ (NSString *)currentServerDateString;

+ (BOOL)isSameYearWithDate:(NSDate*)fromDate andDate:(NSDate*)toDate;
+ (NSInteger)daysBetweenDate:(NSDate*)fromDateTime andDate:(NSDate*)toDateTime;

+ (NSDate *)dateFromString:(NSString *)string;
+ (NSTimeInterval)timeIntervalFromString:(NSString *)string;

+ (NSString *)timelineDisplayStringFromDate:(NSDate *)date;
+ (NSString *)timelineDisplayStringFromTimeInterval:(NSTimeInterval)timeInterval;
+ (NSString *)timelineDisplayStringFromString:(NSString *)string;

+ (NSString *)msgDisplayStringFromString:(NSString *)string;

+ (NSString *)qrDisplayStringFromDate:(NSDate *)date;

@end
