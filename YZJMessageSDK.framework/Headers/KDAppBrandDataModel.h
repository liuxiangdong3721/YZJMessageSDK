//
//  KDAppBrandDataModel.h
//  kdweibo
//
//  Created by 张培增 on 16/1/22.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "BOSResultDataModel.h"

@interface KDAppBrandDataModel : BOSResultDataModel

/**
 * brandId:NSString         //品牌Id
 * brandName:NSString       //品牌名称
 * bannerPath:NSString      //品牌banner路径
 * underlineType:Int        //点击banner是展示子品牌还是应用,0:子品牌;1:应用,品牌数据才有,子品牌数据没有
 * logoPath:NSString        //子品牌logo路径,品牌没有
 * note:NSString            //子品牌描述,品牌没有
 * seq:Int                  //排序
 */

@property (nonatomic, copy) NSString *brandId;
@property (nonatomic, copy) NSString *brandName;
@property (nonatomic, copy) NSString *bannerPath;
@property (nonatomic, copy) NSString *underlineType;
@property (nonatomic, copy) NSString *logoPath;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSString *seq;

@end
