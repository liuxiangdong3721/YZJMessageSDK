//
//  XTOpenSystemClient.h
//  EMPNativeContainer
//
//  Created by mark on 14-2-15.
//  Copyright (c) 2014年 Kingdee.com. All rights reserved.
//

#import "BOSConnect.h"

// 多盟广告用宏

#define OPENURL_GETCHANGEDADDRESS @"openaccess/contacts/getChangedAddress"
#define OPENURL_GETEXTPERSONS     @"openaccess/extcontact/getextpersonsbyupdatetime"

static NSInteger const kAccountActivatedCode = 2050;
static NSInteger const kAccountNotActivatedCode = 2051;
static NSInteger const kCompanyMutilCode = 2024;
static NSInteger const kCompanyNotFoundCode = 2025;
static NSString *const kCompanyMutilNotification = @"CompanyMutilNotification";
static NSString *const kCompanyNotFoundNotification = @"CompanyNotFoundNotification";
static NSString * const kCodeTypeMessage = @"0";
static NSString * const kCodeTypeVoice = @"1";

@interface XTOpenSystemClient : BOSConnect

@property (strong, nonatomic) NSString *eId;

+ (NSDictionary *)header;

// 多盟广告
// 程序启动调用
- (void)activeAdCodeWithTypeClk;
// 注册成功调用
- (void)activeAdCodeWithTypeAct:(NSString *)account;

//  判断用户是否已经设置用户名和头像
//- (void)hasUserInfo:(NSString *)userId;

// 56、修改用户名(用户姓名，不是帐号！)
- (void)changeUserName:(NSString *)userName;

// 57、修改头像
- (void)changePhoto:(NSData *)photoFile;

//保存我的个人联系人信息
- (void)saveMyContacts:(NSArray *)contacts;

// 58、消息广告位
- (void)getAdvert;

// 51、发送email激活用户
- (void)sendEmailToActiveUserWithEmail:(NSString *)strEmail;

// 52、发送email重置密码
- (void)sendEmailToResetPasswordWithEmail:(NSString *)strEmail;

//登录认证
-(void)loginWithCust3gNo:(NSString *)cust3gNo
                userName:(NSString *)userName
                password:(NSString *)password
             appClientId:(NSString *)appClientId
                deviceId:(NSString *)deviceId
              deviceType:(NSString *)deviceType
             accountType:(NSString *)accountType;


// 创建未激活用户激活
- (void)createUnVerifiedUserWithUsername:(NSString *)strUsername
                                password:(NSString *)strPassword;

// 验证验证码并激活用户
- (void)verifyCheckCodeAndActiveUserWithPhone:(NSString *)strPhone
                                    checkCode:(NSString *)strCheckCode;

// 新注册校验并激活
- (void)verifyCheckCodeAndActiveUserKeepSmsWith:(NSString *)strPhone
                                      checkCode:(NSString *)strCheckCode;
// 根据当前的token和tokensecret获取其它appkey对应的token、tokensecret(Oauth1.0a)
// 描述: 如客户端当前持有的token和tokensecret是do 的，现在需要share的token和tokensecret，那么可以用do的这两个东西+share的appkey获取share的token和tokensecret（反过来，可以通过share token+share tokensecret+do appkey---->do token+do token secret）。
- (void)getShareToken;

// 根据share传来的do token和do token secret登录。
- (void)authByDoToken:(NSString *)strDoToken
        doTokenSecret:(NSString *)strDoTokenSecret
            networkId:(NSString *)strNetworkId;
//获取验证码
//- (void)getCodeWithPhone:(NSString *)phone;

// 新·校验验证码
- (void)verifyCheckCodeOnlyWithPhone:(NSString *)strPhone
                           checkCode:(NSString *)strCheckCode;

// 新的修改密码接口
- (void)changePasswordWithPhone:(NSString *)strPhone
                      checkCode:(NSString *)strCheckCode
                       password:(NSString *)strPassword;

// 通过旧密码修改密码接口
- (void)changePasswordWithAccount:(NSString *)strAccount
                      oldPassword:(NSString *)strOldPassword
                      newPassword:(NSString *)strNewPassword;

//短信上行, 接受短信验证
- (void)smsGetCodeWithPhone:(NSString *)phone;
//短信上行, 校验验证码,轮询
- (void)smsValiCheckCodeWithPhone:(NSString *)phone token:(NSString *)token;


// 53、创建公司(如果有帐号将创建帐号并加入公司)
- (void)createCompanyWithCompanyName:(NSString *)companyname account:(NSString *)account name:(NSString *)name
                                info:(NSDictionary *)info
                             persons:(NSArray *)persons;

