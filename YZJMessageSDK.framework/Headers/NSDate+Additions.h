//
//  NSDate+Additions.h
//  kdweibo
//
//  Created by laijiandong
//

#import <Foundation/Foundation.h>
#define KD_DATE_ISO_8601_SHORT_NONE_FORMATTER                    @"yyyyMMdd"
#define KD_DATE_ISO_8601_SHORT_FORMATTER                         @"yyyy-MM-dd"
#define KD_DATE_ISO_8601_LONG_FORMATTER                          @"yyyy-MM-dd HH:mm"
#define KD_DATE_ISO_8601_LONG_NUMERIC_FORMATTER                  @"yyyy-MM-dd HH:mm:ss"    //默认日期时间格式
#define KD_DATE_ISO_8601_ACCURATE_FORMATTER                      @"yyyy-MM-dd HH:mm:ss.SSS"
#define KD_DATE_ISO_8601_FILENAME_FORMATTER                      @"yyyyMMddHHmmss"         // 用于生成文件名
#define KD_DATE_ISO_8601_DETAIL_FILENAME_FORMATTER               @"yyyyMMdd_HHmmssSSS"     //毫秒级的文件名
#define KD_DATE_ISO_8601_SLASH_FORMATTER                         @"YYYY/MM/dd HH:mm"       //斜杠显示格式

#define KD_DATE_ASC_TIME_FORMATTER                               @"EEE MMM d HH:mm:ss ZZZZ yyyy"
#define KD_DATE_ASC_TIME_MILLION_SECONDS_FORMATTER               @"EEE MMM d HH:mm:ss.SSS ZZZZ yyyy"

#define KD_DATE_WEEK_FORMAT                             @"EEE"
#define KD_DATE_MONTH_DAY_WEEK_FORMAT                   @"M-d EEE"
#define KD_DATE_YEAR_MONTH_DAY_WEEK_FORMAT              @"M-d EEE"
#define KD_DATE_TIME                                    @"HH:mm"
#define KD_MOUNTH_BRIFE_FORMAT                          @"MM-dd HH:mm"

@interface NSDate (KD_Additions)

// The parameter sameYear can be NULL
- (BOOL)isToday:(BOOL *)sameYear;
- (BOOL)isSameWeekAsDate:(NSDate *)aDate;
- (BOOL)isSameDayAsDate:(NSDate *)aDate;

- (int)year;
- (int)month;
- (int)day;


/**
 将NSDate对象转换为字符串

 @param formater 日期时间格式字符串
 @return 转换后的NSString字符串
 */
- (NSString *)formatWithFormatter:(NSString *)formater;

/**
  将NSDate对象转换为字符串

 @param dateStyle 日期显示风格
 @param timeStyle 时间显示风格
 @return 转换后的NSString字符串
 */
- (NSString *)formatWithDateMode:(NSDateFormatterStyle)dateStyle timeMode:(NSDateFormatterStyle)timeStyle;

+ (NSString *)formatMonthOrDaySince1970:(NSTimeInterval)time;
+ (NSString *)formatMonthOrDaySince1970WithDate:(NSDate *)date;
+ (NSString *)formatDayAndWeekSince1970:(NSTimeInterval)time;


+ (NSDate *)parseDateUsingASCTimeFormatter:(NSString *)source hasMillionSeconds:(BOOL)hasMillionSeconds ;
+ (NSDate *)parseDateWithSource:(NSString *)source formatter:(NSString *)formatter;

- (NSString *)formatRelativeTime;
- (NSString *)ASCTimeString;
//+ (NSDate *)today;


@end

//@interface NSDateFormatter(KD_Additions)
///**
// 默认格式的 NSDateFormatter
//
// @return NSDateFormatter *
// */
//+ (NSDateFormatter *)kd_default;
//
///**
// 获取线程中缓存NSDateFormatter（线程安全）
// @param formatString 日期格式字符串 默认为"YYYY-MM-dd HH:mm:ss"
// @return NSDateFormatter对象
// */
//+ (NSDateFormatter *)kd_cachedDateFormatterWithFormatString:(NSString *)formatString;
//
//
///**
// 获取线程中缓存NSDateFormatter（线程安全）
// @param formatString 日期格式字符串 默认为"YYYY-MM-dd HH:mm:ss"
// @param locale 时区字符串 默认为  "zh_CN"
// @return NSDateFormatter 对象
// */
//+ (NSDateFormatter *)kd_cachedDateFormatterWithFormatString:(NSString *)formatString withLocaleIdentifier:(NSString *)locale;
//
//@end
//
//@interface NSCalendar(KD_Additions)
//
///**
// 获取的NSCalendar对象，默认为NSCalendarIdentifierGregorian
//
// @return NSCalendar对象
// */
//+ (NSCalendar *)kd_default;
//+ (NSCalendar *)kd_current;
//@end

