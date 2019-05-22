//
//  KDSectionModel+PersonSection.h
//  kdweibo
//
//  Created by Scan on 2017/11/15.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import "KDSectionModel.h"

#import "KDChoosePersonConfig.h"

@interface KDSectionModel (PersonSection)

+ (NSArray <KDSectionModel *>*)sectionPersons:(NSArray<PersonSimpleDataModel *> *)persons;

/// 根据a b 方案 和 选人范围来组织人员
+ (NSArray <KDSectionModel *>*)makePersonSectionWithConfig:(KDChoosePersonConfig *)config;

/// 根据选人范围
+ (NSArray <KDSectionModel *>*)makeSelectRangeSectionWithConfig:(KDChoosePersonConfig *)config;

/// a 方案
+ (NSArray <KDSectionModel *>*)makeContactAllSectionWithConfig:(KDChoosePersonConfig *)config;

/// b 方案
+ (KDSectionModel *)makeRecentSectionWithConfig:(KDChoosePersonConfig *)config;

/// 外部好友
+ (NSArray <KDSectionModel *>*)makeExternalFriendsSectionWithConfig:(KDChoosePersonConfig *)config;

/// 未分配的人员
+ (NSArray <KDSectionModel *>*)makeUnallotPeronssSection:(NSArray<PersonSimpleDataModel *>*)person config:(KDChoosePersonConfig *)config;

/// 从群组选人
+ (NSArray <KDSectionModel *>*)makePeronsInGroupSectionWithConfig:(KDChoosePersonConfig *)config;

///最近聊天
+ (NSArray<KDSectionModel *> *)makeRecentChatSectionWithConfig:(KDChoosePersonConfig *)config;

///at人
+ (NSArray<KDSectionModel *> *)makeAtSectionWithConfig:(KDChoosePersonConfig *)config atPrefencePeronIds:(NSArray <NSString *>*)personIds;

@end
