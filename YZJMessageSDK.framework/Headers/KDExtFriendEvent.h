//
//  KDExtFriendEvent.h
//  kdweibo
//
//  Created by Scan on 17/3/9.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#ifndef KDExtFriendEvent_h
#define KDExtFriendEvent_h

//======================================================================================================================

static NSString *event_exfriend_invite_attr_key  = @"外部好友邀请";

static NSString *event_exfriend_invite_attr_value_success_add_by_phone_numb     = @"成功添加人次：手机号码邀请";
static NSString *event_exfriend_invite_attr_value_success_add_by_scan_card      = @"成功添加人次：扫描对方名片";
static NSString *event_exfriend_invite_attr_value_success_add_by_contact        = @"成功添加人次：通讯录邀请";
static NSString *event_exfriend_invite_attr_value_success_add_by_wechat_zone    = @"成功添加人次：微信社区来源";
static NSString *event_exfriend_invite_attr_value_success_add_by_wechat         = @"成功添加人次：微信邀请";

static NSString *event_exfriend_invite_attr_value_contact       = @"通讯录邀请";
static NSString *event_exfriend_invite_attr_value_phone_numb    = @"手机号码邀请";
static NSString *event_exfriend_invite_attr_value_wechat        = @"微信邀请";
static NSString *event_exfriend_invite_attr_value_scan_qrcode   = @"名片邀请即二维码扫描";

static NSString *event_exfriend_invite_attr_value_into_count_by_contact                 = @"入口点击量：通讯录邀请";
static NSString *event_exfriend_invite_attr_value_into_count_by_phone_numb              = @"入口点击量：手机号码邀请";
static NSString *event_exfriend_invite_attr_value_into_count_by_wechat                  = @"入口点击量：微信邀请";
static NSString *event_exfriend_invite_attr_value_into_count_by_scan_card               = @"入口点击量：名片邀请暨二维码扫描";
static NSString *event_exfriend_invite_attr_value_into_count_by_wechat_zone             = @"入口点击量：微信社区来源";
static NSString *event_exfriend_invite_attr_value_into_count_by_time_line_scan_card     = @"入口点击量：消息页签扫对方名片";

//======================================================================================================================

static NSString *event_exfriend_detail_open_menu_attr_key = @"外部好友“管理”";

static NSString *event_exfriend_detail_open_menu_attr_value_manage_click                = @"1、管理按钮点击";
static NSString *event_exfriend_detail_open_menu_attr_value_manage_secend_level_click   = @"2、管理按钮二级菜单点击";
static NSString *event_exfriend_detail_open_menu_attr_value_edit_remark                 = @"编辑备注";
static NSString *event_exfriend_detail_open_menu_attr_value_remove_relationship         = @"解除好友关系";

//======================================================================================================================

static NSString *event_exfriend_detail_open_crm_attr_key = @"外部好友CRM相关业务";

static NSString *event_exfriend_detail_open_crm_attr_value_detail_information           = @"查看客户详情";
static NSString *event_exfriend_detail_open_crm_attr_value_transfor_customer            = @"移交";
static NSString *event_exfriend_detail_open_crm_attr_value_transfor_customer_contact    = @"转客户联系人";

#endif /* KDExtFriendEvent_h */
