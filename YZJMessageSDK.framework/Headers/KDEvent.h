//
//  #import <KDLogin/KDEvent.h>
//  kdweibo_common
//
//  Created by Gil on 14-9-20.
//  Copyright (c) 2014年 kingdee. All rights reserved.
//

/*
 event:代表事件ID
 label:代表事件label的key，value则直接使用注释里的中文
 */

#pragma mark - 工作圈band
//切换团队点击次数、成功次数
static NSString *event_band_switch_open                          = @"band_switch_open";
static NSString *event_band_switch_ok                            = @"band_switch_ok";
/*
 创建工作圈打开次数
 创建类型：首个工作圈、其他工作圈
 */
static NSString *event_band_create_open                          = @"band_create_open";
static NSString *label_band_create_open_createType               = @"createType";
static NSString *label_band_create_open_createType_first         = @"首个工作圈";
static NSString *label_band_create_open_createType_other         = @"其他工作圈";
//创建工作圈成功次数
static NSString *event_band_create_ok                            = @"band_create_ok";

//查找我的工作圈
static NSString *event_band_find_my                              = @"band_find_my";
//申请加入
static NSString *event_band_find_join                            = @"band_find_join";
//取消申请
static NSString *event_band_find_cancel                          = @"band_find_cancel";
//再次发送申请
static NSString *event_band_find_rejoin                          = @"band_find_rejoin";
//我收到了邀请
static NSString *event_band_find_receivedInvite                  = @"band_find_receivedInvite";
//面对面加入工作圈
static NSString *event_band_find_facetoface                      = @"band_find_facetoface";
//找不到，创建工作圈
static NSString *event_band_find_create                          = @"band_find_create";
//获取默认工作圈
static NSString *event_get_default_networkId                     = @"get_default_networkId";

#pragma mark - 邀请invite
/*
 邀请功能打开次数
 1、邀请人身份：管理员、普通用户
 2、邀请状态：不需要审核、需要审核
 3、来源位置：加号、侧边栏、自动（第一次登录后自动弹出）
 4、邀请类型：手机号、通讯录、微信、链接、面对面
 */


/*
 链接邀请分享次数
 1、分享类型：QQ、微信、微博、短信
 */
static NSString *event_invite_link_share                         = @"invite_link_share";
static NSString *label_invite_link_share_inviteType              = @"inviteType";
static NSString *label_invite_link_share_inviteType_qq           = @"QQ";
static NSString *label_invite_link_share_inviteType_weixin       = @"微信";
static NSString *label_invite_link_share_inviteType_weibo        = @"微博";
static NSString *label_invite_link_share_inviteType_sms          = @"短信";
/*
 面对面邀请分享次数
 1、分享类型：QQ、微信、微博
 */
static NSString *event_invite_facebyface_share                   = @"invite_facebyface_share";
static NSString *label_invite_facebyface_share_inviteType        = @"inviteType";
static NSString *label_invite_facebyface_share_inviteType_qq     = @"QQ";
static NSString *label_invite_facebyface_share_inviteType_weixin = @"微信";
static NSString *label_invite_facebyface_share_inviteType_weibo  = @"微博";

#pragma mark - 意见反馈feedback
//意见反馈打开次数
static NSString *event_feedback_open                             = @"feedback_open";
//提交反馈次数
static NSString *event_feedback_submit                           = @"feedback_submit";

#pragma mark - 个人设置settings
/*
 个人设置页面打开次数
 打开方式：侧边栏、菜单(设置-个人设置)
 */
static NSString *event_settings_personal_open                    = @"settings_personal_open";
static NSString *label_settings_personal_open_source             = @"source";
static NSString *label_settings_personal_open_source_sidebar     = @"侧边栏";
static NSString *label_settings_personal_open_source_menu        = @"菜单";
//设置头像打开次数
static NSString *event_settings_personal_headpicture             = @"settings_personal_headpicture";
//用户名修改次数
static NSString *event_settings_personal_name                    = @"settings_personal_name";
//绑定邮箱帐号功能打开次数、成功次数
static NSString *event_settings_personal_email_open              = @"settings_personal_email_open";
static NSString *event_settings_personal_email_ok                = @"settings_personal_email_ok";
//修改部门打开次数、成功次数
static NSString *event_settings_personal_department_open         = @"settings_personal_department_open";
static NSString *event_settings_personal_department_ok           = @"settings_personal_department_ok";
/*
 手势密码设置次数
 设置状态：启用、禁用
 */
static NSString *event_settings_gesturepassword                  = @"settings_gesturepassword";
static NSString *label_settings_gesturepassword_status           = @"status";
static NSString *label_settings_gesturepassword_status_off       = @"禁用";
static NSString *label_settings_gesturepassword_status_on        = @"启用";
//清除缓存使用次数
static NSString *event_settings_wipecache                        = @"settings_wipecache";
//新版介绍打开次数
static NSString *event_settings_newversionintroduction_open      = @"settings_newversionintroduction_open";
//退出工作圈打开次数、成功次数
static NSString *event_settings_quitband_open                    = @"settings_quitband_open";
static NSString *event_settings_quitband_ok                      = @"settings_quitband_ok";
//关于打开次数
static NSString *event_settings_about_open                       = @"settings_about_open";
//检查新版本次数
static NSString *event_settings_about_checknewversion            = @"settings_about_checknewversion";
//退出登录次数
static NSString *event_settings_logout_ok                        = @"settings_logout_ok";

#pragma mark - 企业认证
static NSString *event_EnterpriseAuthentication_open             = @"EnterpriseAuthentication_open";//打开企业认证页面
static NSString *event_EnterpriseAuthentication_apply            = @"EnterpriseAuthentication_apply";//申请认证
static NSString *event_EnterpriseAuthentication_inform           = @"EnterpriseAuthentication_inform";//一般用户，通知管理员认证点击次数
static NSString *event_EnterpriseAuthentication_ID               = @"EnterpriseAuthentication_ID";//上传身份证照片次数
static NSString *event_EnterpriseAuthentication_nextstep         = @"EnterpriseAuthentication_nextstep";//第一个页面下一步的次
static NSString *event_EnterpriseAuthentication_licence          = @"EnterpriseAuthentication_licence";//点击上传营业执照
static NSString *event_EnterpriseAuthentication_complete         = @"EnterpriseAuthentication_complete";//点击提交
static NSString *event_EnterpriseAuthentication_agree            = @"EnterpriseAuthentication_agree";//点击阅读并同意认证公函的次数
static NSString *event_EnterpriseAuthentication_certification    = @"EnterpriseAuthentication_certification";//点击认证公函链接
static NSString *event_EnterpriseAuthentication_again            = @"EnterpriseAuthentication_again";//点击重新认证

#pragma mark - 推荐recommend
//推荐打开次数
static NSString *event_recommend_open                            = @"recommend_open";
//推荐有你按钮点击次数
static NSString *event_recommend_sendmessage                     = @"recommend_sendmessage";
//推荐人的姓名
static NSString *event_recommend_sendmessage_name                = @"recommend_sendmessage_name";
//推荐人的电话号码
static NSString *event_recommend_sendmessage_phone               = @"recommend_sendmessage_phone";
//推荐的途径
static NSString *event_recommend_thirdpart                       = @"recommend_thirdpart";
//第三方推荐的类型
static NSString *event_recommend_thirdpart_type                  = @"recommend_type";
//通过qq推荐
static NSString *event_recommend_thirdpart_type_qq               = @"recommend_type_qq";
//通过qq空间推荐
static NSString *event_recommend_thirdpart_type_qzone            = @"recommend_type_qzone";
//通过qzone推荐
static NSString *event_recommend_thirdpart_type_wechat           = @"recommend_type_wechat";
//通过微博推荐
static NSString *event_recommend_thirdpart_type_weibo            = @"recommend_type_weibo";
//通过短信推荐
static NSString *event_recommend_thirdpart_type_sms              = @"recommend_type_sms";
//通过朋友圈推荐
static NSString *event_recommend_thirdpart_type_moments          = @"recommend_type_moments";

#pragma mark - 页签bottombar
//消息页签点击次数
static NSString *event_bottombar_session                         = @"bottombar_session";
//应用页签点击次数
static NSString *event_bottombar_app                             = @"bottombar_app";
//我页签点击次数
static NSString *event_bottombar_me                              = @"bottombar_me";

#pragma mark - 加号shortcut
//加号点击次数
static NSString *event_shortcut_open                             = @"shortcut_open";
//加号发起群聊点击次数
static NSString *event_shortcut_new_chat                         = @"shortcut_new_chat";
//加号发起面对面建群
static NSString *event_shortcut_ftf_group                        = @"shortcut_ftf_group";
//加号发起添加外部好友
static NSString *event_shortcut_add_friend                       = @"shortcut_add_friend";
//加号发起扫一扫
static NSString *event_shortcut_scan                             = @"shortcut_scan";
//加号发起扫名片
static NSString *event_shortcut_scan_card                        = @"shortcut_scan_card";
//加号发起发送到电脑
static NSString *event_shortcut_file_transfer                    = @"shortcut_file_transfer";
static NSString *new_chat_confirm                                = @"new_chat_confirm";
static NSString *event_focusmodel                                = @"focusmodel";

