//
//  KDUserDefaultsKeys.h
//  kdweibo
//
//  Created by DarrenZheng on 15/1/16.
//  Copyright (c) 2015年 www.kingdee.com. All rights reserved.
//

#ifndef kdweibo_KDUserDefaultsKeys_h
#define kdweibo_KDUserDefaultsKeys_h

/**
 Warining: For Swift Support, Use ‘static NSString* const _Nonnull’
 */

// 标记H5引导只出现一次flag 金蝶圈
static const NSString* _Nonnull kMarkH5GuideOnceFlagKingdee = @"kMarkH5GuideOnceFlagKingdee";
// 标记H5引导只出现一次flag 非金蝶
static const NSString* _Nonnull kMarkH5GuideOnceFlag = @"kMarkH5GuideOnceFlag";

// 消息支持换行
static NSString* const _Nonnull kSupportNewLine = @"kSupportNewLine";

// Timeline广告栏数据 (KDModalTimelineAdvert)
#define kModalTimelineAdvert @"kModalTimelineAdvert"

// Timeline可信设备横幅
#define kTimelineTrustDeviceBanner @"kTimelineTrustDeviceBanner"

// 系统相册最近一张照片，用来判断是否有照片更新
#define kMostRecentPhoto @"kMostRecentPhoto"

// 聊天加号面板加号上的红点
#define kChatPlusMenuRedFlag @"kChatPlusMenuRedFlag"

// 聊天加号面板里面加号上的红点
#define kChatPlusItemMenuRedFlag @"kChatPlusItemMenuRedFlag"

// 无痕蒙层
#define kChatNotraceMask @"kChatNotraceMask"

//订阅消息是否全量获取过的标识
#define kAllPubicAcccountsFetch @"kAllPubicAcccountsFetch"

// 通讯录广告
#define kContactAdFlag @"kContactAdFlag"

// 通讯录core spotLight更新
#define kContactCoreSpotLightUpdate @"kContactCoreSpotLightUpdate"

//我界面红点
#define kMeViewTabbarClick @"kMeViewTabbarClick"

//我界面第一次红包tip
#define kMeViewTabbarFirstAward @"kMeViewTabbarFirstAward"

//我界面小云福利点击
#define kMeViewRecommendClick @"kMeViewRecommendClick"

//我界面（设置界面）内来电智能识别红点
#define kd_callIdentify_hide_red_dot @"kd_callIdentify_hide_red_dot"

//来电智能识别人员号码更新日期
#define kd_latestCallInfoSaveDate @"kd_latestCallInfoSaveDate"
//来电智能识别失败重试次数
#define kd_callIdentify_retryCount @"kd_callIdentify_retryCount"


//个人设置页面生日AlterTipView
#define kPersonalSettingBirthdayTipView @"kPersonalSettingBirthdayTipView"

//个人界面 ,个人设置红点引导
#define kPersonalSettingGuideClick @"kPersonalSettingGuideClick"

// ----------------【touchID】----------------
#define kSetTouchID [NSString stringWithFormat:@"%@_kSetTouchID",[BOSConfig sharedConfig].user.userId]
#define kTouchIDDomainState [NSString stringWithFormat:@"%@_kTouchIDDomainState",[BOSConfig sharedConfig].user.userId]


// ----------------【faceID】----------------
#define kSetFaceID [NSString stringWithFormat:@"%@_kSetFaceID",[BOSConfig sharedConfig].user.userId]

//消息撤回提示标志
#define kChatWithdrawFlag @"kChatWithdrawFlag"

//管理员指南界面红点
#define kAdminGuideClick @"kAdminGuideClick"

//新手指南界面红点
#define kNewUserGuideClick @"kNewUserGuideClick"

//个人详情界面 管理红点
#define kPersonalManageGuideClick @"kPersonalManageGuideClick"

//工作汇报
#define KWorkGroupFlag @"KWorkGroupFlag"

// 写作业
#define KHomeWorkFlag @"KHomeWorkFlag"

// 视频
#define KChatPlusMenuNewFlagVideo @"KChatPlusMenuNewFlagVideo"

