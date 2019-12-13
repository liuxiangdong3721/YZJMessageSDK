//
//  KDContactEvent.h
//  kdweibo
//
//  Created by sevli on 16/7/13.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//  通讯录 & 邀请 埋点

#ifndef KDContactEvent_h
#define KDContactEvent_h


#pragma mark - 进入创建新的工作圏页面次数

static NSString *event_invite_company_create_type                = @"invite_company_create_type";
static NSString *label_invite_company_create_type                = @"type";
static NSString *label_invite_company_create_type_add            = @"添加工作圈";
static NSString *label_invite_company_create_type_myright        = @"我的工作圈右上角";
static NSString *label_invite_company_create_type_search         = @"搜索无结果时";

#pragma mark - 进入搜索并加入已有工作圏页面次数

static NSString *event_invite_company_search_type                = @"invite_company_search_type";
static NSString *label_invite_company_search_type                = @"type";
static NSString *label_invite_company_search_type_add            = @"添加工作圈";
static NSString *label_invite_company_search_type_myright        = @"我的工作圈右上角";

#pragma mark - 查找我的工作圏，匹配结果页面次数
static NSString *event_invite_company_search_match               = @"invite_company_search_match";

//进入主动搜索工作圏页面次数
static NSString *event_invite_company_search_search              = @"invite_company_search_search";

#pragma mark - 进入工作圏详情页面次数
static NSString *event_invite_company_details_type               = @"invite_company_details_type";
static NSString *label_invite_company_details_type               = @"type";
static NSString *label_invite_company_details_type_my            = @"我的工作圈";
static NSString *label_invite_company_details_type_match         = @"匹配工作圈";
static NSString *label_invite_company_details_type_search        = @"搜索工作圈";

//工作圏详情加入按钮点击次数
static NSString *event_invite_company_details_join               = @"invite_company_details_join";

//工作圏详情提醒按钮点击次数
static NSString *event_invite_company_details_remind             = @"invite_company_details_remind";

//工作圏详情撤消按钮点击次数
static NSString *event_invite_company_details_cancel             = @"invite_company_details_cancel";

//创建按钮点击次数
static NSString *event_invite_company_create_click               = @"invite_company_create_click";


#pragma mark - invite
static NSString *event_invite_mem_add   = @"invite_mem_add";

// 邀请的打开次数
static NSString *label_invite_mem_add_type = @"type";
static NSString *label_invite_mem_add_type_contact_btn = @"通讯录页签邀请按钮";
static NSString *label_invite_mem_add_type_convenience = @"一键加同事";
static NSString *label_invite_mem_add_type_timeline = @"消息页签的添加同事";
static NSString *label_invite_mem_add_type_contact = @"通讯录";
static NSString *label_invite_mem_add_type_schema = @"消息内协议跳转";
static NSString *label_invite_mem_add_type_jsBridge = @"广告";

#pragma mark - 成功邀请的次数
static NSString *event_invite_send_new = @"invite_send_new";

static NSString *label_invite_send_new_type = @"邀请方式";
static NSString *label_invite_send_new_type_wechat = @"微信添加";
static NSString *label_invite_send_new_type_contact = @"通讯录";
static NSString *label_invite_send_new_type_QR = @"二维码";
static NSString *label_invite_send_new_type_phoneNum = @"手机号";
static NSString *label_invite_send_new_type_recommend = @"可能认识的同事";

#pragma mark - 来源
static NSString *label_invite_send_new_fromSource = @"发送位置";
static NSString *label_invite_send_new_fromSource_contact_btn = @"通讯录页签邀请按钮";
static NSString *label_invite_send_new_fromSource_convenience = @"一键加同事";
static NSString *label_invite_send_new_fromSource_timeline = @"消息页签的添加同事";
static NSString *label_invite_send_new_fromSource_schema = @"消息内协议跳转";
static NSString *label_invite_send_new_fromSource_jsBridge = @"广告";
static NSString *label_invite_send_new_fromSource_add = @"添加成员";    // 组织管理 管理员添加成员
static NSString *label_invite_send_new_fromSource_extFriend = @"外部好友";

