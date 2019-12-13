//
//  XTOrgTreeDataModel.h
//  XT
//
//  Created by Gil on 13-7-17.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import "BOSBaseDataModel.h"

@interface XTOrgTreeDataModel : BOSBaseDataModel
@property (nonatomic, strong) NSString *orgId;
@property (nonatomic, strong) NSString *orgName;
@property (nonatomic, strong) NSString *personCount;
@property (nonatomic, strong) NSString *parentId;
@property (nonatomic, strong) NSArray *children;
@property (nonatomic, strong) NSArray *leaders;
@property (nonatomic, strong) NSArray *employees;
@property (nonatomic, strong) NSArray *unallotPersons;

@property (nonatomic, strong) NSArray *personIds;//leaders+employees
@property (nonatomic, strong) NSArray *parentsOrgList;

- (BOOL)isRootOrganization;
- (BOOL)isLeafOrganization;

@property (nonatomic, assign, getter=isAllSelected) BOOL allSelected;
@property (nonatomic, strong, nullable) NSArray <NSString *> *selectedChildDeptOrgId;

@end

@interface XTOrgChildrenDataModel : BOSBaseDataModel
@property (nonatomic, strong) NSString *orgId;
@property (nonatomic, strong) NSString *orgName;
@property (nonatomic, strong) NSString *personCount;
@end

@interface XTOrgPersonDataModel : BOSBaseDataModel
@property (nonatomic, strong) NSString *personId;
@property (nonatomic, strong) NSString *job;
@property (nonatomic, assign) int orgUserType;//1表示部门负责人，其他表示不是部门负责人
@property (nonatomic, assign) int isPartJob;//1表示是兼职，其他表示不是兼职
@end

@interface KDOrgTreeItemDataModel : BOSBaseDataModel

@property  NSString *orgId;
@property  NSString *orgName;

@end
