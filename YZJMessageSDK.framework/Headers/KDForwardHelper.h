//
//  KDFowardManager.h
//  kdweibo
//
//  Created by he15his on 2017/9/29.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XTForwardDataModel;
@class XTShareDataModel;
@class KDPhoto;

@interface KDForwardHelper : NSObject

#pragma mark - 转发UI相关
///显示创建群聊的转发的弹窗
+ (void)showCreatGroupForwardSendAlert:(NSArray *)selectPersons
                          forwardModel:(XTForwardDataModel *)forwardModel
                            shareModel:(XTShareDataModel *)shareModel
                          existedGroup:(GroupDataModel *)existedGroup
                        viewController:(UIViewController *)viewController
                         completeBlock:(void(^)(BOOL, GroupDataModel *, NSUInteger, NSString *))completeBlock;

///显示转发的弹窗
+ (void)showSendAlert:(GroupDataModel *)group
              persons:(NSArray *)persons
         forwardModel:(XTForwardDataModel *)forwardModel
           shareModel:(XTShareDataModel *)shareModel
       viewController:(UIViewController *)viewController
        completeBlock:(void(^)(NSUInteger, NSString *))completeBlock;
///获取转发分享的标题
+ (NSString *)getTitle:(XTForwardDataModel *)forwardData
             shareData:(XTShareDataModel *)shareData;
///获取转发分享的图片，如果不是图片分享返回nil
+ (KDPhoto *)getImage:(XTForwardDataModel *)forwardData
            shareData:(XTShareDataModel *)shareData;

#pragma mark - 转发方法
///转发消息事件，XTForwardDataModel和XTShareDataModel优先取XTForwardDataModel;group和persons优先取group
+ (void)forwardMessageWithText:(NSString *)additionText
                  frowardModel:(XTForwardDataModel *)forwardDM
                     shareData:(XTShareDataModel *)shareData
                         group:(GroupDataModel *)group
                       persons:(NSArray *)persons;

#pragma mark - JS转发处理

///轻应用转发事件
+ (void)showWithShareDataParameter:(NSDictionary *)parameter isShowExt:(BOOL)isShowExt;

//js桥调用转发事件这个
+ (BOOL)showWithJSParameter:(NSDictionary *)parameter
                          view:(UIView *)view
                     isShowExt:(BOOL)isShowExt
                   filishBlock:(void(^)(BOOL, BOOL, GroupDataModel *, NSArray *))filishBlock;
@end
