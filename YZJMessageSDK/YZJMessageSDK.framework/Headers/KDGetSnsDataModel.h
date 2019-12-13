//
//  KDGetSnsDataModel.h
//  kdweibo
//
//  Created by Gil on 2016/12/30.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//



@protocol KDCollegeColumnConfsModel;

@interface KDGetSnsDataModel : KDJSONModel

@property (strong, nonatomic) NSNumber *activityCount;
@property (strong, nonatomic) NSNumber *vitalityCount;
@property (strong, nonatomic) NSNumber *medalCount;
@property (strong, nonatomic) NSNumber *redEnvelopeCount;
@property (assign, nonatomic) BOOL colleagueHasDynamic;
@property (strong, nonatomic) NSArray <KDCollegeColumnConfsModel> *collegeColumnConfs;

@end

@interface KDCollegeColumnConfsModel : KDJSONModel
@property (strong, nonatomic) NSString *icon;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *appId;
@property (strong, nonatomic) NSString *urlParam;
@end
