//
//  KDAppCategoryDataModel.h
//  kdweibo
//  应用中心分类模型
//  Created by sevli on 15/9/9.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import "BOSResultDataModel.h"

@interface KDAppCategoryDataModel : BOSResultDataModel

/**
 *  tagId:int,//标签分类id
    tagName:string,//标签分类名称
    tagLogoPath:string//标签分类logo地址
    note:string//备注
 */
@property (nonatomic, copy) NSString *tagId; //标签分类id   暂时有问题
@property (nonatomic, copy) NSString *tagName; //标签分类名称
@property (nonatomic, copy) NSString *tagLogoPath; //标签分类logo地址
@property (nonatomic, copy) NSString *note; //备注
/// 应用列表
@property (nonatomic, copy) NSArray *appsArray;  

// 跳转品牌列表相关参数
/// 跳转关键字，当为brand时跳转品牌列表
@property (nonatomic, copy) NSString *key;
/// 品牌ID
@property (nonatomic, copy) NSString *brandId;


@end
