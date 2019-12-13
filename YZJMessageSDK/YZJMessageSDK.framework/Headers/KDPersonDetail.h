//
//  KDPersonDetail.h
//  kdweibo
//
//  Created by Gil on 15/3/16.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KDPersonDetailProtocol.h"

extern NSString *kPersonDetailTeam;
extern NSString *kPersonDetailContact;
extern NSString *kPersonComment;
extern NSString *kPersonDetailCompany;
extern NSString *kPersonDetailOther;
extern NSString *kPersonDetailFreeCall;
extern NSString *kPersonDetailParent;
extern NSString *kPersonDetailAssignParent;
extern NSString *kPersonDetailMedal;
extern NSString *kPersonCrmOwnerCell;
extern NSString *kPersonExtFriendQRCell;

@interface KDPersonDetail : NSObject
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) NSString *title;
//KDContactInfo、KDPersonCompanyInfo，KDPersonParentInfo
@property (nonatomic, strong) NSArray *rows;

@property (nonatomic, strong) NSArray *rowHeightArr;

//是否折叠，默认为YES
@property (nonatomic, assign, getter = isFold) BOOL fold;

- (id)initWithTitle:(NSString *)title
               rows:(NSArray *)rows
         identifier:(NSString *)identifier;

@end

typedef enum : NSUInteger {
    KDPersonCompanyInfoCompany,
    KDPersonCompanyInfoDepartment,
    KDPersonCompanyInfoJob,
    KDPersonCompanyInfoRole,
} KDPersonCompanyInfoType;

@interface KDPersonCompanyInfo : NSObject
@property (nonatomic, assign) KDPersonCompanyInfoType type;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *fullContent;
@property (nonatomic, strong) id extra;//orgId or orgUserType
@property (nonatomic, assign) int isOrgHeader; // //1表示部门负责人，其他表示不是部门负责人
@property (nonatomic, assign) int isPartJob;//1表示兼职
- (id)initWithType:(KDPersonCompanyInfoType)type
              name:(NSString *)name
           content:(NSString *)content
             extra:(id)extra
       isOrgHeader:(int)isOrgHeader
         isPartJob:(int)isPartJob;

@end

@interface KDPersonMedalInfo : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSMutableArray *medalArray;
@property (nonatomic, assign) NSInteger medalCount;

- (id)initWithName:(NSString *)name medalArray:(NSMutableArray *)medalArray medalCount:(NSInteger)medalCount;

@end

@interface KDPersonDetailParent : NSObject

@property (nonatomic, strong) NSMutableArray *parentInfoDate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) NSArray *rowHeightArr;
@property (nonatomic, assign) BOOL isExpanded; //false

- (id)initWithName:(NSString *)title parentInfoDate:(NSMutableArray *)parentInfoDate;

@end

@interface KDPersonDetail (UITableViewCell)

- (UITableViewCell<KDPersonDetailProtocol> *)tableview:(UITableView *)tableView identifier:(NSString *)identifier;

@end




