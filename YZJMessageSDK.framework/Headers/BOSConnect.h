//
//  BOSConnect.h
//  Public
//
//  Created by Gil on 12-4-26.
//  Edited by Gil on 2012.09.12
//  Copyright (c) 2012年 Kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BOSResultDataModel.h"

//url的类型
typedef enum : NSUInteger {
	BOSConnectUrlTypeBasic,
	BOSConnectUrlTypeSNSAPI,
} BOSConnectUrlType;

//body类型
typedef NS_ENUM (NSUInteger, BOSConnectBodyType) {
	BOSConnectBodyWithJSON = 0, //默认使用JSON提交
	BOSConnectBodyWithParam = 1,
};

@interface BOSConnect : NSObject

//标示是否存在错误
@property (nonatomic, assign, readonly) BOOL hasError;

//错误号
@property (nonatomic, assign, readonly) int errorCode;
//错误提示字符串
@property (nonatomic, strong, readonly) NSString *errorMessage;

//default is BOSConnectUrlTypeBasic
@property (nonatomic, assign) BOSConnectUrlType urlType;

//default is BOSConnectBodyWithJSON
@property (nonatomic, assign) BOSConnectBodyType bodyType;

//是否需要签名，默认为
@property (nonatomic, assign) BOOL shouldSign;

/*
 *  @desc 初始化方法
 *  @param target; -- 响应对象
 *  @param action; -- 响应方法
 *  @return BOSConnect;
 */
- (id)initWithTarget:(id)target action:(SEL)action;

//取消当前请求
- (void)cancelRequest;

/*
 *  @desc http post
 *  @param urlStr; -- 访问的URL，短格式
 *  @param body; -- post的数据，不需要时则传入nil。类型可以为：NSDictionary（参数）、NSData（二进制）
 *  @param header; -- http头，不需要时则传入nil
 *  @param timeout; -- 超时时间，默认为30秒
 *  @return void;
 */
- (void)post:(NSString *)urlStr;
- (void)post:(NSString *)urlStr body:(id)body;
- (void)post:(NSString *)urlStr body:(id)body header:(NSDictionary *)header;
- (void)post:(NSString *)urlStr body:(id)body header:(NSDictionary *)header isResponseData:(BOOL)isResponseData;
- (void)post:(NSString *)urlStr body:(id)body header:(NSDictionary *)header timeout:(NSTimeInterval)seconds;

/*
 *  @desc get
 *  @param urlStr; -- 访问的URL，短格式
 *  @param params; -- get 参数，不需要时则传入nil
 *  @param header; -- http头，不需要时则传入nil
 *  @param timeout; -- 超时时间，默认为30秒
 *  @return void;
 */
- (void)get:(NSString *)urlStr;
- (void)get:(NSString *)urlStr params:(NSDictionary *)params;
- (void)get:(NSString *)urlStr params:(NSDictionary *)params header:(NSDictionary *)header;
- (void)get:(NSString *)urlStr params:(NSDictionary *)params header:(NSDictionary *)header timeout:(NSTimeInterval)seconds;

/*
 *  @desc 检查字符串是否为Null或者nil，如果是，返回空字符串，否则返回本身
 *  @param str; -- 要检查的字符串
 *  @return NSString;
 */
- (NSString *)checkNullOrNil:(NSString *)str;

@end
