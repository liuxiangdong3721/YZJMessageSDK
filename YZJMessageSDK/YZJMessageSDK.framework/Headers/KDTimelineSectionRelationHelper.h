//
//  KDTimelineSectionRelationHelper.h
//  kdweibo
//
//  Created by Darren Zheng on 2017/10/25.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class KDMsgassistClient, KDExtPeopleMayKnownHelper, KDTimelineSectionRelationModel;
@interface KDTimelineSectionRelationHelper : NSObject
@property (nonatomic, assign) BOOL isNotDefault;//是否非默认工作圈
@property (nonatomic, strong) KDMsgassistClient *relationClient;
@property (nonatomic, strong) KDMsgassistClient *msgassistClient;
@property (nonatomic, strong) KDExtPeopleMayKnownHelper *peopleMayKnownHelper;
- (instancetype)initWithSectionRelationModel: (KDTimelineSectionRelationModel *)sectionRelationModel;
- (void)onViewDidLoad;
- (void)relationMessageList:(NSNotification *)notification;
- (void)getRelationList;
- (void)timelineChangeWork;
- (BOOL)onSelectRelationGroup:(GroupDataModel *)groupDM;
@end