//聊天加号面板多人会话new 图标 审批
#define KChatPlusMenuNewFlagapproval @"KChatPlusMenuNewFlagapproval"

#define KChatPlusMenuNewFreecall @"KChatPlusMenuNewFreecall"
#define KChatPlusMenuNewRedPacket @"KChatPlusMenuNewRedPacket"

// 截图上传要求每天提示一次，该标志记录最后显示的日期
#define kScreenshotLastViewDate @"kScreenshotLastViewDate"

// mark timeline入口的呼吸灯
#define kMarkTimelineGuide @"kMarkTimelineGuide"

// mark 代办入口的呼吸灯
#define kMarkTodoGuide @"kMarkTodoGuide"

// mark 标记过，比如双击过，或者进入标记列表有新数据
static NSString * _Nonnull kMarkUsed = @"kMarkUsed";
// ----------------【蒙层】----------------
// 应用蒙层
#define kApplicationMaskView @"kApplicationMaskView"

//人数少于7人时，提示用户邀请同事的蒙层
#define kInviteMaskView @"kInviteMaskView"

//已经点击了添加同事的广告
#define kAddColleagueView @"kAddColleagueView"

//-----------------【应用】---------------

//应用列表是否已经获取
#define kAppListDidRequest @"kAppListDidRequest"

//-----------------【聊天室】---------------

//是否提示用户外部群组发文件提示
#define KDShouldShowExtenalFileAlertView [NSString stringWithFormat:@"%@_ShouldShowExtenalFileAlertView",[BOSConfig sharedConfig].user.openId]

//是否用户第一次进入聊天界面
#define kDUserFirstTimeIntoChatRoom [NSString stringWithFormat:@"%@_userFirstTimeIntoChatRoom",[BOSConfig sharedConfig].user.openId]

//用户是否刚刚切换到该圈
#define kUserJustChangeToNetwork [NSString stringWithFormat:@"%@_userJustChangeToNetwork",[BOSConfig sharedConfig].user.eid]

////-----------------【组织架构】---------------
#define kShouldShowAlterDepartmentTipsView [NSString stringWithFormat:@"%@_%@_ShouldShowAlterDepartmentTipsView",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

#define kShouldShowMeViewTipsView [NSString stringWithFormat:@"%@_%@_kShouldShowMeViewTipsView",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

// 我的
#define kShouldShowMeViewMyTeamRedDot @"kShouldShowMeViewMyTeamRedDot"
#define kShouldShowMeViewNameRedDot @"kShouldShowMeViewNameRedDot"
#define kShouldShowMeViewCompanyRedDot @"kShouldShowMeViewCompanyRedDot"
#define kShouldShowMeViewDepartmentRedDot @"kShouldShowMeViewDepartmentRedDot"


#define kCompanyOpenedAppShouldSlideToTop @"kCompanyOpenedAppShouldSlideToTop"
#define kDepartmentSettingTipView  @"kDepartmentSettingTipView" // 部门设置 的tip view控制（按圈）
#define kNotFirstLoadShowAddPerson @"kNotFirstLoadShowAddPerson" // 部门下面的添加成员
#define kSettingBossOrManagerTipView @"kSettingBossOrManagerTipView" // 设置老板或者最高负责人
#define kNotFirstLoadShowAdmin  @"kNotFirstLoadShowAdmin" //组织架构 -> 设置 ->
#define kModifyDepartmentTipView @"kModifyDepartmentTipView" //修改部门
#define kLongPressOrderDepartTipView @"kLongPressOrderDepartTipView" //长按排序部门

#define kCompanysShouldShowChangeNameTips [NSString stringWithFormat:@"%@_%@_kCompanysShouldShowChangeNameTips",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

#define kNewCompanyFirstOpen @"kNewCompanyFirstOpen"

// 企业已开通应用tips
#define kShouldShowOpenedAppTipsView [NSString stringWithFormat:@"%@_%@_kShouldShowOpenedAppTipsView",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

// 推荐用用tips
#define kShouldShowRecommendAppTipsView [NSString stringWithFormat:@"%@_%@_kShouldShowRecommendAppTipsView",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