/*
 会话添加人次
 添加方式：组织架构、我的部门、收藏、已有会话、最近联系人、搜索
 */
static NSString *event_session_adduser                           = @"session_adduser";
static NSString *label_session_adduser_type                      = @"type";
static NSString *label_session_adduser_type_organization         = @"组织架构";
static NSString *label_session_adduser_type_mydepartment         = @"我的部门";
static NSString *label_session_adduser_type_favorites            = @"收藏";
static NSString *label_session_adduser_type_existingsession      = @"已有会话";
static NSString *label_session_adduser_type_recently             = @"最近联系人";
static NSString *label_session_adduser_type_search               = @"搜索";
static NSString *label_session_adduser_type_list                 = @"列表选择";

//扫一扫打开次数
static NSString *event_scan_open                                 = @"scan_open";
static NSString *label_scan_open                                 = @"source";
static NSString *label_scan_open_shortcut                        = @"加号";
static NSString *label_scan_open_application                     = @"应用";
static NSString *label_scan_open_js                              = @"JS桥";

#pragma mark - 会话session
//会话打开次数
static NSString *event_session_open                              = @"session_open";
static NSString *label_session_open_type                         = @"type";
static NSString *label_session_open_type_single                  = @"单人消息";
static NSString *label_session_open_type_multi                   = @"多人消息";
static NSString *label_session_open_type_pubacc                  = @"公共号";
static NSString *event_session_open_todo                         = @"session_open_todo";
static NSString *event_session_open_select                       = @"session_open_select";

//会话+号Item 图片、拍照、文件、提及、短信通知、语音会议
static NSString *event_session_panel_item                        = @"session_panel_item";
static NSString *session_panel_item_type                         = @"type";

//会话添加人员次数、会话减少人员次数
static NSString *event_session_settings_adduser                  = @"session_settings_adduser";
static NSString *event_session_settings_deleteuser               = @"session_settings_deleteuser";
//消息发送次数
static NSString *event_msg_send                                  = @"msg_send";
static NSString *label_msg_send_messageType                      = @"msgType";
static NSString *label_msg_send_messageType_text                 = @"文本";
static NSString *label_msg_send_messageType_speech               = @"语音";
static NSString *label_msg_send_messageType_picture              = @"图片";
static NSString *label_msg_send_messageType_file                 = @"文件";
static NSString *label_msg_send_messageType_expression           = @"表情";
static NSString *label_msg_send_messageType_combine              = @"合并转发";

//删除消息次数
static NSString *event_msg_del                                   = @"msg_del";

// 添加到表情次数
static NSString *event_msg_addemoticon                           = @"event_msg_addemoticon";

//复制消息次数
static NSString *event_msg_copy                                  = @"msg_copy";
//转发次数
static NSString *event_msg_forward                               = @"msg_forward";
//分享到部落次数
static NSString *event_msg_sharetoweibo                          = @"msg_sharetoweibo";
//收藏
static NSString *event_msg_collect                               = @"msg_collect";
//重发成功次数
static NSString *event_msg_resend                                = @"msg_resend";
//撤回次数
static NSString *event_msg_withdraw                              = @"msg_withdraw";
//消息回复次数
static NSString *event_msg_reply                                 = @"event_msg_reply";
//复制消息次数
static NSString *event_msg_mutePlay                              = @"event_msg_mutePlay";
/*
 *  转任务打开次数
 *  来源：长按消息、关键字点击
 *
 */
static NSString *event_msg_totask                                = @"msg_totask";
static NSString *label_msg_totask_source                         = @"source";
static NSString *label_msg_totask_source_longpress               = @"长按消息";
static NSString *label_msg_totask_source_keyclick                = @"关键字点击";
//多人会话名称修改成功次数
static NSString *event_session_settings_namemodify_ok            = @"session_settings_namemodify_ok";
//新消息提醒设置次数
//设置状态：开、关
static NSString *event_session_settings_alert                    = @"session_settings_alert";
static NSString *label_session_settings_alert                    = @"status";
static NSString *label_session_settings_alert_on                 = @"开";
static NSString *label_session_settings_alert_off                = @"关";
//多人会话收藏次数
//设置状态：开、关
static NSString *event_session_settings_favorite                 = @"session_settings_favorite";
static NSString *label_session_settings_favorite                 = @"status";
static NSString *label_session_settings_favorite_on              = @"开";
static NSString *label_session_settings_favorite_off             = @"关";
//标记已读次数
static NSString *event_session_settings_markread                 = @"session_settings_markreads";
//清空聊天记录次数
static NSString *event_session_settings_clear                    = @"session_settings_clear";
//退出多人聊天次数
static NSString *event_session_settings_quit                     = @"session_settings_quit";
//消息过滤次数
static NSString *event_session_filter                            = @"session_filter";
static NSString *label_session_filter                            = @"filterType";
static NSString *label_session_filter_picture                    = @"图片";
static NSString *label_session_filter_file                       = @"文件";
static NSString *label_session_filter_search                     = @"搜索";

// @提及点击次数
static NSString *event_session_at_button_click                   = @"event_session_at_button_click";
static NSString *label_session_at_button_click                   = @"type";
static NSString *label_session_at_button_click_by_button         = @"点击@按钮进入选人";
static NSString *label_session_at_button_click_by_typing         = @"手动输入@进入选人";

static NSString *event_session_at_all                            = @"event_session_at_all";


// 重要消息点击次数
static NSString *event_session_important_message                 = @"event_session_important_message";

// 重要消息发送次数
static NSString *event_session_important_message_send            = @"event_session_important_message_send";

// 回复消息接口调用次数
static NSString *event_session_reply_message_send                = @"event_session_reply_message_send";

// 快捷发图片次数
static NSString *event_session_send_image_by_shortcut            = @"event_session_send_image_by_shortcut";

// 聊天页面+号面板点击次数
static NSString *event_session_chat_plus_menu_click              = @"event_session_chat_plus_menu_click";


// 语音识别的校正点击次数
static NSString *event_voice_voitransfer_correct                 = @"voitransfer_correct";
// 语音转文字成功率
static NSString *event_voice_voitransfer_successrate             = @"voitransfer_successrate";
// 语音转文字的转换速度
static NSString *event_voice_voitransfer_transspeed              = @"voitransfer_transspeed";

// 会话取消置顶
static NSString *event_session_top_cancel                        = @"session_top_cancel";

// 会话置顶
static NSString *event_session_top_set                           = @"session_top_set";

// 会话标为已读
static NSString *event_session_mark_read                         = @"session_mark_read";

// 选择原图
static NSString *event_image_original                            = @"image_original";

// 管理员删除用户的减号按钮次数
static NSString *event_session_manager_delete                    = @"session_manager_delete";
// 打开水印的次数
static NSString *event_session_manager_markopen                  = @"session_manager_markopen";
// 关闭水印的次数
static NSString *event_session_manager_markclose                 = @"session_manager_markclose";
// 打开仅管理员允许加入的次数
static NSString *event_session_manager_addusermarkopen           = @"event_session_manager_addusermarkopen";

// 打开群组禁言的次数
static NSString *event_session_manager_silencedopen              = @"event_session_manager_silencedopen";

// 打开允许群成员添加外部好友的次数
static NSString *event_session_manager_addextusermarkopen        = @"event_session_manager_addextusermarkopen";

// 关闭群组禁言的次数
static NSString *event_session_manager_silencedclose              = @"event_session_manager_silencedclose";

// 关闭仅管理员允许加入的次数
static NSString *event_session_manager_addusermarkclose          = @"event_session_manager_addusermarkclose";

// 关闭允许群成员添加外部好友的次数
static NSString *event_session_manager_addextusermarkclose          = @"event_session_manager_addextusermarkclose";

// 点击转让管理员次数
static NSString *event_session_manager_transfer                  = @"session_manager_transfer";
// 请先转让管理员。。。点击我知道了的次数
static NSString *event_session_manager_iknow                     = @"session_manager_iknow";


#pragma mark - 应用页签app

//点击签到按钮
static NSString *event_signin_clickbtn                           = @"signin_clickbtn";
//签到打开次数
static NSString *event_app_signin_open                           = @"app_signin_open";
//文档助手打开次数
static NSString *event_app_dochelper_open                        = @"app_dochelper_open";
//任务打开次数
static NSString *event_app_tasks_open                            = @"app_tasks_open";
//一呼百应打开次数
static NSString *event_app_mass_response_open                    = @"app_mass_response_open";
//添加应用次数
//来源：搜索、列表、推荐
static NSString *event_app_add                                   = @"app_add";
static NSString *label_event_app_add_source                      = @"source";
static NSString *label_event_app_add_source_search               = @"搜索";
static NSString *label_event_app_add_source_list                 = @"列表";
static NSString *label_event_app_add_source_recommend            = @"推荐";
static NSString *label_event_app_add_source_lightapp             = @"轻应用";

