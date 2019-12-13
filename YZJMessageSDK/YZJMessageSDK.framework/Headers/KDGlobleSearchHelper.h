//
//  KDGlobleSearchHelper.h
//  kdweibo
//
//  Created by he15his on 2017/12/1.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDSearchCommon.h"

typedef void(^KDGlobleSearchResponseBlock)(BOOL success, BOOL hasMore, NSString *error, NSArray *results, KDSearchType searchType, NSUInteger filishCount, BOOL isLastest, BOOL updateUI);
@class KDFileFilterModel;
@class KDSingleSearchHelper;
/*
 全局搜索方法
 作用：1.限制搜索频率，间隔0.25秒进行一次搜索，若是从空文本到有文本会直接开始搜索
      2.支持多种不同的搜索请求
      3.快速搜索时防止老数据乱，当有新的搜索请求来后，取消之前的搜索请求且之前的请求不再回调
 */
@interface KDGlobleSearchHelper : NSObject
///是否支持翻页，默认为YES
@property (nonatomic, assign) BOOL canLoadMore;

///搜索文字(搜索文字清空后需要设置为空，不然下次搜索开始会延时0.25秒)
@property (nonatomic, copy) NSString *keywords;
///搜人时是否去掉自己,默认是NO
@property (nonatomic, assign) BOOL filtrateSelf;
///搜人时是否搜索部门和职位
@property (nonatomic, assign) BOOL searchDepartment;
///是否搜索离职人员的单人群组
@property (nonatomic, assign) BOOL needDeparturePerson;
///文件筛选器
@property (nonatomic, strong) KDFileFilterModel *fileFilterModel;

/**
 *  搜索方法(每次搜索会清除掉之前的搜索)
 *
 *  @param text 搜索的文字
 *  @param searchType 支持传多个
 *  @param responseBlock:    success 请求是否成功
                             hasMore 是否有更多内容
                             error   错误提示文字
                             searchResult 搜索结果
                             searchType  搜索类型
                             filishCount 当前完成的是第几个请求，从1开始
 *  @param completeBlock: 所有搜索请求完成的回调
 */
- (void)searchText:(NSString *)text
        searchType:(KDSearchType)searchType
     responseBlock:(KDGlobleSearchResponseBlock)responseBlock;

/**
 *  搜索方法(每次搜索会清除掉之前的搜索)
 *
 *  @param text 搜索的文字
 *  @param oneSearchType 搜索类型，不支持多个
 *  @param responseBlock
 */
- (void)searchText:(NSString *)text
     oneSearchType:(KDSearchType)oneSearchType
              page:(NSUInteger)page
     responseBlock:(KDGlobleSearchResponseBlock)responseBlock;

///下一页
- (void)loadMoreWithType:(KDSearchType)searchType
            successBlock:(void(^)(BOOL, NSArray *))successBlock
            failureBlock:(void(^)(NSString *))failureBlock;

- (KDSingleSearchHelper *)singleSearchWithType:(KDSearchType)type create:(BOOL)create;

- (void)getLoadDataFromOtherSearch:(KDGlobleSearchHelper *)otherSearch contaiSearchTypes:(KDSearchType)searchTypes;

///停止搜索，并不会再回调
- (void)stopSearch;
@end
