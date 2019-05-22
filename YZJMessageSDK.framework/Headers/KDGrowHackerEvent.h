//
//  KDGrowHackerEvent.h
//  kdweibo
//
//  Created by Scan on 2017/7/27.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#ifndef KDGrowHackerEvent_h
#define KDGrowHackerEvent_h

typedef NS_ENUM(NSUInteger, KDEventRegistFromType)
{
    KDEventRegistFromTypeNone = 0,
    KDEventRegistFromTypeLoginRight = 1,// 用户选择直接登录
    KDEventRegistFromTypeLuanchGuideBottom = 2, // 用户选择重置密码
};

static NSString *event_attributes_default_key = @"label";

static NSString *event_G_regist_login_right_regist_click    = @"[G_register]login_screen_register_button_click";
static NSString *event_G_regist_luanch_bottom_regist_click  = @"[G_register]startup_page_register_button_click";

static NSString *event_G_key_login_right                    = @"login_screen_register_button_click";
static NSString *event_G_key_luanch_bottom                  = @"startup_page_register_button_click";

static NSString *event_G_value_no_register                  = @"unregistered_user";
static NSString *event_G_value_yes_register_has_team        = @"registered_user_have_team";
static NSString *event_G_value_yes_register_has_no_team     = @"registered_user_no_team";

static NSString *event_G_regist_get_sms                     = @"[G_register]verification_code_click";
static NSString *event_G_regist_enter_sms_next_step         = @"[G_register]type_verification_code_and_next_click";
static NSString *event_G_regist_complete_setting_password   = @"[G_register]Password_setting_click";
static NSString *event_G_regist_experience_right_now        = @"[G_register]experience_button_click";
static NSString *event_G_regist_click_create_team           = @"[G_register]create_team_button_click";
static NSString *event_G_regist_create_team_success         = @"[G_register]create_team_successfully";
static NSString *event_G_regist_click_sms_login             = @"[G_register]verification_code_login_click";
static NSString *event_G_regist_click_cancel                = @"[G_register]cancel_verification_code_login_click";

//------------------------------------------------------------------------------------------
static NSString *event_G_person_space_tabbar_click          = @"[G_personal_space]personal_space_tab_click";
static NSString *event_G_person_space_tabbar_click_message  = @"message_tab";
static NSString *event_G_person_space_tabbar_click_contact  = @"address_tab";
static NSString *event_G_person_space_tabbar_click_main_app = @"homepage_tab";
static NSString *event_G_person_space_tabbar_click_collegue = @"circle_of_colleagues_tab";
static NSString *event_G_person_space_tabbar_click_me_main  = @"me_tab";


typedef NS_ENUM(NSUInteger, KDEventForgetPWDFromType)
{
    KDEventForgetPWDFromTypeNone,
    KDEventForgetPWDFromTypeAlert, // 用户选择重置密码
    KDEventForgetPWDFromTypeLoginLeft,// 用户选择直接登录
};

static NSString *event_G_forget_pwd_key_alert_sms_login         = @"popup_verification_code_login_click";
static NSString *event_G_forget_pwd_key_login_left              = @"login_screen_forgot_password_click";

static NSString *event_G_forget_pwd_login_left_click_cancel     = @"[G_forgot_password]login_screen_forgot_password_click";
static NSString *event_G_forget_pwd_get_sms                     = @"[G_forgot_password]verification_code_click";
static NSString *event_G_forget_pwd_enter_sms_next_step         = @"[G_forgot_password]type_verification_code_and_next_click";
static NSString *event_G_forget_pwd_complete_setting_password   = @"[G_forgot_password]Password_setting_click";
static NSString *event_G_forget_pwd_experience_right_now        = @"[G_forgot_password]experience_button_click";
static NSString *event_G_forget_pwd_click_create_team           = @"[G_forgot_password]create_team_button_click";
static NSString *event_G_forget_pwd_create_team_success         = @"[G_forgot_password]create_team_successfully";

static NSString *G_Check_Event_error_code = @"kgrowhackEventErrorCode";

#endif /* KDGrowHackerEvent_h */