//打开应用中心
static NSString *event_app_plus_click                            = @"app_plus_click";

//所有应用打开次数
static NSString *event_app_open                                  = @"app_open";
static NSString *label_app_open_name                             = @"appName";

static NSString *event_app_open_report                           = @"app_open_report";//工作汇报
static NSString *event_app_open_task                             = @"app_open_task";//任务
static NSString *event_app_open_announcement                     = @"app_open_announcement";//公告
static NSString *event_app_open_approval                         = @"app_open_approval";//审批
static NSString *event_app_open_talkmeeting                      = @"app_open_talkmeeting";//语音会议

//推荐位应用点击次数
static NSString *event_app_recommend_open                        = @"app_recommend_open";

//品牌点击次数
static NSString *event_app_brand_open                            = @"pinpaiClick";

// 点击应用中心
static NSString *event_app_boss_app                              = @"boss_app";
static NSString *event_app_manager_app                           = @"manager_app";
static NSString *event_app_staff_app                             = @"staff_app";
// 首页文案分享微信
static NSString *event_app_firstpage_all_head                    = @"firstpage_all_head";
static NSString *event_app_firstpage_boss_head                   = @"firstpage_boss_head";
static NSString *event_app_firstpage_manager_head                = @"firstpage_manager_head";
static NSString *event_app_firstpage_staff_head                  = @"firstpage_staff_head";
static NSString *event_app_firstpage_all_share                   = @"firstpage_all_share";
static NSString *event_app_firstpage_boss_share                  = @"firstpage_boss_share";
static NSString *event_app_firstpage_manager_share               = @"firstpage_manager_share";
static NSString *event_app_firstpage_staff_share                 = @"firstpage_staff_share";
static NSString *event_app_firstpage_all_success                 = @"firstpage_all_success";
static NSString *event_app_firstpage_boss_success                = @"firstpage_boss_success";
static NSString *event_app_firstpage_manager_success             = @"firstpage_manager_success";
static NSString *event_app_firstpage_staff_success               = @"firstpage_staff_success";
static NSString *event_app_firstpage_all_fail                    = @"firstpage_all_fail";
static NSString *event_app_firstpage_boss_fail                   = @"firstpage_boss_fail";
static NSString *event_app_firstpage_manager_fail                = @"firstpage_manager_fail";
static NSString *event_app_firstpage_staff_fail                  = @"firstpage_staff_fail";

#pragma mark - 通讯录页签contact


/*
 搜索次数（离开搜索界面时统计）
 1.搜索类型：中文、拼音、手机号
 */
static NSString *event_contact_search_type                       = @"contact_search_type";
static NSString *label_contact_search_type_type                  = @"type";
static NSString *label_contact_search_type_type_chinese          = @"中文";
static NSString *label_contact_search_type_type_pinyin           = @"拼音";
static NSString *label_contact_search_type_type_number           = @"手机号";

//组织架构打开次数
static NSString *event_contact_org_open                          = @"contact_org_open";
static NSString *label_contact_org_source                        = @"source";
static NSString *label_contact_org_source_contact                = @"通讯录";
static NSString *label_contact_org_source_sessionorg             = @"发起会话之组织架构";
static NSString *label_contact_org_source_sessionmyorg           = @"发起会话之我的部门";
static NSString *label_contact_org_source_personInfo             = @"用户详情";
//通讯录公共号打开次数
static NSString *event_contact_pubacc_open                       = @"contact_pubacc_open";
//公共号信息刷新次数
static NSString *event_contact_pubacc_refresh                    = @"contact_pubacc_refresh";
//收藏联系人打开次数
static NSString *event_contact_favorites_open                    = @"contact_favorites_open";
//最近联系人点击次数
static NSString *event_contact_existing_session_open             = @"contact_existing_session_open";
//联系人详情发消息次数
static NSString *event_contact_info_sendmsg                      = @"contact_info_sendmsg";
//联系人详情查看部门次数
static NSString *event_contact_info_department                   = @"contact_info_department";
//联系人详情收藏次数
static NSString *event_contact_info_favorite                     = @"contact_info_favorite";
//联系人详情拨打电话次数
static NSString *event_contact_info_phone                        = @"contact_info_phone";
static NSString *label_contact_info_phone_source                 = @"source";
static NSString *label_contact_info_phone_source_phone           = @"普通电话";
static NSString *label_contact_info_phone_source_free            = @"云之家电话";
//联系人详情发送短信次数
static NSString *event_contact_info_message                      = @"contact_info_message";
//联系人详情发送邮件次数
static NSString *event_contact_info_email                        = @"contact_info_email";
//人员详情界面打开次数
static NSString *event_contact_info_open                         = @"contact_info_open";
//收集通讯录的设备数
static NSString *event_contact_collect                           = @"contact_collect";
//收集通讯录的条数
static NSString *event_contact_collect_num                       = @"contact_collect_num";
static NSString *label_contact_collect_number                    = @"number";
//验证同事
static NSString *event_colleage_agree                            = @"colleage_agree";
//忽略验证同事
static NSString *event_colleage_cancel                           = @"colleage_cancel";
//新同事打招呼打开次数
static NSString *event_sayhello_open                             = @"sayhello_open";
//新同事打招呼次数
static NSString *event_sayhello                                  = @"sayhello";
//免费电话拨打次数
static NSString *event_freecall_callback                         = @"freecall_callback";


//组织架构管理打开次数
static NSString *event_contact_mng_open                          = @"contact_mng_open";
//管理部门和成员打开次数
static NSString *event_contact_mem_open                          = @"contact_mem_open";
//在电脑上管理打开次数
static NSString *event_contact_mnginpc_open                      = @"contact_mnginpc_open";
//管理员指南打开次数
static NSString *event_contact_manual_open                       = @"contact_manual_open";

// 是否允许申请加入该团队参数type取值开关
static NSString *event_contact_apply_allow                       = @"contact_apply_allow";
//是否允许非管理员邀请新成员参数：type 取值：开、关
static NSString *event_contact_invite_allow                      = @"contact_invite_allow";
// 添加子部门
static NSString *event_contact_dpt_add                           = @"contact_dpt_add";
//部门设置
static NSString *event_contact_dpt_settings                      = @"contact_dpt_settings";
//部门名称修改次数
static NSString *event_contact_org_name_mod                      = @"contact_org_name_mod";
//设置部门负责人打开次数
static NSString *event_contact_owner_mod_open                    = @"contact_owner_mod_open";
//设置部门负责人确认次数
static NSString *event_contact_owner_mod_confirm                 = @"contact_owner_mod_confirm";

//查看更多联系人
static NSString *event_contact_view_more                         = @"contact_view_more";

//面包屑点击次数
static NSString *event_contact_toast_tap                         = @"contact_toast_tap";

// 添加成员次数
static NSString *event_contact_mem_add_tap                       = @"contact_mem_add_tap";
//添加新成员的确定按钮点击次数
static NSString *event_contact_mem_add_confirm                   = @"contact_mem_add_confirm";

//外部好友打开次数
static NSString *event_me_ptner_open                             = @"me_ptner_open";
//外部好友添加次数  type:phone, contact
static NSString *event_ptner_add                                 = @"ptner_add";
//外部好友资料详情打开次数
static NSString *event_ptner_detail_open                         = @"ptner_detail_open";
//外部好友打免费电话
static NSString *event_ptner_detail_call                         = @"ptner_detail_call";
//外部好友发消息
static NSString *event_ptner_detail_msg                          = @"ptner_detail_msg";
//新手指南打开次数
static NSString *event_me_guide_open                             = @"me_guide_open";
//管理员指南打开次数
static NSString *event_me_manual_open                            = @"me_manual_open";
//推荐给好友打开次数
static NSString *event_me_reccomend_open                         = @"me_reccomend_open";
//我的客服打开次数
static NSString *event_me_feedback_open                          = @"me_feedback_open";
//我的名片打开次数
static NSString *event_my_businesscard                          = @"my_businesscard";
//小云福利打开次数
static NSString *event_my_benifit                          = @"my_benifit";
//活力点击
static NSString *event_me_score_personal_open                             = @"score_personal_open";
//勋章点击
static NSString *event_me_medal_personal_open                             = @"medal_personal_open";
//我的收藏点击
static NSString *event_me_my_favourite                                  = @"my_favourite";
//我的团队点击
static NSString *event_me_my_team                                  = @"my_team";
//增值服务点击
static NSString *event_me_area_service_open                         = @"area_service_open";
//管理员专区点击
static NSString *event_me_area_administrator_open                         = @"area_administrator_open";
//管理员专区广告页点击
static NSString *event_me_banner_area_administrator_open                  = @"banner_area_administrator_open";
//上门服务点击
static NSString *event_me_appointment_services_open                       = @"appointment_services_open";
//玩转云之家点击
static NSString *event_me_guide_staff_open                                = @"guide_staff_open";
//玩转云之家广告页点击
static NSString *event_me_banner_guide_staff_open                         = @"banner_guide_staff_open";
//使用指南点击
static NSString *event_me_instruction_open                                = @"instruction_open";
//常见问题点击
static NSString *event_me_problem_open                                    = @"problem_open";
//客户案例点击
static NSString *event_me_case_open                                       = @"case_open";
//角色体验点击
static NSString *event_me_role_open                                       = @"role_open";

