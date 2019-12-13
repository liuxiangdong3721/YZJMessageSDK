//
//  KDABHelper.h
//  kdweibo
//
//  Created by shen kuikui on 13-10-24.
//  Copyright (c) 2013年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>

typedef NSUInteger ABHelperCheckExistResultType;

@interface KDABHelper : NSObject

//默认去申请权限
+ (BOOL)hasContactPermission;
+ (BOOL)hasContactPermission:(BOOL)needRequestAccess;

+ (NSArray *)allContactsHasOnlyMobilePhone;
+ (NSArray *)allContactsHasPhone;

+ (NSArray *)allPhoneCompleteContacts;

/**
 将电话号码添加到通讯录
 
 @param name 电话条目名称
 @param nums 需要添加的电话号码和别名，格式为@[@[@"phone1",@"label1"],@[@"phone2",@"label2"],...]
 @param photo 电话条目头像
 @return 添加是否成功
 */
+ (BOOL)addContactName:(NSString *)name phones:(NSArray *)nums headPhoto:(UIImage *)photo;

+ (ABAuthorizationStatus)addressBookStatus;

+ (NSString *)contactsUsageDescription;

@end
