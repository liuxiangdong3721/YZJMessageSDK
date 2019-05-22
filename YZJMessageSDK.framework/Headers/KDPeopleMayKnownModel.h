//
//  KDPeopleMayKnownModel.h
//  kdweibo
//
//  Created by sevli on 16/10/14.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDPeopleMayKnownMsgModel : BOSBaseDataModel

@property (nonatomic, copy) NSString *msgId; /** <#brif mark#> */
@property (nonatomic, copy) NSString *msg; /** <#brif mark#> */
@property (nonatomic, copy) NSString *toUserId; /** <#brif mark#> */
@property (nonatomic, copy) NSString *fromUserId; /** <#brif mark#> */
@property (nonatomic, copy) NSString *creatTime; /** <#brif mark#> */
@property (nonatomic, assign) BOOL read; /** <#brif mark#> */

- (id)initWithDictionary:(NSDictionary *)dict;

- (BOOL)isSelfSendMsg;

@end

@interface KDPeopleMayKnownModel : BOSBaseDataModel

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *contactName;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, copy) NSString *photoUrl;
@property (nonatomic, copy) NSString *companyName;

@property (nonatomic, copy) NSString *department;
@property (nonatomic, copy) NSString *jobTitle;

@property (nonatomic, assign) NSInteger status;//0：默认未添加 ，按钮显示添加 ,1：已申请添加，显示待确认,2：对方申请添加，显示接受 4：对方已拒绝，显示已拒绝 6：对方已接受，显示已添加
@property (nonatomic, assign) BOOL isAuth;      // 企业认证
@property (nonatomic, copy) NSString *gender; // “MALE” 性别 值为MALE,FEMALE,SECRECY

@property (nonatomic, strong) KDPeopleMayKnownMsgModel *lastMsgModel;

@property (nonatomic, assign, readonly) BOOL isApplied;   // 待确认

@property (nonatomic, copy) NSString *extId;//: 邀请者userId_ext,
@property (nonatomic, copy) NSString *invitedExtId; //:被邀请者 userId_ext

- (id)initWithDictionary:(NSDictionary *)dict;

- (NSURL *)personHQPhotoUrl;

@end