- (void)bindEmail:(NSString *)email secrect:(NSString *)pwd openId:(NSString *)openId;
- (void)fetchCodeWithPhone:(NSString *)phone openId:(NSString *)openId VoiceCode:(NSString *)voiceCode;
// 修改手机帐号
- (void)updatePhoneAccountWithOpenId:(NSString *)openId
                               phone:(NSString *)phone
                           checkCode:(NSString *)checkCode
                         isCheckBind:(NSString *)isCheckBind;
//不需要token的绑定手机号
- (void)bindPhoneWithoutToken:(NSString *)phone checkCode:(NSString *)checkCode openId:(NSString *)openId isCheckBind:(NSString *)isCheckBind;

//97 发送加外部好友申请
/***
 *优先处理extId，extId和phone必须存在一个，姓名选填
 * 没有手机的 接口走 sendinviteNoPhone
 */
//- (void)sendInviteWithPhones:(NSString *)phones
//                      extIds:(NSString *)extIds
//                     groupId:(NSString *)groudId
//                  inviteType:(NSString *)inviteType
//                    resource:(NSString *)resource;

/*
 *  直接添加外部好友不需要验证
 *
 */
//- (void)sendInviteWithoutValidationByPhones:(NSString *)phones
//                                     extIds:(NSString *)extIds
//                                    groupId:(NSString *)groudId
//                                 inviteType:(NSString *)inviteType
//                                   resource:(NSString *)resource;

//98 加外部好友 申请确认、拒绝
/***
 *process:String // “allow”同意, “reject” 拒绝,"block" 加入黑名单（不会再次收到该用户的加外部好友申请）
 */
- (void)processrequestWithInviteId:(NSString *)inviteid
                             process:(NSString *)process;

//101  查询加外部好友申请列表
/***
  *processstatus:String //init,allow,deny
 */
- (void)queryinvitedlistWithProcessStatus:(NSString *)processstatus;

//106 利用手机号码,创建未激活用户并返回userid
- (void)createunverifieduserextWithPhone:(NSString *)phone name:(NSString *)name regSourceType:(NSString *)sourceType;
- (void)createBatchUnverifieduserextWithArr:(NSArray *)modelList;

//107 根据手机号码获得图形验证码ID
- (void)getCodeIdWithUUID:(NSString *)uuid;

//108 校验图形验证码并发送短信
- (void)checkPictureCodeWithPhone:(NSString *)phone UUID:(NSString *)uuid CodeId:(NSString *)codeIdStr Code:(NSString *)codeStr VoiceCode:(NSString *)voiceCode;

//109 接受uuid
- (void)getUUIDWithUUID:(NSString *)uuid;

//110 获取验证码token
//uuidKey:String, //上一步的uuid设备号的md5加密
//phone:String, //手机号码
//keyUpdateTime:String //key的更新时间
- (void)getCodeTokenWithUUIDKey:(NSString *)uuidKey Phone:(NSString *)phone KeyUpdateTime:(NSString *)keyUpdateTime;

//111 校验验证码token并发送短信
- (void)checkCodeTokenAndSendMsgWithUUIDKey:(NSString *)uuidKey Phone:(NSString *)phone token:(NSString *)token;

// 111. (新) 发送验证码，并且注册未激活用户
- (void)sendMsgAndCreateUnactiveUserWithUUIDKey:(NSString *)uuidKey Phone:(NSString *)phone token:(NSString *)token;

//112 重复发送短信
//- (void)sendAgainWithPhone:(NSString *)phone Flag:(NSString *)flag Type:(NSString *)type UserId:(NSString *)userId VoiceCode:(NSString *)voiceCode;

//113设置性别
- (void)setGender:(NSString *)gender;

//114 添加人员
- (void)addPersonWithEId: (NSString *)eId orgId:(NSString *)orgId personList:(NSString *)personList;

//115工作圈参数设置
- (void)setEnterpriseParamWithAllowApplyJoin:(BOOL)allApplyJoin allowMemberInvite:(BOOL)allowMemberInvite allowMemberCount:(BOOL)allowMemberCount;

// 获取工作圈基本信息
- (void)getNetworkInfoMcMobile;

//120 根据手机号码判断云之家用户
- (void)getyzjusersbyphonesWithPhones:(NSString *)phones;


//127、判断一个人是否可以加外部好友
//- (void)canaddExFriendWithAccount:(NSString *)account;
//128 外部好友提醒注册短信
- (void)remindsmsWithExtContactId:(NSString *)exaccountId;