#pragma mark - 公共号pubacc
//公共号关注次数
static NSString *event_pubacc_favorite_on                        = @"pubacc_favorite_on";
//公共号取消关注次数
static NSString *event_pubacc_favorite_off                       = @"pubacc_favorite_off";
// 进入公共号消息列表事件
static NSString *enter_pubAcc                                     = @"enter_pubAcc";
// 公共号消息列表指定图文消息曝光次数
static NSString *list_article_exposure_time                       = @"list_article_exposure_time";
// 公共号消息列表图文消息点击事件
static NSString *list_article_click                               = @"list_article_click";
// 公共号消息列表图文消息转发点击事件
static NSString *list_article_transmit_click                       = @"list_article_transmit_click";
// 公共号消息列表图文消息分享点击事件
static NSString *list_article_share_click                          = @"list_article_share_click";
// 订阅号ID key
static NSString *pubAcc_id = @"pubAccId";
// 订阅号文章消息ID key
static NSString *pubAcc_message_id = @"messageId";
// 订阅号文章ID key
static NSString *pubAcc_article_id = @"articleId";
static NSString *dataly = @"dataly";


#pragma mark - 文件file
//打开文件详情
static NSString *event_filedetail_open                           = @"filedetail_open";
//进入文件详情总次数
static NSString *event_filedetail_show                           = @"filedetail_show";
static NSString *label_filedetail_open_type                      = @"type";
static NSString *label_filedetail_open_type_system               = @"系统";
static NSString *label_filedetail_open_type_wps                  = @"WPS";
//我的文件点击次数
static NSString *event_app_myfile                                = @"app_myfile";
//传输文件到电脑的点击次数
static NSString *event_myfile_extrans                            = @"myfile_extrans";
//我上传的点击次数
static NSString *event_myfile_upload                             = @"myfile_upload";
//我下载的点击次数
static NSString *event_myfile_download                           = @"myfile_download";
//我收藏的点击次数
static NSString *event_myfile_favorite                           = @"myfile_favorite";
//收藏按钮的点击次数
static NSString *event_filedetail_favorite                       = @"filedetail_favorite";
//转发按钮的点击次数
static NSString *event_filedetail_trans                          = @"filedetail_trans";
//分享按钮的点击次数
static NSString *event_filedetail_share                          = @"filedetail_share";
//文件下载点击次数
static NSString *event_filedetail_download                       = @"filedetail_download";


#pragma mark - 签到signin
//智能签到开关点击
static NSString *event_signin_intelligentSignOperation           = @"intelligentSignOperation";
static NSString *label_intelligentSignOperation_open             = @"open";
static NSString *label_intelligentSignOperation_close            = @"close";

//签到查看全部记录的点击次数
static NSString *event_signin_myrecord                           = @"signin_new_myrecord";
//签到JS桥跳转到签到点管理界面的次数
static NSString *event_signin_pointlist_js                       = @"signin_pointlist_js";
//签到分享弹窗出现的次数
static NSString *event_signin_record_jiabanshare                 = @"signin_record_jiabanshare";
//签到分享按钮点击次数
static NSString *event_signin_record_sharewx_v2                  = @"signin_record_sharewx_v2";
//签到不分享的点击次数
static NSString *event_signin_record_noshare_v2                  = @"signin_record_noshare_v2";

#pragma mark - 新手村
//进入新手村        点击“好的，去挑战”的次数
static NSString *event_greenhand_gochallenge                     = @"greenhand_gochallenge";
//进入新手村      点击“进入新手村”的次数
static NSString *event_greenhand_gointo                          = @"greenhand_gointo";
//进入新手村      点击“返回”的次数
static NSString *event_greenhand_back                            = @"greenhand_back";


#pragma mark - wifi自动签到 拍照签到
//新手引导（管理员）设置签到点
static NSString *event_signin_guide_set                          = @"signin_guide_set";
//外勤签到时拍照次数
static NSString *event_signin_photo                              = @"signin_photo";
//定位失败用户点击拍照签到的次数
static NSString *event_signin_nol_photo                          = @"signin_nol_photo";
//管理员点击签到点管理菜单的次数
static NSString *event_signin_set                                = @"signin_set";
//设置页面用户点击wifi自动签到的次数
static NSString *event_signin_wifiset                            = @"signin_wifiset";
//点击签到记录分享icon的次数
static NSString *event_signin_record_share                       = @"signin_record_share";
//点击签到记录里面删除icon的次数
static NSString *event_signin_record_delete                      = @"signin_record_delete";
//点击签到记录里面设置签到点的次数
static NSString *event_signin_record_set                         = @"signin_record_set";

//签到点管理的点击次数
static NSString *event_signin_set_signpoint   =@"signin_set_signpoint";
//离线状态的拍照签到
static NSString *event_signin_offl_photo      =@"signin_offl_photo";
//离线状态的取消操作
static NSString *event_signin_offl_cancel     =@"signin_offl_cancel";
//定位失败状态下再试一次
static NSString *event_signin_nol_again       =@"signin_nol_again";
//定位失败状态下的取消
static NSString *event_signin_nol_cancel      =@"signin_nol_cancel";
//点击感叹号的次数
static NSString *event_signin_record_syn      =@"signin_record_syn";
//签到点击分享到微信
static NSString *event_signin_record_sharewx  =@"signin_record_sharewx";
//签到取消微信分享
static NSString *event_signin_record_noshare  =@"signin_record_noshare";
//点击设置为签到点（tip）关闭的次数
static NSString *event_signin_record_closeattset                 = @"signin_record_closeattset";
//管理员点击马上设置的次数
static NSString *event_signin_record_imsetattset                 = @"signin_record_imsetattset";
//点击签到记录（tip）关闭的次数
static NSString *event_signin_record_closehistory                = @"signin_record_closehistory";

/**
 * 新版签到首页
 */
//签到按钮
static NSString *event_signin_newbutton                         = @"signin_newbutton";
//点击签到记录
static NSString *event_signin_record_click                      = @"signin_record_click";
//点击签到设置
static NSString *event_signin_setup                             = @"signin_setup";
//点击团队统计
static NSString *event_signin_record_team                       = @"signin_record_team";
//出现切换团队弹窗
static NSString *event_signin_pop_changeteam                    = @"signin_pop_changeteam";
//点击切换团队
static NSString *event_signin_pop_changeteam_success            = @"signin_pop_changeteam_success";
//点击我知道了
static NSString *event_signin_pop_changeteam_neglect            = @"signin_pop_changeteam_neglect";
//无定位权限次数
static NSString *event_signin_pop_location_permission           = @"signin_pop_location_permission";
//点击无定位权限tips的按钮（去设置）
static NSString *event_signin_pop_location_permission_open      = @"signin_pop_location_permission_open";
//网络断了无法定位
static NSString *event_signin_pop_locationfailed                = @"signin_pop_locationfailed";
//没有连接wifi
static NSString *event_signin_pop_nowifi                        = @"signin_pop_nowifi";
//点击无连接wifi的tips的按钮（连接wifi）
static NSString *event_signin_pop_nowifi_open                   = @"signin_pop_nowifi_open";
//连接的wifi不是指定的wifi（多个）
static NSString *event_signin_pop_wrongwifi                     = @"signin_pop_wrongwifi";
//点击wifi列表按钮
static NSString *event_signin_pop_wrongwifi_open                = @"signin_pop_wrongwifi_open";
//连接的wifi不是指定的wifi（一个）
static NSString *event_signin_pop_onewifi                       = @"signin_pop_onewifi";
//点击外勤签到
static NSString *event_signin_outside                           = @"signin_outside";
//点击位置选择界面右上角的确定按钮
static NSString *event_signin_outside_confirm                   = @"signin_outside_confirm";
//位置选择点击搜索
static NSString *event_signin_outside_search                    = @"signin_outside_search";
//点击“找不到我的位置，使用拍照签到”
static NSString *event_signin_outside_photo                     = @"signin_outside_photo";
//外勤界面点击添加图片按钮
static NSString *event_signin_outside_addphoto                  = @"signin_outside_addphoto";
//重新定位
static NSString *event_signin_relocation                        = @"signin_relocation";
//外勤的tips显示次数
static NSString *event_signin_pop_outside                       = @"signin_pop_outside";
//打开wifi能使定位更精准哦，若仍然不准确可使用拍照签到
static NSString *event_signin_pop_tryagain                      = @"signin_pop_tryagain";
//打开wifi可使定位更准确哦
static NSString *event_signin_outside_pop_wifi                  = @"signin_outside_pop_wifi";
//你已进入内勤签到范围，可进行内勤签到
static NSString *event_signin_outside_pop_signin                = @"signin_outside_pop_signin";


