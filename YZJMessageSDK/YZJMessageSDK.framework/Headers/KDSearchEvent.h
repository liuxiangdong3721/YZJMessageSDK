//
//  KDSearchEvent.h
//  kdweibo
//
//  Created by liwenbo on 16/11/3.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#ifndef KDSearchEvent_h
#define KDSearchEvent_h

// 通讯录页签搜索打开次数
static NSString *event_contact_search                            = @"contact_search";


// 搜索项点击
static NSString *event_search_global_open                        = @"search_global_open";
static NSString *event_search_tab_click                          = @"search_tab_click";
static NSString *event_search_more                               = @"search_more";
static NSString *search_colleague_success_click                  = @"search_colleague_success_click";
static NSString *search_spacemember_success_click                  = @"search_spacemember_success_click";
static NSString *search_exfriends_success_click                  = @"search_exfriends_success_click";
static NSString *search_group_success_click                      = @"search_group_success_click";
static NSString *search_message_success_click                    = @"search_message_success_click";
static NSString *search_application_success_click                = @"search_application_success_click";
static NSString *search_file_success_click                       = @"search_file_success_click";
static NSString *search_kdrive_success_click                       = @"search_kdrive_success_click";
static NSString *search_subscription_success_click               = @"search_subscription_success_click";

static NSString *label_search_global_open_source                 = @"source";
static NSString *label_search_global_open_type                   = @"type";
static NSString *label_search_result_open_tab_type_all           = @"全部";
static NSString *label_search_result_open_tab_type_contact       = @"联系人";
static NSString *label_search_result_open_tab_type_group         = @"群聊";
static NSString *label_search_result_open_tab_type_file          = @"文件";
static NSString *label_search_result_open_tab_type_other         = @"其它";

static NSString *label_search_result_open_index_1_3 = @"1-3";
static NSString *label_search_result_open_index_4_10 = @"4-10";
static NSString *label_search_result_open_index_10_20 = @"10-20";
static NSString *label_search_result_open_index_20up = @"20以上";

static NSString *label_search_type_contact         = @"同事";
static NSString *label_search_type_extfriends      = @"外部好友";
static NSString *label_search_type_spaceMember      = @"协同空间成员";
static NSString *label_search_type_group           = @"群组";
static NSString *label_search_type_msg             = @"聊天记录";
static NSString *label_search_type_file            = @"文件";
static NSString *label_search_type_yunfile            = @"云盘文件";
static NSString *label_search_type_pubacc          = @"订阅号";
static NSString *label_search_type_application     = @"应用";



static NSString *file_search_within_seven_days_click                  = @"file_search_within_seven_days_click";
static NSString *file_search_within_thirty_days_click                 = @"file_search_within_thirty_days_click";
static NSString *file_search_within_ninety_days_click                 = @"file_search_within_ninety_days_click";
static NSString *file_search_ninety_days_click                        = @"file_search_ninety_days_click";
static NSString *file_search_upload_name_click                        = @"file_search_upload_name_click";
static NSString *file_search_type_click                        = @"file_search_type_click";
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static NSString *event_search_new_open = @"search_new_open";
static NSString *event_search_new_cancel = @"search_new_cancel";
static NSString *event_search_new_history = @"search_new_history";
static NSString *event_search_new_history_delete = @"search_new_history_delete";
static NSString *event_search_new_open_source_timeline = @"消息页签打开";
static NSString *event_search_new_open_source_contact = @"通讯录页签打开";
static NSString *event_search_source_timeline = @"消息页全局搜索";
static NSString *event_search_source_contact = @"通讯录页全局搜索";

static NSString *event_search_source_timeline_contact = @"消息页联系人tab搜索";
static NSString *event_search_source_contact_contact = @"通讯录页联系人tab搜索";
static NSString *event_search_source_timeline_group = @"消息页群聊tab搜索";
static NSString *event_search_source_contact_group = @"通讯录页群聊tab搜索";
static NSString *event_search_source_timeline_other = @"消息页其他tab搜索";
static NSString *event_search_source_contact_other = @"通讯录页其他tab搜索";
static NSString *event_search_source_timeline_file = @"消息页文件搜索";
static NSString *event_search_source_contact_file = @"通讯录页文件搜索";

static NSString *event_search_colleague_click_chat = @"new_search_colleague_click_chat";
static NSString *event_search_exfriends_click_chat = @"new_search_exfriends_click_chat";

///选人桥搜索
static NSString *event_search_select_click = @"search_select_click";
///分享桥搜索
static NSString *event_search_share_click = @"search_share_click";




/**********************组内搜索****************/

static NSString *group_search_click_quick_type_member     = @"群成员";
static NSString *group_search_click_quick_type_at     = @"@提及自己";
static NSString *group_search_click_quick_type_file     = @"群文件";

static NSString *group_search_message_time_7d     = @"7天内";
static NSString *group_search_message_time_1m     = @"1个月内";
static NSString *group_search_message_time_3m     = @"3个月内";
static NSString *group_search_message_time_3mago     = @"3个月前";

static NSString *group_search_file_type_other     = @"其它类型";

#endif /* KDSearchEvent_h */