#pragma mark - 邀请状态
static NSString *label_invite_send_new_checkStatus = @"邀请状态";
static NSString *label_invite_send_new_checkStatus_needCheck = @"需要审核";
static NSString *label_invite_send_new_checkStatus_notNeedCheck = @"不需要审核";

#pragma mark - 邀请人角色
static NSString *label_invite_send_new_inviter = @"邀请人角色";
static NSString *label_invite_send_new_inviter_user = @"非管理员";
static NSString *label_invite_send_new_inviter_admin = @"管理员";

#pragma mark - 添加同事页面点击分布
static NSString *event_invite_item_click          = @"invite_item_click";
static NSString *label_invite_item_click_type     = @"type";
static NSString *label_invite_item_click_type_wechat = @"微信添加";
static NSString *label_invite_item_click_type_phone = @"手机号添加";
static NSString *label_invite_item_click_type_qrcode = @"二维码添加";
static NSString *label_invite_item_click_type_web = @"网页版批量添加";

#pragma mark - 修改团队名称保存
static NSString *event_contact_mng_modify       = @"invite_contact_mng_modify";
static NSString *label_contact_mng_modify_source  =  @"来源";
static NSString *label_contact_mng_modify_source_extp = @"体验团队";
static NSString *label_contact_mng_modify_source_contactManager = @"组织架构管理";

// 组织架构管理打开次数
static NSString *event_contact_mng_manage_open  = @"contact_mng_manage_open";

// 允许申请加入该团队
static NSString *event_contact_apply_allow_new = @"contact_apply_allow";
static NSString *label_contact_apply_allow_new_type = @"type";
static NSString *label_contact_apply_allow_new_type_yes = @"是";
static NSString *label_contact_apply_allow_new_type_no = @"否";

// 允许非管理员邀请新成员
static NSString *event_contact_invite_allow_new = @"contact_invite_allow";
static NSString *label_contact_invite_allow_new_type = @"type";
static NSString *label_contact_invite_allow_new_type_yes = @"是";
static NSString *label_contact_invite_allow_new_type_no = @"否";

// 开启通讯录水印
static NSString *event_contact_watermark     = @"contact_watermark";
static NSString *label_contact_watermark_type = @"type";
static NSString *label_contact_watermark_type_yes = @"是";
static NSString *label_contact_watermark_type_no = @"否";

// 组织架构 设置 点击数
static NSString *event_contact_set    = @"contact_set";

// 组织架构 管理设置团队负责人
static NSString *event_contact_owner_add  = @"contact_owner_add";

// 组织架构管理添加成员
static NSString *event_contact_mem_add = @"contact_mem_add";

// 组织管理添加下级部门
static NSString *event_contact_dep_add = @"contact_dep_add";

// 部门设置 点击数
static NSString *event_contact_dep_set = @"contact_dep_set";

// 删除部门 点击数
static NSString *event_contact_dep_delete = @"contact_dep_delete";


// 个人详情 "管理" 打开次数
static NSString *event_contact_memcard_open = @"contact_memcard_open";

#pragma mark - 个人详情 管理页面
static NSString *event_contact_memcard_manage = @"contact_memcard_manage";
static NSString *label_contact_memcard_manage_operation = @"操作";
static NSString *label_contact_memcard_manage_operation_name = @"姓名";
static NSString *label_contact_memcard_manage_operation_gender = @"性别";
static NSString *label_contact_memcard_manage_operation_department = @"部门";
static NSString *label_contact_memcard_manage_operation_position = @"职位";
static NSString *label_contact_memcard_manage_operation_addParttimeJob = @"添加兼职";
static NSString *label_contact_memcard_manage_operation_hidePhoneNum = @"隐藏手机号";
static NSString *label_contact_memcard_manage_operation_dimission = @"离职";

