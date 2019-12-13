//
//  KDSearchHelper.h
//  kdweibo
//
//  Created by sevli on 15/11/26.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KDFileModel.h"
#import "KDSearchCommon.h"
#import "RecordDataModel.h"

@class KDSearchTextModel;
@class KDSearchContactsRequest;
@class KDSearchSpaceMemberRequest;
@class KDSearchExtPersonsRequest;
@class KDSearchAppListRequest;
@class KDSearchFileV2Request;
@class KDSearchYunFileRequest;
@class KDSearchMessageListRequest;
@class KDSearchGroupRequest;

typedef enum : NSUInteger {
    KDSearchTextChinese,
    KDSearchTextNumber,
    KDSearchTextPinyinNumber,
    KDSearchTextOther
} KDSearchTextType;

typedef void(^KDSearchContactsBlock)(BOOL success, BOOL hasMore, NSString *error, NSArray *contacts);
typedef void(^KDSearchExtPersonsBlock)(BOOL success, BOOL hasMore, NSString *error, NSArray *extPersons);
typedef void(^KDSearchResultBlock)(BOOL success, BOOL hasMore, NSString *error, NSArray *searchResult);


@interface KDSearchHelper : NSObject

#pragma mark - 工具方法

+ (NSString *)highlightWithSearchString:(NSString *)searchString ContentString:(NSString *)contentString HighlightString:(NSString *)highlightString;

///搜索文字的类型
+ (KDSearchTextType)calcSearchType:(NSString*)word;
///统计的搜索source
+ (NSString *)searchSource:(KDSearchOpenType)openType;

#pragma mark - 搜索统计事件

///统计搜索联系人
+ (void)analysisSearchContactWithText:(NSString *)text;

#pragma mark - 搜索跳转事件

///跳转到联系人界面
+ (void)toContactWithPerson:(PersonSimpleDataModel *)person
                        ext:(BOOL)ext
                   openType:(KDSearchOpenType)openType
                  indexPath:(NSIndexPath *)indexPath
               inController:(UIViewController *)controllor
                isSearchAll:(BOOL)isSearchAll;
///跳转到群组
+ (void)toGroupWithGroupId:(NSString *)groupId
                  isPublic:(BOOL)isPublic
                  openType:(KDSearchOpenType)openType
                 indexPath:(NSIndexPath *)indexPath
              inController:(UIViewController *)controllor
               isSearchAll:(BOOL)isSearchAll;
///跳转到文件详情
+ (void)toFileDetailWithFileModel:(MessageFileDataModel *)fileModel
                         openType:(KDSearchOpenType)openType
                        indexPath:(NSIndexPath *)indexPath
                     inController:(UIViewController *)controllor
                      isSearchAll:(BOOL)isSearchAll
                         analysis:(BOOL)analysis;

///跳转到文件详情
+ (void)toYunFileDetailWithFileModel:(KDFileModel *)fileModel
                         openType:(KDSearchOpenType)openType
                        indexPath:(NSIndexPath *)indexPath
                     inController:(UIViewController *)controllor
                      isSearchAll:(BOOL)isSearchAll;
/**
 *  跳转到消息详情
 *
 *  @param directChat 如果为YES，不会到二级页，直接跳到聊天框
 */
+ (void)toMessageDetailWithTextModel:(KDSearchTextModel *)textModel
                          directChat:(BOOL)directChat
                             keyWord:(NSString *)keyWord
                            openType:(KDSearchOpenType)openType
                           indexPath:(NSIndexPath *)indexPath
                        inController:(UIViewController *)controllor
                         isSearchAll:(BOOL)isSearchAll;
///跳转到APP详情
+ (void)toAPPDetailWithAppModel:(KDAppDataModel *)appModel
                       openType:(KDSearchOpenType)openType
                      indexPath:(NSIndexPath *)indexPath
                   inController:(UIViewController *)controllor
                    isSearchAll:(BOOL)isSearchAll;