//132 修改工作圈名字
- (void)modifyCompanyInfoWithName:(NSString *)name eid:(NSString *)eid;
//133 获取工作圈信息
- (void)findNetworkInfoByEid:(NSString *)eid;
// 一键创建工作圈
- (void)createDefaultWorkCircleWithUserId:(NSString *)userId userName:(NSString *)userName;



// 获取企业规模
- (void)queryCompanySize;
// 获取企业一级类型
- (void)queryCompanyRootKind;
// 获取企业二级类型
- (void)queryCompanySubKindWithPid:(NSString *)pid;

/**
 *  创建团队 获取公司类型和行业列表
 */
- (void)getIndustryData;

#pragma mark - open auth

- (void)getPubAccTokenWithOpenToken:(NSString *)openToken
                           pubAccId:(NSString *)pubAccId
                           deviceId:(NSString *)deviceId
                             menuId:(NSString *)menuId
                             openId:(NSString *)openId;

- (void)getPersonByEid:(NSString *)eid
             andOpenId:(NSString *)openId
                 token:(NSString *)token;

//获取公司组织
- (void)getOrgByEid:(NSString *)eid;


// 人员挪部门
- (void)moveOrgWithEid:(NSString *)eid
                 nonce:(NSString *)nonce
              longName:(NSString *)longName
                openId:(NSString *)openId
                 orgId:(NSString *)orgId;



//获取应用地址
- (void)getAppConfig;


//部门群组 根据orgId获取组内成员信息
- (void)getPersonsByOrgId:(NSString *)orgId isALL:(BOOL)isALL;


//通知管理员
- (void)sendAdminMessageWithType:(NSString *)type;
//获取分享应用的未读数
- (void)getShareMsgCount;

//上传通讯录并获取推荐工作圈相关信息
- (void)uploadContactsForRecommendCompanyWithContacts:(NSString *)contacts showUnjoinAble:(BOOL)isAble;
//搜索工作圈
- (void)searchNetworks:(NSString *)keyword begin:(int)begin count:(int)count;

//云之讯双向回拨
- (void)cloudXunCallWithId:(NSString *)personId phone:(NSString *)phone recieveId:(NSString *)recieveId;
//根据orgId获取人员和组织信息
- (void)getOrgCasvirPersonsWithOrgId:(NSString *)orgId;
//获取组织树
- (void)getOrgThreeWithOrgId:(NSString *)orgId;
//新增加组织
- (void)addOrgWithOrgName:(NSString *)orgName OrgParentId:(NSString *)parentId adminUserId:(NSString *)adminUserId;
//删除组织
- (void)deleteOrgWithOrgId:(NSString *)orgId;
//修改组织名
- (void)changOrgNameWithOrgId:(NSString *)orgId orgName:(NSString *)orgName adminUserId:(NSString *)adminUserId;
//获取推荐列表
- (void)getJobTitles;
//设置部门
- (void)setJobTitleWithTitle:(NSString *)title;
//设置部门负责人
- (void)setHeaderWithOperateUserId:(NSString *)operateUserId userId:(NSString *)userId orgInfoId:(NSString *)orgInfoId;
//取消部门负责人
- (void)cancelHeaderWithOperateUserId:(NSString *)operateUserId userId:(NSString *)userId orgInfoId:(NSString *)orgInfoId;
//获取部门负责人
- (void)getHeaderByNetworkAndUserIdWithNetWorkId:(NSString *)networkId userId:(NSString *)userId;
//根据personIds获取人员信息
- (void)getPersonsCasvirByIds:(NSString *)ids;
//根据personId获取人员信息
//- (void)getPersonInfoById:(NSString *)personId;
//批量获取外部人员信息
- (void)getExtPersonsByExtIds:(NSString *)ids isSingleId:(BOOL)singleid;

//匹配、搜索后申请加入（NEW）
- (void)applyJoinNetworkWithUserId:(NSString *)userId netWorkId:(NSString *)netWorkId  type:(NSString *)sourceType msg:(NSString *)msg;

//用户提醒管理员处理申请加入公司
- (void)remindManagerWithUserId:(NSString *)userId netWorkId:(NSString *)netWorkId;

//用户撤销申请的接口
- (void)cancelApplayWithUserId:(NSString *)userId netWorkId:(NSString *)netWorkId;

