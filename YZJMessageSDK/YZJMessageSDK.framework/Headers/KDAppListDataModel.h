//
//  KDAppListDataModel.h
//  kdweibo
//
//  Created by AlanWong on 14-9-24.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDAppDataModel.h"
#import "BOSBaseDataModel.h"

@interface KDAppListDataModel : BOSBaseDataModel

@property(nonatomic,assign)NSInteger total;
@property(nonatomic,assign)BOOL end;
@property(nonatomic,strong)NSMutableArray * list;  //包含KDAppDataModel类型的数组
/// 开发商名称
@property (nonatomic, strong) NSString *developers;
/// 企业简介
@property (nonatomic, strong) NSString *brief;
/// 企业业务
@property (nonatomic, strong) NSString *func;
/// 企业logo
@property (nonatomic, strong) NSString *devLogo;
/// 企业是否认证
@property (nonatomic, assign) BOOL isAuth;

/**
 *  total:int,//总记录数
 perPageSize:int,//每页显示的条数
 pageNo:int//分页号，当前页
 */
@property (nonatomic, assign) int perPageSize; //每页显示的条数

@property (nonatomic, assign) int pageNo; //当前页


- (id)initWithDictionary:(NSDictionary *)dict ;

@end