/**
 *  广告埋点
 */
static NSString *event_ad_exposure                               = @"ad_exposure";
static NSString *event_ad_click                                  = @"ad_click";
static NSString *event_ad_itemId                                 = @"itemId";
static NSString *event_ad_type                                   = @"type";
static NSString *event_ad_type_pop                               = @"pop";
static NSString *event_ad_type_message                           = @"message";
static NSString *event_ad_type_contact                           = @"contact";
static NSString *event_ad_type_index                             = @"index";
static NSString *event_ad_type_application                       = @"application";
static NSString *event_ad_type_appcenter                         = @"appcenter";

//进入我的工作圏页面次数
static NSString *event_invite_mycompany_type                     = @"invite_mycompany_type";
static NSString *label_invite_mycompany_type                     = @"type";
static NSString *label_invite_mycompany_type_me                  = @"我";
static NSString *label_invite_mycompany_type_detail              = @"工作圈加入后";
static NSString *label_invite_mycompany_type_null                = @"无加入的工作圈";
//我的工作圏退出返回到登录提示按钮点击次数
static NSString *event_invite_mycompany_quit_type                = @"invite_mycompany_quit_type";
static NSString *label_invite_mycompany_quit_type                = @"type";
static NSString *label_invite_mycompany_quit_type_yes            = @"是";
static NSString *label_invite_mycompany_quit_type_no             = @"否";
//我的工作圏右上角加号点击次数
static NSString *event_invite_mycompany_tile_add                 = @"invite_mycompany_tile_add";



//连续两天登录引导客户去云之家下载链接评论_慷慨打赏
static NSString *event_comment_gocomment                         = @"comment_yzj_yes";
//连续两天登录引导客户去云之家下载链接评论_残忍拒绝
static NSString *event_comment_notgocomment                      = @"comment_yzj_no";


//点击小气泡埋点
static NSString *event_unreadMessage_tipsPress                   = @"unreadMessage_tipsPress";
//发送短信
static NSString *event_unreadMessage_sendUnreadUsers             = @"unreadMessage_sendUnreadUsers";
static NSString *label_unreadMessage_sendUnreadUsers_type        = @"type";
static NSString *label_unreadMessage_sendUnreadUsers_type_sms    = @"短信";
static NSString *label_unreadMessage_sendUnreadUsers_type_tel    = @"电话";

#pragma mark - 语音会议埋点
//点击会话组内+号菜单语音会议发起
static NSString *event_voice_start_group                  =@"voice_start_group";
//会话组内全员发起会议
static NSString *event_voice_start_group_all              =@"voice_start_group_all";
//会话组内选人发起会议第一步：点击actionSheet中的选人发起
static NSString *event_voice_start_group_choose1          =@"voice_start_group_1";
//会话组内选人发起会议第二步：选人后，点击选人桥的开始
static NSString *event_voice_start_group_choose2          =@"voice_start_group_2";
//+号发起的会议第一步：点击会议图标
static NSString *event_voice_start_add_choose1            =@"voice_start_add_1";
//+号发起的会议第三步：选人后，点击选人桥的开始
static NSString *event_voice_start_add_choose2            =@"voice_start_add_2";
//查看未加入人员
static NSString *event_voice_check                        =@"voice_go_notify";
//点击短信通知
static NSString *event_voice_msg_notification             =@"voice_msg_notification";
//点击电话提醒
static NSString *event_voice_phone_notification           =@"voice_phone_notification";
//点击更多
static NSString *event_voice_more                         =@"voice_more";
//点击主持人模式
static NSString *event_voice_host                         =@"voice_host";
//点击邀请人员
static NSString *event_voice_add                          =@"voice_add";
//点击PPT共享
static NSString *event_voice_ppt                          =@"voice_ppt";

#pragma mark - 直播会议埋点
static NSString *label_live_role                          = @"role";
static NSString *label_live_creator                       = @"Creator";
static NSString *label_live_attendee                      = @"Attendee";
static NSString *label_live_common                        = @"Common";


//点击会话组内直播会议发起
static NSString *event_live_start_group                                  =@"MeetingLive_MsgCreate";
//轻应用发起直播会议
static NSString *event_live_start_js                                     =@"MeetingLive_LightCreate";
//直播悬浮窗
static NSString *event_live_suspendingWindow                             =@"MeetingLive_Widget";
//发起人点击参会成员次数
static NSString *event_live_memberlist                                   =@"MeetingLive_AttendeeList";
//发起人邀请成员次数
static NSString *event_live_invite_member                                =@"MeetingLive_Invite";
//发起人切换已邀请成员Tab次数
static NSString *event_live_memberlist_tab                               =@"MeetingLive_InvitedTab";
//发起人再次邀请离开会议的成员次数
static NSString *event_live_member_reinvite                              =@"MeetingLive_InviteAgain";
//发起人踢出参会成员的次数
static NSString *event_live_member_ticked_out                            =@"MeetingLive_Forbid";
//文本发言
static NSString *event_live_comment                                      =@"MeetingLive_EnterComment";
//点赞次数
static NSString *event_live_like                                         =@"MeetingLive_Like";

//连麦
//发起人“邀请连麦”次数
static NSString *event_live_invite_connect                               =@"MeetingLive_InviteConnect";
//发起人通过弹窗提示“接入”申请次数
static NSString *event_live_agree_connect_from_alertwindow               =@"MeetingLive_AgreeConnect_Widows";
//发起人通过连麦管理“接入”申请次数
static NSString *event_live_agree_connect_from_managerview               =@"MeetingLive_AgreeConnect_CnManager";
//发起人通过连麦管理“忽略”申请次数
static NSString *event_live_ignore_connect_from_managerview              =@"MeetingLive_IgnoreConnect_CnManager";
//发起人通过连麦管理“断开”申请次数
static NSString *event_live_disconnect_from_managerview           =@"MeetingLive_ClaimDisconnect_CnManager";
//发起人通过悬浮窗“断开”申请次数
static NSString *event_live_disconnect_from_suspendingWindow      =@"MeetingLive_ClaimDisconnect_Widget";

//与会人“申请连麦”次数
static NSString *event_live_apply_connect                                =@"MeetingLive_AskConnect";
//与会人“断开连麦”次数
static NSString *event_live_disconnect_from_attendence                   =@"MeetingLive_DisConnect";
//发起人切换主讲人次数
static NSString *event_live_switch_master                                =@"MeetingLive_SwitchMaster";
//静音按钮的点击次数
static NSString *event_live_mic_mute                                     =@"MeetingLive_Mute";
//切换摄像头次数
static NSString *event_live_switch_camera                                =@"MeetingLive_SwitchCamera";

//分享到“微信”
static NSString *event_live_share_wechat                                 =@"MeetingLive_ShareToWeChat";
//复制链接
static NSString *event_live_share_link                                   =@"MeetingLive_ShareToLink";
//分享到云之家
static NSString *event_live_share_yzjMsg                                 =@"MeetingLive_ShareToMsg";


//通过分享到云之家消息进入
static NSString *event_live_enter_from_msg                               =@"MeetingLive_MsgJoin_Success";
//通过蓝条进入会议
static NSString *event_live_enter_from_banner                            =@"MeetingLive_BannerJoin_Success";
//通过响铃界面进入会议
static NSString *event_live_enter_from_callView                          =@"MeetingLive_CallingJoin_Success";
//通过会议列表（蓝条有多个会议，点击进入）
static NSString *event_live_enter_from_meetinglist                       =@"MeetingLive_ListJoin_Success";
//通过分享到云之家消息进入失败
static NSString *event_live_enterfailed_from_msg                         =@"MeetingLive_MsgJoin_Failed";
//通过蓝条进入会议失败
static NSString *event_live_enterfailed_from_banner                      =@"MeetingLive_BannerJoin_Failed";
//通过响铃界面进入会议失败
static NSString *event_live_enterfailed_from_callView                    =@"MeetingLive_CallingJoin_Failed";
//通过会议列表（蓝条有多个会议，点击进入）失败
static NSString *event_live_enterfailed_from_meetinglist                 =@"MeetingLive_ListJoin_Failed";
//沉浸模式的切换次数（左滑清屏）
static NSString *event_live_clear_mode                                   =@"MeetingLive_ClearScreen";
//参会人退出会议次数
static NSString *event_live_exit                                         =@"MeetingLive_Exit";


