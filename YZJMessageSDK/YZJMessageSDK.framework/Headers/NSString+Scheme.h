//
//  NSString+Schema.h
//  kdweibo
//
//  Created by shen kuikui on 14-6-6.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, KDSchemeHostType) {
	KDSchemeHostType_NONE = 0,  //字符串为空
	KDSchemeHostType_NOTURI = 1,//非uri
	KDSchemeHostType_Unknow = 2,//不可识别的url
	KDSchemeHostType_HTTP = 3,
	KDSchemeHostType_HTTPS = 4,
    
    //外部跳转协议
    KDSchemeHostType_Start,             //启动
    KDSchemeHostType_Share,             //分享

    //内部、外部跳转协议
    KDSchemeHostType_Chat,              //跳转到群组
    KDSchemeHostType_Profile,           //人员详情

    //内部跳转协议
	KDSchemeHostType_Local,             //设备的本地能力
	KDSchemeHostType_Todo,              //任务详情
	KDSchemeHostType_Todonew,           //新建任务
	KDSchemeHostType_Todolist,          //任务列表
	KDSchemeHostType_PersonalSetting,   //个人设置
	KDSchemeHostType_Signin,            //签到点设置成功
	KDSchemeHostType_Invite,

    
    KDSchemeHostType_FilePrevew, //文件预览
    KDSchemeHostType_EnterpriseAuth, //企业认证
    KDSchemeHostType_OrgList, //组织架构
    KDSchemeHostType_Appdetail, //应用详情
    KDSchemeHostType_Appcategory,    //应用分类
    KDSchemeHostType_LightApp,    //轻应用
    KDSchemeHostType_AppBrand,    //应用品牌
    KDSchemeHostType_FreeCall,    //免费电话
    KDSchemeHostType_Createteam,     //创建团队
    KDSchemeHostType_PhotoApp,          //照片    add by kyle
    KDSchemeHostType_TakePhotoApp,      //拍照
    KDSchemeHostType_VideoApp,          //小视频
    KDSchemeHostType_MyFileAPP,         //文件
    KDSchemeHostType_EnterPriseDisk,    //企业云盘
    KDSchemeHostType_AtApp,             //提及
    KDSchemeHostType_LocationApp,       //签到

    KDSchemeHostType_SmsNotifyApp,      //短信通知
    KDSchemeHostType_TracelessApp,       //无痕消息
    KDSchemeHostType_NoTracePhotoApp,          //无痕照片
    KDSchemeHostType_NoTraceTakePhotoApp,      //无痕拍照
    KDSchemeHostType_NoTracelessApp,       //退出无痕消息
    
    KDSchemeHostType_WidgetToChat,        // 从Widget跳转到Chat
    
    KDSchemeHostType_LiveApp,            //直播会议
    KDSchemeHostType_Live,               //直播会议
    KDSchemeHostType_LiveReservation,    //直播会议
    KDSchemeHostType_LiveCreate,         //创建直播会议
    
    KDSchemeHostType_CallMeetingApp,     //视频会议+语音会议

    KDSchemeHostType_VoiceMeeting,       //在当前会话发起语音会议
    KDSchemeHostType_CreateVoiceMeeting, //发起语音会议
    KDSchemeHostType_VoiceMeetingApp,    //语音会议
    KDSchemeHostType_VoiceMeetingShare,  //语音会议分享
    
    KDSchemeHostType_VideoMeeting,       //视频会议
    KDSchemeHostType_CreateVideoMeeting, //视频会议

    KDSchemeHostType_WorkTable,          // 工作台
    KDSchemeHostType_recognizeScan,      // 扫一扫结合页面
    
    KDSchemeHostType_SendEvent,          // 发送事件消息
    KDSchemeHostType_PinnedGroup,        // 置顶群组
    KDSchemeHostType_Sharelocation,      // 位置分享
    
    KDSchemeHostType_search,             //跳转到全局搜索
    KDSchemeHostType_tel,                //拨打本地电话
    KDSchemeHostType_createschedule,                //新建日程

    KDSchemeHostType_voiceAssistant,                //语音助手
    KDSchemeHostType_groupAdminAudit,                    //群组邀请详情
};

//跳转到部落的Schema
extern NSString *const KDBuluoSchemaPathInbox;
extern NSString *const KDBuluoSchemaPathProfile;
extern NSString *const KDBuluoSchemaPathShare;
extern NSString *const KDBuluoSchemaPathStart;

@interface NSString (Scheme)

/**
 *  内部功能跳转协议解析
 *  if type = KDSchemeHostType_NONE, return nil
 *  if type = KDSchemeHostType_NOTURI or KDSchemeHostType_Unknow, return NSString
 *  if type = KDSchemeHostType_HTTP or KDSchemeHostType_HTTPS, return NSString
 *  if type = other, return NSDictionary
 */
- (id)internalSchemeInfoWithType:(out KDSchemeHostType *)type;

/**
 *  外部功能跳转协议解析，比如第三方APP跳转
 *  if type = KDSchemeHostType_NONE, return nil
 *  if type = KDSchemeHostType_NOTURI or KDSchemeHostType_Unknow, return NSString
 *  if type = KDSchemeHostType_HTTP or KDSchemeHostType_HTTPS, return NSString
 *  if type = other, return NSDictionary
 */
- (id)externalSchemeInfoWithType:(out KDSchemeHostType *)type;

//给链接后面累加上参数
- (NSString *)addParams:(NSString *)params;

/**
*  金山WPS登录
*
*  @return url scheme
*/
+ (NSURL *)urlSchemeForWPS;

@end
