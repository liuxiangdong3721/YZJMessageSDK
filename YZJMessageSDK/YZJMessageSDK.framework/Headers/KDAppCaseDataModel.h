//
//  KDAppCaseDataModel.h
//  kdweibo
//
//  Created by 张培增 on 15/12/28.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import "BOSResultDataModel.h"

@interface KDAppCaseDataModel : BOSResultDataModel

/**
 desc:NSString         //描述
 detailView:NSString   //网页地址
 icon:NSString         //图标
 industry:NSString     //行业
 title:NSString        //标题
 */
@property (nonatomic, copy) NSString *desc;         //描述
@property (nonatomic, copy) NSString *detailView;   //网页地址
@property (nonatomic, copy) NSString *icon;         //图标
@property (nonatomic, copy) NSString *industry;     //行业
@property (nonatomic, copy) NSString *title;        //标题

@end
