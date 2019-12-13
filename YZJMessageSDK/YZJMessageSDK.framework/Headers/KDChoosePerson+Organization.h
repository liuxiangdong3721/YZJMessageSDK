//
//  KDChoosePerson+Organization.h
//  kdweibo
//
//  Created by Scan on 2017/12/7.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (Organization)

+ (void)orgAddNewMemberPersons:(UIViewController *)viewController complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

+ (void)orgTransferTeamManager:(UIViewController *)viewController complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

+ (void)orgDepartmentAddManager:(UIViewController *)viewController selectedManagers:(NSArray<PersonSimpleDataModel *>*)manager complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

+ (void)orgEditOrgAddPersons:(UIViewController *)viewController title:(NSString*)title selecteds:(NSArray<PersonSimpleDataModel *>*)persons staticArray:(NSArray<NSNumber *>*)staticArray complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

+ (void)orgSecretOrgAddPersons:(UIViewController *)viewController selecteds:(NSArray<PersonSimpleDataModel *>*)persons complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

+ (void)orgSuperiorAssign:(UIViewController *)viewController filterPersons:(NSArray<NSString *>*)personIds blackPersons:(NSArray<NSString *>*)blackPersonIds  complete:(void(^)(NSArray<PersonSimpleDataModel *>* persons))complete;

@end