- (void)getLocalRecContactWithUserId:(NSString *)userId netWorkId:(NSString *)netWorkId contacts:(NSString *)contacts;
- (void)getRecommendsWithUserId:(NSString *)userId netWorkId:(NSString *)netWorkId;

// 86、 第三方登陆
- (void)authByThirdTokenWithCode:(NSString *)strCode
                       thirdType:(NSString *)strThirdType
                           token:(NSString *)token
                     tokenSecret:(NSString *)tokenSecret
                       networkId:(NSString *)strNetworkId;
// 87、 账号绑定
- (void)bindSupportThirdAccountWithUserId:(NSString *)userId
                                  Account:(NSString *)account
                              accountType:(NSString *)accountType
                                  unionId:(NSString *)unionId
                             wechatOpenId:(NSString *)wechatOpenId
                              accessToken:(NSString *)accessToken
                                checkCode:(NSString *)strCheckCode;

- (void)getAdminEid;


//管理员修改成员名字
- (void)changeNameByManagerWithPersonId:(NSString *)personId name:(NSString *)name;
//管理员修改成员的性别
- (void)setGenderByManagerWithPersonId:(NSString *)personId gender:(NSString *)gender;
//管理员修改成员的部门
- (void)moveOrgByManagerWithPersonId:(NSString *)personId
                               orgId:(NSString *)orgId
                             dotoken:(NSString *)dotoken
                       dotokensecret:(NSString *)dotokensecret;
//管理员修改成员的职位
- (void)setJobTitleByManagerWithPersonId:(NSString *)personId jobTitle:(NSString *)jobTitle;
//管理员修改成员的手机号隐藏与否
- (void)hidePhoneByManagerWithPersonId:(NSString *)personId flag:(NSString *)flag;
//管理员删除成员
- (void)deletePersonByManagerWithPersonId:(NSString *)personId;
//查询部门调动状态
- (void)queryPersonChangeInfoWithPersonId:(NSString *)personId;

//可信设备获取、验证、删除
- (void)getTrustedDevice;
- (void)isTrustedDevice;
- (void)deleteTrustedDevice:(NSString *)deviceId;

//// 验证校验码并绑定手机号, 用以前的绑定手机号接口：openaccess/user/phonebind/verifyCodeAndBind 参数isCheckBind=1
//// 可信设备校验
//- (void)verifyCodeAndBind;


//获取企业认证情况 /openaccess/custauth/status
- (void)getEnterpriseAuthenticationStatus;

//提交企业认证
- (void)confirmEnterpriseAuthenticationInfoWithApplyer:(NSString *)applyer
                                        Identification:(NSString *)identification
                                               IdPicId:(NSString *)idPicId
                                           CompanyName:(NSString *)companyName
                                               Address:(NSString *)address
                                              Industry:(NSString *)industry
                                                  Size:(NSString *)size
                                          LicensePicId:(NSString *)licensePicId
                                             organCode:(NSString *)organCode
                                              instCode:(NSString *)instcode
                                         instCredPicId:(NSString *)instCredPicId
                                                   ltd:(NSString *)ltd;

//保存通讯录显示水印的参数
- (void)saveParamOfShowWaterMarkInContacts:(BOOL)param;
// 抢红包
- (void)doGrabRedPacketWithIsGrab:(int)isGrab
                          groupId:(NSString *)groupId
                            redId:(NSString *)redId;

// 记录截屏相关信息接口
- (void)recordScreenInfoWithFileId:(NSString *)fileId
                           groupId:(NSString *)groupId
                         groupNmae:(NSString *)groupName;

/// 轻应用截屏上传相关信息
- (void)recordScreenInfoWithAppId:(NSString *)appId
                          appName:(NSString *)appName
                         appTitle:(NSString *)appTitle;

//设置自动保存上传截屏
- (void)setScreenSaveWithStatus:(NSInteger)swithStatus;

//获取自动保存上传截屏开关状态
- (void)getScreenStatus;

- (void)checkUserName:(NSString *)userName
             password:(NSString *)password;

// 设置默认上级(选中/取消)
- (void)saveDefaultParentsWithDefaultParentId:(NSString *)personId
                                        ptype:(int)ptype;

// 添加指定上级
- (void)addAssignParentsWithAssignParentIds:(NSString *)ids personId:(NSString *)personId;

// 137、通过opentoken获取用户是否有部门调动
- (void)getMoveStatusWithPersonId:(NSString *)personId;

///获取子部门
- (void)getOrgByOrgID:(NSString *)orgId;

/// 通过orgId获取部门信息
- (void)getOrgInfoByOrgIDs:(NSString *)orgIDs;

