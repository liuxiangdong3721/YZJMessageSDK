//
//  KDMeEvent.h
//  kdweibo
//
//  Created by sevli on 16/7/14.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#ifndef KDMeEvent_h
#define KDMeEvent_h

// 我- 个人设置
static NSString *event_settings_me_open_set                     = @"settings_me_open_set";
static NSString *label_settings_me_open_set_type                = @"type";
static NSString *label_settings_me_open_set_type_avatar         = @"头像";
static NSString *label_settings_me_open_set_type_birthday       = @"生日";
static NSString *label_settings_me_open_set_type_QRcard         = @"二维码名片";
static NSString *label_settings_me_open_set_type_department     = @"部门";
static NSString *label_settings_me_open_set_type_position       = @"职位";
static NSString *label_settings_me_open_set_type_edit           = @"编辑";
static NSString *label_settings_me_open_set_type_gender         = @"性别";
static NSString *label_settings_me_open_set_type_name           = @"姓名";


// 个人空间用户的外部好友相关行为点击

// 消息页签 + 号 邀请好友点击
static NSString *event_perspace_ext_msg_add = @"perspace_ext_msg_add";
// 通讯录页签 - 创建团队引导点击
static NSString *event_perspace_ext_contactAd = @"perspace_ext_contactAd";
// 通讯录页签 - 微信邀请
static NSString *event_perspace_ext_contact_wechat = @"perspace_ext_contact_wechat";
// 通讯录页签 - 通讯录邀请点击
static NSString *event_perspace_ext_contact_ct_invite = @"perspace_ext_contact_ct_invite";
// 通讯录页签 - 手机号邀请点击
static NSString *event_perspace_ext_contact_phone_invite = @"perspace_ext_contact_phone_invite";
// 通讯录页签 - 名片邀请点击
static NSString *event_perspace_ext_contact_nameCard = @"perspace_ext_contact_nameCard";
// 通讯录页签 - 好友标签点击
static NSString *event_perspace_ext_contact_tags = @"perspace_ext_contact_tags";
// 通讯录页签 - 提醒登录点击
static NSString *event_perspace_ext_contact_login = @"perspace_ext_contact_login";


// 个人空间用户的整体使用情况

// 消息页签点击次数
static NSString *event_perspace_msgTab_click = @"perspace_msgTab_click";
// 通讯录页签点击次数
static NSString *event_perspace_contactTab_click = @"perspace_contactTab_click";
// 工作台页签点击次数
static NSString *event_perspace_applicationTab_click = @"perspace_applicationTab_click";
// 我的页签点击次数
static NSString *event_perspace_meTab_click = @"perspace_meTab_click";
// 搜索点击次数
static NSString *event_perspace_search_click = @"perspace_search_click";
// 消息页签右上角+号的点击次数
static NSString *event_perspace_msgAdd_click = @"perspace_msgAdd_click";

//1、点击状态设置入口
static NSString *new_status_set_click = @"new_status_set_click";
//2、点击自定义状态的编辑按钮
static NSString *custom_status_edit_button_click = @"custom_status_edit_button_click";
//3、编辑自定义状态的保存按钮
static NSString *custom_status_save_button_click = @"custom_status_save_button_click";
//4、保存出差状态
static NSString *choose_business_trip_status = @"choose_business_trip_status";
//5、保存外出状态
static NSString *choose_out_status = @"choose_out_status";
//6、保存休假状态
static NSString *choose_vacation_status = @"choose_vacation_status";
//7、保存会议状态
static NSString *choose_meeting_status = @"choose_meeting_status";
//8、保存忙碌状态
static NSString *choose_busy_status = @"choose_busy_status";
//9、保存自定义状态
static NSString *choose_custom_status = @"choose_custom_status";

#endif /* KDMeEvent_h */