#pragma mark - 搜索请求事件

///搜索联系人
+ (KDSearchContactsRequest *)searchContactsWithWord:(NSString *)word begin:(NSInteger)begin count:(NSInteger)count filtrateSelf:(BOOL)filtrateSelf searchDepartment:(BOOL)searchDepartment completion:(KDSearchContactsBlock)block;
///搜索协同空间成员
+ (KDSearchSpaceMemberRequest *)searchSpaceMemberWithWord:(NSString *)word
                                                    begin:(NSInteger)begin
                                                    count:(NSInteger)count
                                             filtrateSelf:(BOOL)filtrateSelf
                                               completion:(KDSearchContactsBlock)block;
///搜索外部好友
+ (KDSearchExtPersonsRequest *)searchExtPersonsWithWord:(NSString *)word begin:(NSInteger)begin count:(NSInteger)count completion:(KDSearchExtPersonsBlock)block;
///搜索文件
+ (KDSearchFileV2Request *)searchFileListWithWord:(NSString *)word time:(int)time senderId:(NSString *)senderId fileType:(NSString *)fileType page:(NSInteger)page count:(NSInteger)count completion:(KDSearchResultBlock)block;
///搜索企业云盘文件
+ (KDSearchYunFileRequest *)searchYunFileListWithWord:(NSString *)word time:(int)time senderId:(NSString *)senderId fileType:(NSString *)fileType page:(NSInteger)page count:(NSInteger)count from:(NSString *)from completion:(KDSearchResultBlock)block;
///搜索消息
+ (KDSearchMessageListRequest *)searchMessageListWithWord:(NSString *)word page:(NSInteger)page count:(NSInteger)count completion:(KDSearchResultBlock)block;
///搜索应用
+ (KDSearchAppListRequest *)searchAppListWithWord:(NSString *)word page:(NSInteger)page count:(NSInteger)count completion:(KDSearchResultBlock)block;
/**
 *  搜索群组
 *
 *  @param text 用于搜索群名
 *  @param contact 用于搜索包含群用户的群(只取前10个)
 *  @param bCreateExtenalGroup
 *  @param containDeparted 是否搜索已离职人员
 */
+ (NSArray *)searchGroupWithSearchText:(NSString *)text
                               contact:(NSArray *)contact
                   bCreateExtenalGroup:(BOOL)bCreateExtenalGroup
                       containDeparted:(BOOL)containDeparted;

/**
 *  搜索群组
 */
+ (KDSearchGroupRequest *)searchGroupWithWord:(NSString *)word
                                         page:(NSInteger)page
                                        count:(NSInteger)count
                          needDeparturePerson:(BOOL)needDeparturePerson
                                   completion:(KDSearchResultBlock)block;

#pragma mark - 搜索联系人的本地方法

/**
 * 通过名字或者号码同步搜索(需要搜索对应的务必传对应的property)
 * 名字是(全部匹配+拼音匹配+拼音首字母匹配)，phone大于1位开始匹配
 *
 *  @param persons PersonSimpleDataModel数组
 *  @param text 关键字
 */
+ (NSArray *)searchPersonWithPersons:(NSArray *)persons
                                text:(NSString *)text
                        nameProperty:(NSString *)nameProperty
                  fullPinyanProperty:(NSString *)fullPinyanProperty
                       phoneProperty:(NSString *)phoneProperty;

///PersonSimpleDataModel搜索
+ (NSArray *)searchPersonWithPersonSimpleDataModel:(NSArray *)persons
                                              text:(NSString *)text;

///KDABRecord搜索
+ (NSArray *)searchPersonWithKDABRecord:(NSArray *)persons
                                   text:(NSString *)text;

///PersonDataModel搜索
+ (NSArray *)searchPersonWithPersonDataModel:(NSArray *)persons
                                        text:(NSString *)text;
///群排序
+ (NSArray *)sortGroups:(NSArray *)groups;
@end