// 个人详情页面添加兼职
static NSString *event_contact_memcard_pluralism = @"contact_memcard_pluralism";
static NSString *label_contact_memcard_pluralism_type = @"type";
static NSString *label_contact_memcard_pluralism_type_open = @"打开";
static NSString *label_contact_memcard_pluralism_type_save = @"保存成功";

// 个人详情管理界面离职点击
static NSString *event_contact_memcard_resignation = @"contact_memcard_resignation";
static NSString *label_contact_memcard_resignation_type = @"type";
static NSString *label_contact_memcard_resignation_type_yes = @"确定";
static NSString *label_contact_memcard_resignation_type_no = @"取消";

// 点击新人报到次数
static NSString *event_sayhello_checkin = @"sayhello_checkin";

// 外部好友微信邀请次数
static NSString *event_invite_extfriend_wechat = @"invite_extfriend_wechat";


// 个人空间用户创建团队或加入团队
static NSString *event_perspace_network_create_company_attr_key = @"PerSpace_dialog";
static NSString *event_perspace_network_create_company_attr_value = @"个人空间角色弹框点击立即创建团队";

// 通讯录页签广告
static NSString *event_perspace_network_contactAd = @"contactAd";
// 工作台页签应用落地页
static NSString *event_perspace_network_landingPage = @"landingPage";
// 我的页签右上角创建团队
static NSString *event_perspace_network_meAdd = @"meAdd";
static NSString *event_perspace_network_meAdd_list_buttom = @"17"; //个人空间“我的”界面团队列表底部创建团队按钮
static NSString *event_perspace_network_contact_add = @"16"; //个人空间通讯录页签创建团队按钮

// 其他方式
static NSString *event_perspace_network_other = @"other";


#pragma mark - 个人空间用户外部好友来源
// 消息页推荐
static NSString *event_perspace_invite_message = @"message";
// 通讯录页微信邀请
static NSString *event_perspace_invite_wechat = @"wechat";
// 通讯录页通讯录邀请
static NSString *event_perspace_invite_contact = @"contact";
// 通讯录页手机号邀请
static NSString *event_perspace_invite_phoneNumber = @"phoneNumber";
// 通讯录页名片邀请
static NSString *event_perspace_invite_nameCard = @"nameCard";
// 其他方式
static NSString *event_perspace_invite_other = @"other";


#pragma mark - 客户 点击量
static NSString *event_contact_customer_click = @"客户入口点击量";
static NSString *event_contact_customer_list_click = @"客户列表点击量";
static NSString *event_contact_customer_search_click = @"客户搜索结果点击量";
static NSString *event_contact_customer_search_follow_button_click = @"客户搜索结果的关注按钮点击量";
static NSString *event_contact_customer_list_follow_button_click = @"客户列表的关注按钮点击量";
static NSString *event_contact_customer_scancard_button_click = @"扫名片按钮点击量";
static NSString *event_contact_customer_scancard_save_button_click = @"扫名片后保存按钮点击量";
static NSString *event_contact_customer_my_click = @"我负责的点击量";
static NSString *event_contact_customer_part_click = @"我参与的点击量";
static NSString *event_contact_customer_follow_click = @"我关注的点击量";
static NSString *event_contact_customer_all_click = @"全部点击量";
static NSString *event_contact_customer_search_history_click = @"历史搜索结果点击量";
static NSString *event_contact_customer_clear_search_history_click = @"历史搜索“清除”按钮点击量";

static NSString *space_contact_createteam_button_click = @"通讯录页签创建团队按钮点击数";
static NSString *space_me_ctesteteam_button_click = @"我的页面“创建团队”按钮点击数";
static NSString *space_me_teamlist_ctesteteam_button_click = @"团队列表底部“创建团队”按钮点击数";

#endif /* KDContactEvent_h */