//视频会议
//点击会话组内视频会议发起
static NSString *event_videomeeting_start_group                          =@"MeetingLive_MsgCreate";
//轻应用发起视频会议
static NSString *event_videomeeting_start_js                             =@"MeetingLive_LightCreate";
//悬浮窗
static NSString *event_videomeeting_suspendingWindow                     =@"MeetingLive_Widget";
//点击参会成员次数
static NSString *event_videomeeting_memberlist                           =@"MeetingVideo_AttedeeList";
//邀请成员次数
static NSString *event_videomeeting_invite                               =@"MeetingVideo_Invite";
//发起人再次邀请离开会议的成员次数
static NSString *event_videomeeting_reinvite                             =@"MeetingVideo_InviteAgain";
//发起人踢出参会成员的次数
static NSString *event_videomeeting_member_ticked_out                    =@"MeetingVideo_Forbid";
//麦克风关闭次数
static NSString *event_videomeeting_speaker                              =@"MeetingVideo_Mute";
//扬声器关闭次数
static NSString *event_videomeeting_mic                                  =@"MeetingVideo_Speaker";
//摄像头关闭次数
static NSString *event_videomeeting_close_camera                         =@"MeetingVideo_Camera";
//切换摄像头次数
static NSString *event_videomeeting_switch_camera                        =@"MeetingVideo_SwitchCamera";

//发起人全员静音按钮点击次数
static NSString *event_videomeeting_muteall                              =@"MeetingVideo_AllMute";
//点击其它成员次数
static NSString *event_videomeeting_seeother                             =@"MeetingVideo_SwitchOther";


//通过schema进入会议
static NSString *event_videomeeting_enter_from_schema                            =@"MeetingVideo_SchemaJoin_Scuuess";
//通过蓝条进入会议
static NSString *event_videomeeting_enter_from_banner                            =@"MeetingVideo_BannerJoin_Scuuess";
//通过响铃界面进入会议
static NSString *event_videomeeting_enter_from_callView                          =@"MeetingVideo_CallingJoin_Success";
//通过会议列表（蓝条有多个会议，点击进入）
static NSString *event_videomeeting_enter_from_meetinglist                       =@"MeetingVideo_ListJoin_Success";
//通过蓝条进入会议失败
static NSString *event_videomeeting_enterfailed_from_banner                      =@"MeetingVideo_CallingJoin_Failure";
//通过响铃界面进入会议失败
static NSString *event_videomeeting_enterfailed_from_callView                    =@"MeetingVideo_BannerJoin_Failure";
//通过会议列表（蓝条有多个会议，点击进入）失败
static NSString *event_videomeeting_enterfailed_from_meetinglist                 =@"MeetingVideo_ListJoin_Failure";
//参会人退出会议次数
static NSString *event_videomeeting_exit                                         =@"MeetingVideo_Exit";


//签到分享同事
static NSString *event_signin_shareTo_colleague           =@"signin_shareTo_colleague";
//签到分享朋友圈
static NSString *event_signin_shareTo_chat                =@"signin_shareTo_chat";
//签到纠偏
static NSString *event_signin_rectification               =@"signin_rectification";
//搜索地址次数
static NSString *event_signin_queryaddress                =@"signin_queryaddress";
//选择地址次数
static NSString *event_signin_selectaddress                =@"signin_selectaddress";

//js桥调用次数事件
static NSString *event_calljsbridgename                    =@"calljsbridgename";

//3D-Touch触发次数
static NSString *event_function_3dtouch                    =@"function_3dtouch";
static NSString *label_function_3dtouch_type               =@"name";

//widget触发次数
static NSString *event_function_widget                     =@"function_widget";
static NSString *label_function_widget_type                =@"name";

//签到提醒触发次数
static NSString *event_signInRemind                        =@"signInRemind";

static NSString *event_signin_look_store                   =@"signin_look_store";
static NSString *event_signin_custom_visit               =@"signin_custom_visit";

//签到活动弹窗
static NSString *event_signad_show_dialog_v2                     = @"signad_show_dialog_v2";
static NSString *event_signad_show_more_v2                       = @"signad_show_more_v2";
static NSString *event_signad_show_close_v2                      = @"signad_show_close_v2";

//文件共享
//发起PPT共享播放点击次数
static NSString *event_fileshare_open                     =@"fileshare_open";
//取消下载点击次数
static NSString *event_fileshare_cance                    =@"fileshare_cance";
// XX正在共享文件的次数
static NSString *event_fileshare_permanent                =@"fileshare_permanent";
//弹框加入的次数
static NSString *event_fileshare_messagebox_join          =@"fileshare_messagebox_join";
//弹框取消次数
static NSString *event_fileshare_messagebox_cancel        =@"fileshare_messagebox_cancel";

//群组签到位置分享
//群签到按钮点击
static NSString *event_groupSignIn_click                  =@"groupSignIn_click";
//签到发送到群组
static NSString *event_groupSignIn_send                   =@"groupSignIn_send";


//新手引导页
//新手引导页面的展示次数
static NSString *event_newuserguide_show                   =@"newuserguide_show";
//新手引导+号信号灯点击数
static NSString *event_newuserguide_plus_click             =@"newuserguide_plus_click";
//新手引导关闭按钮点击数
static NSString *event_newuserguide_close_click            =@"newuserguide_close_click";
//新手引导分类信号灯点击数
static NSString *event_newuserguide_fenlei_click           =@"newuserguide_fenlei_click";

static NSString *event_signin_medal_clickleftbutton        =@"signin_medal_clickleftbutton";
static NSString *event_signin_medal_clickrightbutton       =@"signin_medal_clickrightbutton";
static NSString *event_signin_medal_showtimes              =@"signin_medal_showtimes";

//普通文件发送按钮点击
static NSString *event_nomalFile_click               =@"event_nomalFile_click";
//存储到企业云文档按钮点击
static NSString *event_saveToYun_click               =@"event_saveToYun_click";
//文件分享到微信
static NSString *event_fileShareToWebchat_click      =@"event_fileShareToWebchat_click";
//其他应用打开
static NSString *event_fileOpenByOtherApp_click      =@"event_fileOpenByOtherApp_click";
//上传到电脑
static NSString *event_uploadToComputer_click        =@"event_uploadToComputer_click";

static NSString *event_app_selfcompany_edit         =@"event_app_selfcompany_edit";
static NSString *event_app_mycompany_edit         =@"event_app_mycompany_edit";
static NSString *event_app_selfcompanyall_open         =@"event_app_selfcompanyall_open";
static NSString *event_app_fityoucompany_open         =@"event_app_fityoucompany_open";

static NSString *event_app_centeradd_arrow         =@"event_app_centeradd_arrow";
static NSString *event_app_detail_open         =@"event_app_detail_open";
static NSString *event_app_companyopenedapp_edit         =@"event_app_companyopenedapp_edit";
static NSString *event_app_opentheapp_edit         =@"event_app_opentheapp_edit";


//投票
static NSString *event_lightApp_vote                        =@"event_lightApp_vote";
static NSString *event_lightApp_approval           =@"event_lightApp_approval";

// ------------- 2017 新待办 --------------
//待办顶部tab的用户主动点击次数
static NSString *todo_tabnoall_click                             = @"todo_tabnoall_click";
//拖动待办tab的下拉箭头点击次数
static NSString *todo_tabboard_entry                             = @"todo_tabboard_entry";
//一键处理未处理待办
static NSString *event_oneKeyUnDealToDo_click         =@"event_oneKeyUnDealToDo_click";

//标记上点击三个点的次数
static NSString *todo_newmark_3dots                               = @"todo_newmark_3dots";
//新标记的完成次数
static NSString *todo_newmark_complete                            = @"todo_newmark_complete";
//新标记的稍后处理次数
static NSString *todo_newmark_doitlater                           = @"todo_newmark_doitlater";
//标记取消稍后处理次数
static NSString *todo_newmark_nodoitlater                         = @"todo_newmark_nodoitlater";


//@上点击三个点按钮
static NSString *todo_mention_3dots                               = @"todo_mention_3dots";
//@稍后处理
static NSString *todo_mention_doitlater                           = @"todo_mention_doitlater";
//@完成
static NSString *todo_mention_complete                            = @"todo_mention_complete";


//其他待办上点击三个点按钮
static NSString *todo_others_3dots                                = @"todo_others_3dots";
static NSString *todo_others_doitlater                            = @"todo_others_doitlater";
static NSString *todo_others_nodoitlater                          = @"todo_others_nodoitlater";
static NSString *todo_others_button                               = @"todo_others_button";

//恢复默认排序
static NSString *todo_reorder                                     = @"todo_reorder";

// ----------------------标记-------------------
// 消息气泡长按次数 √
static NSString *bubble_long_press                               = @"bubble_long_press";

// 长按菜单点击标记 √
static NSString *mark_longpress                                  = @"mark_longpress";
static NSString *label_mark_longpress_type                       = @"type";
static NSString *label_mark_longpress_type_message               = @"消息";
static NSString *label_mark_longpress_type_todo                  = @"代办";

