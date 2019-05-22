//
//  UINavigationController+Chat.h
//  kdweibo
//
//  Created by Gil on 16/5/17.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XTShareDataModel,GroupDataModel;
@interface UINavigationController (Chat)

- (void)setupTimelineTab;
- (void)setupWorkbenchTab;

- (void)pushToChatWithGroup:(GroupDataModel *)group
                isPopToRoot:(BOOL)isPopToRoot;

- (void)pushToChatWithGroup:(GroupDataModel *)group
                      draft:(NSString *)draft
                      msgId:(NSString *)msgId
                isPopToRoot:(BOOL)isPopToRoo;

- (void)pushToChatWithPerson:(PersonSimpleDataModel *)person
                 isPopToRoot:(BOOL)isPopToRoot;

- (void)pushToChatWithPerson:(PersonSimpleDataModel *)person
                       draft:(NSString *)draft
                       msgId:(NSString *)msgId
                 isPopToRoot:(BOOL)isPopToRoot;

- (void)pushToPublicGroupList:(NSString *)publicId;

- (void)pushToTodo;

@end