// 个人设置页面设置生日
- (void)savePersonalBirthday:(NSString *)birthday isLunar:(BOOL)isLunar;

// 个人设置页面设置入职日期
- (void)savePersonalHireDay:(NSString *)hireDay;

// 个人设置页面设置身份证号
- (void)savePersonalIdentityId:(NSString *)identityId;

/**  设置兼职部门 personId:String // 员工的ID orgId: String //部门ID jobTitle：String // 职位名称 */
- (void)setParttimeJobPersonId:(NSString *)personId orgId:(NSString *)orgId jobTitle:(NSString *)jobTitle;

/** 我->外部好友 -> 微信邀请 */
- (void)customerBusinesspartnerEntry:(NSString *)personId;

/** 外部好友 -> 个人详情-> 微信邀请 */
- (void)extcontactGetSharewechaLink:(NSString *)personExtid;

/** 工作圈租借节点排序 */
- (void)orderTheOrgnizetion:(NSArray *)orgIds parentOrgId:(NSString *)orgId eid:(NSString *)eid;

/** 修改企业logo */
- (void)changeCompanyLogo:(NSString *)userId networkId:(NSString *)networkId logoId:(NSString *)logoId;
// 解散团队
- (void)disableNetworkByNetworkId:(NSString *)networkId;
// 退出团队
- (void)quitNetworkByNetworkId:(NSString *)networkId;
// 移交团队
- (void)handOverNetworkByNetworkId:(NSString *)networkId handPersonId:(NSString *)personId;
// 获取部门机密信息
- (void)getSecretInfoWithEid:(NSString *)eid orgId:(NSString *)orgId;
// 保存部门信息（包括机密信息）
- (void)saveSecretInfoWithEid:(NSString *)eid
                        orgId:(NSString *)orgId
                      orgName:(NSString *)orgName
                  adminUserId:(NSString *)adminUserId
                     hideType:(int)hideType
                   hidePerson:(NSString *)hidePerson
                     visiType:(int)visiType
                   visiPerson:(NSString *)visiPerson;

//- (void)searchKeyListWithKeywords:(NSString *)keywords begin:(NSString *)begin count:(NSString *)count;


// 新团队引导 团队人员详情
- (void)getExpPersonsByNetworkId:(NSString *)networkId;


// 获取个人勋章信息  wbUserId
- (void)getRecentMedal:(NSString *)userId;

// 判断是否是crm 用户
- (void)crmcommonnCrmUser:(NSString *)eid oid:(NSString *)oid;

- (void)extContactInviteByCard:(NSDictionary *)parma;

- (void)extcontactGetCrmType:(NSString *)eid;

- (void)transCustomerToUser:(NSString *)toPersonid toUserOid:(NSString *)toUserOid toUserid:(NSString *)toUserid customerId:(NSString *)customerId extData:(NSArray<NSDictionary *>*)extData;

- (void)updateExtUserExtContact:(NSDictionary *)parma;


// 校验手机号是否可用（非云之家帐号或有邮箱账号的手机号）
- (void)checkUpdatePhoneWithPhone:(NSString *)phone;


// 获取工作圈创建者名字
- (void)getCreatorNameById:(NSString *)creatorId;

// 名片扫描
- (void)getInfoByJpg:(NSDictionary *)param;

// 设置默认团队
- (void)setDefaultNetwork:(NSString *)eid;

// 获取个人（自己）二维码生成短链
- (void)generateshortLink:(NSString *)keyUrl;

// 增加外部好友标签
- (void)addExtTag:(NSString *)tagName;
// 设置外部好友标签
- (void)setExtTag:(NSArray *)tagArray andPersonId:(NSString *)personId;
// 获取外部好友默认标签
- (void)getDefaultExtTags;
// 修改标签下面的外部好友
- (void)editExtTagUserWithTagName:(NSString *)tagName addPersonIds:(NSArray *)addPersonIds delPersonIds:(NSArray *)delPersonIds;
// 外部好友标签改名
- (void)renameExtTagWithFrom:(NSString *)from to:(NSString *)to;
// 删除外部好友标签
- (void)deleteExtTag:(NSString *)tagName;
// 获取外部好友标签列表
- (void)getExtTags;

- (void)queryListByEid:(NSString *)eid subType:(NSString *)subType;         //群应用默认app
- (void)queryListByGid:(NSString *)eid groupId:(NSString *)groupId subType:(NSString *)subType groupType:(NSInteger)groupType groupRange:(NSInteger)groupRange;        //群组内部应用

@end