// 标记日历提醒弹窗 √
static NSString *mark_calendar_alert                             = @"mark_calendar_alert";
static NSString *label_mark_calendar_alert_type                  = @"type";
static NSString *label_mark_calendar_alert_type_true             = @"是";
static NSString *label_mark_calendar_alert_type_false            = @"否";

// 标记消息页面入口 √
static NSString *mark_message_entry                              = @"mark_message_entry";

// 待办中消息的标记
static NSString *kdmark_total_todo                               = @"kdmark_total_todo";
// 待办的标记
static NSString *kdmark_todo_set                                 = @"kdmark_todo_set";

// 标记的点击总次数
static NSString *mark_pin_detail                                 = @"pin_detail";

// 标记删除
static NSString *mark_delete_click                               = @"pin_delete";

// 标记代办入口 √
static NSString *mark_todo_entry                                 = @"mark_todo_entry";

// 标记消息蓝条入口
static NSString *mark_chat_banner_entry                          = @"mark_chat_banner_entry";

// 标记侧滑设置提醒 √
static NSString *mark_swipe_alarm                                = @"mark_swipe_alarm";

// 标记侧滑删除 √
static NSString *mark_swipe_delete                               = @"mark_swipe_delete";

// 标记设置提醒 √
static NSString *mark_set_alarm                                  = @"mark_set_alarm";
static NSString *labe_mark_set_alarm_type                        = @"type";
static NSString *labe_mark_set_alarm_type_later_today            = @"今天晚些时候";
static NSString *labe_mark_set_alarm_type_eightAM_tomorrow       = @"明天8点";
static NSString *labe_mark_set_alarm_type_eightAM_next_monday    = @"下周一8点";
static NSString *labe_mark_set_alarm_type_choose                 = @"选择日期和时间";


// 标记设置提醒成功后弹窗 √
static NSString *mark_set_alarm_alert                            = @"mark_set_alarm_alert";
static NSString *label_mark_set_alarm_alert_type                 = @"type";
static NSString *label_mark_set_alarm_alert_type_true            = @"是";
static NSString *label_mark_set_alarm_alert_type_false           = @"否";

// 标记详情右上角更多按钮
static NSString *mark_detail_more                                = @"mark_detail_more";
static NSString *label_mark_detail_more_type                     = @"type";
static NSString *label_mark_detail_more_type_alarm               = @"设置提醒";
static NSString *label_mark_detail_more_type_detele              = @"取消标记";

// 标记详情跳转回原文
static NSString *mark_detail_jump_back                           = @"mark_detail_jump_back";

// 打开或者关闭闪关灯
static NSString *scan_flashlight                                 = @"scan_flashlight";
static NSString *label_scan_flashlight_type                      = @"type";
static NSString *label_scan_flashlight_type_open                 = @"打开";
static NSString *label_scan_flashlight_type_close                = @"关闭";

static NSString *session_setting_func_open                       = @"session_setting_func_open";
static NSString *label_session_setting_func_open                 = @"func";
static NSString *label_session_setting_func_open_file            = @"文件";
static NSString *label_session_setting_func_open_pic             = @"图片";
static NSString *label_session_setting_func_open_search          = @"搜索";

static NSString *session_settings_user                           = @"session_settings_user";
static NSString *session_settings_user_add                       = @"session_settings_user_add";
static NSString *session_settings_manager                        = @"session_settings_manager";
static NSString *session_settings_manager_edit                   = @"session_settings_manager_edit";
static NSString *session_settings_manager_add                    = @"session_settings_manager_add";
static NSString *session_namemodify                              = @"session_namemodify";
static NSString *reply_return_text                               = @"reply_return_text";
static NSString *session_voice                                   = @"session_voice";
static NSString *session_voice_talk                              = @"session_voice_talk";
static NSString *session_pubacc_open                             = @"session_pubacc_open";

static NSString *session_businesschat_code                       = @"session_businesschat_code";
static NSString *businesschat_code_more                          = @"businesschat_code_more";
static NSString *businesschat_more_select                        = @"businesschat_more_select";
static NSString *label_businesschat_more_select                  = @"item";
static NSString *label_businesschat_more_select_forword          = @"转发";
static NSString *label_businesschat_more_select_share            = @"分享到微信";
static NSString *label_businesschat_more_select_save             = @"保存图片";
static NSString *label_businesschat_more_select_cancel           = @"取消";
//文件
static NSString *event_app_myfile_doc = @"myfile_doc";
static NSString *event_app_myfile_img = @"myfile_img";
static NSString *event_app_myfile_other = @"myfile_other";


// ------------- 消息合并转发、删除埋点 --------------
// 长按点击更多
static NSString *event_more_longpress = @"msg_more";
// 合并收藏按钮
static NSString *event_more_merge_collect = @"msg_more_collect";
// 合并删除按钮
static NSString *event_more_merge_delete = @"msg_more_delete";
// 合并转发按钮
static NSString *event_more_merge_forward = @"msg_more_forward";
// 发送合并转发消息次数
static NSString *event_merge_forward_send = @"merge_forward_send";
// 含不可合并转发消息弹窗
static NSString *event_merge_forward_warn = @"merge_forward_warn";
static NSString *label_merge_forward_warn = @"type";
static NSString *label_merge_forward_warn_cancel = @"取消";
static NSString *label_merge_forward_warn_confirm = @"确定";
// 点击打开合并的聊天记录
static NSString *event_merge_chatlog_open = @"merge_chatlog_open";
// 聊天记录内点击应用消息
static NSString *event_merge_chatlog_open_app = @"merge_chatlog_open_app";

// ------------- 转发选择联系人埋点 --------------
// 转发选择创建一个聊天
static NSString *event_forward_newchat = @"forward_newchat";
// 转发选择重要群组
static NSString *event_forward_important_group = @"forward_important_group";
// 转发选择文件传输助手
static NSString *event_forward_file = @"forward_file";
// 转发点击最近聊天会话组
static NSString *event_forward_recentchat = @"forward_recentchat";
// 转发选组织架构
static NSString *event_forward_org_structure = @"forward_org_structure";
// 转发选群组
static NSString *event_forward_group = @"forward_group";
// 转发创建聊天点开始
static NSString *event_forward_newchat_start = @"forward_newchat_start";


// ------------- 关联团队埋点 --------------
// 关联团队提醒
static NSString *event_team_relation = @"team_relation";
// 关联团队点立即体验
static NSString *event_team_relation_start = @"team_relation_start";
// 关联团队页面点击关联团队
static NSString *event_team_relation_relate = @"team_relation_relate";
// 关联超过三个团队点我知道了
static NSString *event_team_relation_excess = @"team_relation_excess";
// 消息页签点击已关联团队
static NSString *event_session_relation = @"session_relation";
// 关联团队消息页点击会话组
static NSString *event_session_relation_openchat = @"session_relation_openchat";
// 关联团队点击切换团队
static NSString *event_session_relation_changeteam = @"session_relation_changeteam";


#pragma mark - 外部好友埋点
//外部好友打开次数
static NSString *event_exfriend_open = @"exfriend_open";
//外部好友邀请
static NSString *event_exfriend_invite = @"exfriend_invite";
//外部好友微信邀请
static NSString *event_exfriend_invite_wechat = @"exfriend_invite_wechat";
//外部好友通讯录邀请
static NSString *event_exfriend_invite_Contacts = @"exfriend_invite_Contacts";
//外部好友手机号邀请
static NSString *event_exfriend_invite_mobile = @"exfriend_invite_mobile";
//外部好友名片邀请
static NSString *event_exfriend_invite_mycard = @"exfriend_invite_mycard";
//外部好友拨打免费电话
static NSString *event_exfriend_detail_call = @"exfriend_detail_call";
//外部好友发消息
static NSString *event_exfriend_detail_msg = @"exfriend_detail_msg";
//外部好友详情打开次数
static NSString *event_exfriend_detail_open = @"exfriend_detail_open";

//外部好友详情打开次数
static NSString *event_exfriend_detail_open_new = @"exfriend_detail_open_new";
//外部好友CRM相关业务
static NSString *event_exfriend_detail_open_crm = @"exfriend_detail_open_CRM";
//外部好友“管理”
static NSString *event_exfriend_detail_open_menu = @"exfriend_detail_open_menu";
//外部好友提醒登录
static NSString *event_exfriend_Reminder_activation = @"exfriend_Reminder activation";
//外部好友搜索
static NSString *event_exfriend_search = @"exfriend_search";
//外部好友推荐中点击添加
static NSString *event_exfriend_recommend = @"exfriend_recommend";
static NSString *label_exfriend_recommend_source = @"source";
static NSString *label_exfriend_recommend_source_feature = @"推荐";
static NSString *label_exfriend_recommend_source_List = @"清单";

static NSString *event_invite_colleague_wechat = @"invite_colleague_wechat_invite"; //微信邀请
static NSString *event_invite_colleague_phonenum = @"invite_colleague_phonenum_invite"; //手机号邀请
static NSString *event_invite_colleague_QR_code = @"invite_colleague_QR_code_invite"; //二维码邀请
static NSString *event_invite_colleague_address = @"invite_colleague_address_invite"; //通讯录邀请