// 开通更多企业应用 呼吸灯
#define kEnterpriseMoreAppIndicator [NSString stringWithFormat:@"%@_%@_kEnterpriseMoreAppIndicator",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

// 为本企业开通应用 呼吸灯
#define kAppDetailIndicator [NSString stringWithFormat:@"%@_%@_kAppDetailIndicator",[BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.openId]

// 删除应用提示
#define kAppEditTips @"kAppEditTips"
/// 长按应用编辑提示
#define kAppLongPressEditTips @"kAppLongPressEditTips"

#pragma mark - 音视频会议
//语音会议主持人用户引导提示
#define kVoiceHostModeTipsCount @"kVoiceHostModeTipsCount"
//当前会议是否需要显示主持人用户引导提示
#define kCurrentVoiceHostModeTipsHide @"kCurrentVoiceHostModeTipsHide"
//当前会议是否显示非主持人的举手引导提示
#define kMutiVoiceVCShowNonCreateHandsUpTips @"kMutiVoiceVCShowNonCreateHandsUpTips"
//语音会议发起人的更多按钮引导提示
#define kMutiVoiceVCShowMoreTips @"kMutiVoiceVCShowMoreTips"
//语音会议会议纪要的引导提示
#define kMutiVoiceVCShowMeetingSummaryTips @"kMutiVoiceVCShowMeetingSummaryTips"
//直播手势引导
#define kLiveSwipeGestureTips @"kLiveSwipeGestureTips"
//视频会议首次进入引导
#define kVideoCallFirstScreenTips @"kVideoCallFirstScreenTips"
//视频会议首次进入人员列表
#define kVideoCallMembersTips @"kVideoCallMembersTips"
//我的文件引导页
#define kMyFileGuideShow @"kMyFileGuideShow"

#define kDefaultAppList [NSString stringWithFormat:@"%@_%@_DefaultAppList",[[KDURLPathManager sharedURLPathManager] urlTypeText], [BOSConfig sharedConfig].user.eid]

#define KDIsSignInGuide [NSString stringWithFormat:@"SignInGuide%@%@", [BOSConfig sharedConfig].user.eid, [BOSConfig sharedConfig].user.userId]

#endif

//投屏引导页第一次显示
#define kTouPingIntroPageShow @"kTouPingIntroPageShow"

//文件页面投屏
#define kTouPingTipShow @"kTouPingTipShow"
#define kTouPingHaveConnectTipShow @"kTouPingHaveConnectTipShow"

#define kV9ShowAppGuide                     @"kV9ShowAppGuide"
#define kCRMCustomerAppGuide                @"kcrmCustomerAppGuide"



///是否弹出过专心模式的弹框
#define kUDIsShowAttentionModel   @"isShowAttentionModel"

///是否弹出过通知没有权限的弹框
#define kUDHaveShowNotificationNoPermissionsAlert   @"haveShowNotificationNoPermissionsAlert"

#define kDepartGroupCreateTipKey @"kDepartGroupCreateTipKey"

#define kExtFriendLocalPermissionTipKey @"kExtFriendLocalPermissionTipKey"
#define kEnterAfterCreateTearmKey @"kEnterAfterCreateTearmKey"
#define kContactMobileTipKey @"kContactMobileTipKey"

// 当前用户的protocol version
#define KDCurrentUserProtocolVersion [NSString stringWithFormat:@"KDCurrentUserProtocolVersion_%@", [BOSConfig sharedConfig].user.wbUserId]

#define kFirstChangeBusyStatus   @"kFirstChangeBusyStatus"

#define kShowedFirstLoginSuplyInfo   [NSString stringWithFormat:@"kShowedFirstLoginSuplyInfo_%@", [BOSConfig sharedConfig].user.wbUserId]

//-------------[语音助手]-----------------------
#define kVoiceAssistantHasEnter @"kVoiceAssistantHasEnter"

#define kWorkbrenchXiaoyunTipKey @"workbrenchXiaoyunTipKey"

//--------------签到-----------------------------
#define kAdminFirstSigninKey @"kAdminFirstSigninKey"