static NSString *event_exfriend_tag                                   = @"exfriend_tag";
static NSString *label_exfriend_tag_type                              = @"type";
static NSString *label_exfriend_tag_select_person                     = @"选人桥";
static NSString *label_exfriend_tag_contact                           = @"通讯录";

static NSString *event_exfriend_tag_add                               = @"exfriend_tag_add";

static NSString *event_exfriend_tag_menu                              = @"exfriend_tag_menu";
static NSString *label_exfriend_tag_menu_type                          = @"type";
static NSString *label_exfriend_tag_menu_open                         = @"打开标签设置";
static NSString *label_exfriend_tag_menu_save                         = @"成功保存标签";

static NSString *event_exfriend_tag_delete                            = @"exfriend_tag_delete";




//识别过名片
static NSString *event_scan_card_enter = @"scan_card_enter";


#pragma mark - 红包
// 感谢TA的点击次数
static NSString *redpacket_reward_thanku_session = @"redpacket_reward_thanku_session";

// 打赏弹出页面关闭次数
static NSString *redpacket_reward_close_session = @"redpacket_reward_close_session";

// 打赏弹出页面查看红包详情
static NSString *redpacket_reward_detail_session = @"redpacket_reward_detail_session";

// ------------- 通告 -------------

// 群组面板公告按钮点击次数 （群组导航栏右上角公告按钮点击次数）
static NSString *session_groupnotice = @"session_groupnotice";

// 群组设置群公告点击次数
static NSString *session_settings_groupnotice = @"session_settings_groupnotice";

// 群组面板点击创建公告 （公告面板点击“创建公告”）
static NSString *session_groupnotice_set = @"session_groupnotice_set";

// 发布群公告
static NSString *groupnotice_publish = @"groupnotice_publish";

// 群公告问号
static NSString *groupnotice_tips = @"groupnotice_tips";

// 新建群公告
static NSString *groupnotice_set = @"groupnotice_set";

// 删除群公告
static NSString *groupnotice_delete = @"groupnotice_delete";

// 群公告列表点击查看群公告详情
static NSString *groupnotice_detail = @"groupnotice_detail";

// 群组面板点击查看群公告详情
static NSString *session_groupnotice_detail = @"session_groupnotice_detail";

// 群公告通知点击我知道了
static NSString *groupnotice_notice_close = @"groupnotice_notice_close";

//群公告通知点击更多群公告
static NSString *groupnotice_notice_more = @"groupnotice_notice_more";

#pragma mark - 群文件

// 聊天详情-文件的点击次数
static NSString *groupdetail_file = @"groupdetail_file";

// 群文件-tab全部
static NSString *groupfile_tab_all = @"groupfile_tab_all";

// 群文件-tab图片
static NSString *groupfile_tab_pic = @"groupfile_tab_pic";

// 群文件-tab其他
static NSString *groupfile_tab_other = @"groupfile_tab_other";

// 根目录右上角
static NSString *event_groupfile_more = @"groupfile_more";
static NSString *event_groupfile_more_upload = @"groupfile_more_upload";
static NSString *event_groupfile_more_batch = @"groupfile_more_batch";

// 每个文件夹右上角
static NSString *event_groupfile_folder_more = @"groupfile_folder_more";
static NSString *event_groupfile_folder_more_upload = @"groupfile_folder_more_upload";
static NSString *event_groupfile_folder_more_batch = @"groupfile_folder_more_batch";

// 批量操作
static NSString *event_groupfile_batch_forwarding = @"groupfile_batch_forwarding";
static NSString *event_groupfile_batch_move = @"groupfile_batch_move";
static NSString *event_groupfile_batch_delete = @"groupfile_batch_delete";

// 新建文件夹
static NSString *groupfile_newfolder = @"groupfile_newfolder";

// 空白页中间的蓝色按钮
static NSString *groupfile_upload_max = @"groupfile_upload_max";

// 文件的下拉箭头
static NSString *groupfile_file_detail = @"groupfile_file_detail";

// 文件夹的下拉箭头
static NSString *groupfile_folder_detail = @"groupfile_folder_detail";

// 文件移动
static NSString *groupfile_file_move = @"groupfile_file_move";

// 文件删除
static NSString *groupfile_file_delete = @"groupfile_file_delete";

// 文件的取消移动
static NSString *groupfile_file_nomove = @"groupfile_file_nomove";

// 文件夹重命名
static NSString *groupfile_file_rename = @"groupfile_file_rename";

// 文件取消重命名
static NSString *groupfile_file_norename = @"groupfile_file_norename";

// 点击文件发送者名字的次数
static NSString *groupfile_file_who = @"groupfile_file_who";

// 文件移动流程-移动
static NSString *groupfile_file_move_botton = @"groupfile_file_move_botton";

// 文件移动流程-无文件夹-蓝色小字新建文件夹
static NSString *groupfile_file_move_newfolder_mini = @"groupfile_file_move_newfolder_mini";

// 文件移动流程-底部新建文件夹
static NSString *groupfile_file_move_newfolder_max = @"groupfile_file_move_newfolder_max";

// 有文件夹角标的文件的来源蓝色小字
static NSString *groupfile_file_fromwhich = @"groupfile_file_fromwhich";

// 系统消息中文件夹名称点击次数
static NSString *groupfile_sysmessage_folder = @"groupfile_sysmessage_folder";

#pragma mark - 投屏

// 文件一级入口
static NSString *projective_file_on = @"projective_file_on";

// 文件二级入口
static NSString *projective_file_detail = @"projective_file_detail";

// 消息入口
static NSString *projective_IM_enter = @"projective_IM_enter";

// 投屏助手连接设备点击次数
static NSString *projective_detail_link = @"projective_detail_link";

// 投屏助手选择设备次数
static NSString *projective_detail_choosefac = @"projective_detail_choosefac";

// 投屏助手断开连接设备点击次数
static NSString *projective_detail_disconnect = @"projective_detail_disconnect";

// 文件二级入口选择设备次数
static NSString *projective_file_choosefac = @"projective_file_choosefac";

// 文件二级入口断开设备次数
static NSString *projective_file_disconnect = @"projective_file_disconnect";

// 文件入口连接后的出现弹框点击我知道了的次数
static NSString *projective_file_iknow = @"projective_file_iknow";

// 文件入口连接后的出现弹框点击不再通知了的次数
static NSString *projective_file_nomorenotice = @"projective_file_nomorenotice";

// 文件一级入口的断开链接
static NSString *projective_file_off = @"projective_file_off";

// 无设备的时候了解更多的按钮
static NSString *projective_nofac_knowmore = @"projective_nofac_knowmore";

// timeline导航栏的菜单,专注模式
static NSString *event_timeline_navi_menu                = @"event_timeline_navi_menu";

#pragma mark - 插件
// 我-设置-插件入口点击次数：
static NSString *event_lab_click = @"lab_click";

// 插件-消息分类：
static NSString *event_lab_msgclassify = @"lab_msgclassify";

// 插件-消息分类-打开：
static NSString *event_lab_msgclassify_open = @"lab_msgclassify_open";

// 插件-语音转文字：
static NSString *event_lab_autovoicetransfer = @"lab_autovoicetransfer";

// 插件-语音转文字-打开：
static NSString *event_lab_autovoicetransfer_open = @"lab_autovoicetransfer_open";

// 插件-消息分类-意见反馈：
static NSString *event_lab_msgclassify_consult = @"lab_msgclassify_consult";

// 在消息首页顶部点击小箭头次数
static NSString *event_msgclassify_switch = @"msgclassify_switch";

// 消息分类，点击未读消息次数
static NSString *event_msgclassify_unread = @"msgclassify_unread";

// 消息分类，点击重要群组的次数
static NSString *event_msgclassify_impgro = @"msgclassify_impgro";

// 工作台文案点击
static NSString *event_workbench_click_share_text = @"click-share-text";

static NSString *event_workbench_firstpage_header_click = @"firstpage_header_click";
static NSString *event_workbench_firstpage_share_moment = @"firstpage_share_moment";
static NSString *event_workbench_firstpage_share_weibo = @"firstpage_share_weibo";
static NSString *event_workbench_firstpage_share_buluo = @"firstpage_share_buluo";
static NSString *event_workbench_firstpage_pictureshare_closeicon_click = @"firstpage_pictureshare_closeicon_click";

// 清理非常用群组数量埋点
static NSString *event_message_cleaner_group_count = @"message_cleaner_group_count";

// 右上角那个加号，点进去的免打扰模式
static NSString *clickmore_mutenotification = @"clickmore_mutenotification";

// 进到里面会议免打扰的用
static NSString *clickmore_mutenotification_meeting = @"clickmore_mutenotification_meeting";

// 下班免打扰用
static NSString *clickmore_mutenotification_takeoffwork = @"clickmore_mutenotification_takeoffwork";
