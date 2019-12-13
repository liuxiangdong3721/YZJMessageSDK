//
//  ChatViewController.h
//  ContactsLite
//
//  Created by Gil on 12-11-27.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XTRecorderView.h"
#import "XTMyFilesViewController.h"
#import "KDFileChooseViewController.h"
#import "XTForwardDataModel.h"
#import "XTPersonHeaderView.h"
#import "UINavigationController+Chat.h"
#import "PubAccountDataModel.h"
#import <Lottie/Lottie.h>
//#import <DGActivityIndicatorView/DGActivityIndicatorView.h>
#import "KDNaviBarLoading.h"
#import "XTSelectPersonsView.h"
#import "KDImagePickerViewController.h"
#define InputBoardHeight 216      //输入面板高度
#define CHART_VIEW_TOOL_BAR_HEIGHT  44.0f
#define REFRESH_HEADER_HEIGHT 38.5f
#define NUMBER_OF_RECORDS_PER_PAGE 10 // 分页页数
#define TEMP_NUMBER_OF_RECORDS_PER_PAGE 500 // 临时分页页数, 在跳转中使用
#define Notify_ForwardMessage @"File_Notify_ForwardMessage"

typedef enum : NSUInteger {
    KDChatModeNomal = 1,        //普通模式
    KDChatModeAdmin = 2,        //管理员模式, 公共号发言人的唯一判断依据
    KDChatModeMultiCall = 3,    //多方通话
    KDChatModeLiveCall = 5,     //直播
    KDChatModeVideoCall = 6     //视频通话
} KDChatMode;
@class KDNoticeController;

// 特殊消息发送模式
typedef enum : NSUInteger {
    KDChatMessageModeNone,          // 正常模式
    KDChatMessageModeImportant,     // 重要消息
    KDChatMessageModeReply,         // 回复消息
    KDChatMessageModeNotrace,       // 无痕消息
} KDChatMessageMode;

typedef NS_ENUM(NSUInteger, SelectPersonType) {
    SelectPersonTypeAt = 1,
    SelectPersonTypeMeeting,
    SelectPersonTypeLiveMeeting,
    SelectPersonTypeVideoCall,
};

typedef NS_ENUM(NSUInteger, MessagePagingDirection) {
    MessagePagingDirectionOld,
    MessagePagingDirectionNew,
    MessagePagingDirectionCurrent,// 取现有数据，包含自己，方向为New（旧业务）db用，不是网络接口参数
    MessagePagingDirectionMiddle // 包含自己，传入的消息在第一条，总共返回count条，方向为New
};

@class KDScreenshotManager;
@class KDChatBridgeVC;
@class KDMarkModel;
@class ContactClient;
@class PersonSimpleDataModel;
@class GroupDataModel;
@class MessageTypeNewsEventsModel;
@class BubbleDataInternal;
@protocol SendFileDelegate;
@class KDChatBaseCell;
@class KDGroupWorkflowController;
@class KDGroupFileController;
@class KDMessageSliceRange, KDMessageSliceNode, KDChatNotraceManager;
@class KDThrottle;
@class KDEmoticonViewModel, KDEmoticonView, KDChatInputView, KDChatInputViewModel;
@class KDLocationAuthorizeManager;

@interface XTChatViewController : UIViewController
<UITableViewDataSource,
UITableViewDelegate,
UIAlertViewDelegate,
UITextViewDelegate,
UIActionSheetDelegate,
UINavigationControllerDelegate,
UIImagePickerControllerDelegate,
SendFileDelegate,
UIScrollViewDelegate,
XTPersonHeaderViewLongPressDelegate,
XTSelectPersonsViewDelegate,
KDImagePickerViewControllerDelegate,
XTPersonHeaderViewTapTwiceDelegate>
@property (nonatomic, strong) NSArray * inexsitentPersonIds;
@property(nonatomic, assign) BOOL withdrawHUDShouldShow;

@property(nonatomic,strong) NSMutableArray *recordsList;
@property(nonatomic,strong) NSMutableArray *bubbleArray;
@property(nonatomic, assign) BOOL shouldChangeTextField; //用来判断要不要改变输入框的位置
@property(nonatomic, strong) GroupDataModel *group;
@property(nonatomic, strong) PersonSimpleDataModel *toUser;
@property(nonatomic, strong) PubAccountDataModel *pubAccount;
@property(nonatomic, strong) PersonSimpleDataModel *detailPerson;
@property(nonatomic, assign) KDChatMode chatMode;
@property(nonatomic, strong) BubbleDataInternal *replyBdi;
@property(nonatomic, assign) CGFloat toolbarImageViewStartY;
@property(nonatomic, assign) BOOL keyboardShow;
@property(nonatomic, strong) UIImageView *inputBoardBGView; //Input
@property(nonatomic, assign) CGFloat inputBoardStartY;
@property(nonatomic, assign) BOOL inputBoardShow;
@property(nonatomic, assign) CGFloat bubbleTableStartHeight; //Table
@property(nonatomic, strong) UITableView *bubbleTable;
@property(nonatomic, strong) XTRecorderView *recordingView;
@property(nonatomic, assign) BOOL isRecordCancel;
@property(nonatomic, assign) BOOL isSendingFile;//文件
@property(nonatomic, assign) BOOL isSendingImage;
@property(nonatomic, assign) BOOL issending; //事件发送中
@property(nonatomic, strong) NSMutableArray *mArrayNotifyRecords;
@property(nonatomic, strong) NSString *strScrollToMsgId; // if not null, scroll to the cell, 外界传值则为跳转，在跳转成功后置nil
@property(nonatomic, assign) BOOL isFromScrollTo; // 是否跳转进组，跳转成功后不会置nil
@property(nonatomic, assign) BOOL viewDidAppear; // vc是否appear
@property(nonatomic, assign) BOOL bNoMoreOldPagings; // old方向拉倒最好一页
@property(nonatomic, assign) BOOL bNoMoreNewPagings; // new方向拉倒最好一页

@property(nonatomic, assign) BOOL bGoMultiVoiceAfterCreateGroup; // XTChooseContentCreate创建组后是否立刻唤起语音会议
@property(nonatomic, strong) NSString *draft;
@property(nonatomic, strong) NSMutableArray *mArrayRecordsFromMsgList;
@property(nonatomic, strong) NSMutableArray *mArrayRecordsFromMsgListRaw;
@property(nonatomic, strong) RecordDataModel *replyRecord; // 要回复的msg
//@property(nonatomic, strong) KDSignInLocationManager *signInLocationManager;
@property(nonatomic, strong) KDLocationAuthorizeManager *locationAuthorizeManager;
@property(nonatomic, assign) KDChatMessageMode messageMode;
@property(nonatomic, strong) KDChatBridgeVC *bridgeVC;
@property(nonatomic, strong) KDMarkModel *currentDoubleTappedMarkModel;
@property(nonatomic, strong) NSMutableArray *moreViewDataList;
@property(readonly, nonatomic, assign) BOOL inEditingMode;

@property(nonatomic, strong, readonly) KDEmoticonViewModel *emoticonViewModel;
@property(nonatomic, strong, readonly) KDEmoticonView *emoticonView;

//是否是@ 或 语音会议调用XTSelectPersonView
@property (nonatomic, assign) SelectPersonType selectPersonViewType;

/// 输入框
@property (nonatomic, strong) KDChatInputView *chatInputView;
@property (nonatomic, strong) KDChatInputViewModel *inputViewModel;

@property(nonatomic, copy) NSString *shareFileId; //分享文件的Id
@property(nonatomic, strong) UITapGestureRecognizer *noticeBoxTapGesture;
@property(nonatomic, assign) BOOL bSendOriginal;
@property(nonatomic, strong) KDNoticeController *noticeController;
@property(nonatomic, strong) NSString *strFirstUnreadMessageMsgId;
@property(nonatomic, assign) BOOL isScrolling;
@property(nonatomic, assign) BOOL bLoadingLock; //  处理并发
@property(nonatomic, strong) UIView *refreshHeaderView;
@property(nonatomic, strong) LOTAnimationView *lastPageAnimationView;
@property(nonatomic, copy, readonly) NSString *latestMsgId; // 本地最新的msg id // 消息分页临时变量
@property(nonatomic, copy, readonly) NSString *oldestMsgId; // 本地最旧的msg id
@property(nonatomic, copy, readonly) NSString *latestMsgSendTime; // 本地最新的msg sendTime
@property(nonatomic, copy, readonly) NSString *oldestMsgSendTime; // 本地最旧的msg id
@property(nonatomic, copy) NSString *lastMsgSendTime; // msgList接口more机制的防御"用同一个msgId反复请求msgList"的死循环
@property(nonatomic, copy) NSString *fetchOldToMsgId;
@property(nonatomic, strong) ContactClient *msgListClient; // 消息分页相关
@property(nonatomic, copy) void (^blockMsgListClient)(BOOL succ, NSDictionary *dictData);


@property(nonatomic, copy) void (^blockRecursiveGetMoreMessagesOld)(BOOL, BOOL, void(^)(void));
@property(nonatomic, copy) void (^blockRecursiveGetMoreMessagesNew)(BOOL, BOOL, void(^)(void));
@property(nonatomic, assign) BOOL bFirstFetch;
@property(nonatomic, assign) int iUnreadMessageCount; // 为了recordTimeline多次调用时，不再提示未读消息提醒按钮
@property(nonatomic, assign) BOOL hasNewMessagesToReload;
@property(nonatomic, assign) BOOL hasGroupChange;
@property(nonatomic, assign) BOOL scrollingToTopOnceFlag;
@property(nonatomic, strong) NSArray<id<UIPreviewActionItem>> *touchPreviewActionItems NS_AVAILABLE_IOS(9_0);
@property(nonatomic, strong) KDGroupWorkflowController *workflowController;
@property(nonatomic, strong) KDGroupFileController *groupFileController;
@property (nonatomic, assign) BOOL reloadTableLock;
@property (nonatomic, strong) NSString *textToSend; // 传入则自动发送该消息

@property (nonatomic, assign) BOOL shouldRefetchTopPaging; // 欠了一次上分页

@property (nonatomic, strong) NSMutableArray *atSelectedPersons;

@property(nonatomic, strong) dispatch_queue_t workerQueue;
@property (nonatomic, strong) KDChatNotraceManager *notraceManager;
//@property (nonatomic, strong) KDRedPacketManager *redPacketManager;

//语音转文字结果
@property (nonatomic, strong) NSString *recognizeRes;
@property (nonatomic, strong) NSMutableDictionary<NSString*, NSNumber*> *sendProgressCaches;

- (void)addBtnClick;
- (void)showGrayFilter;
- (id)initWithGroup:(GroupDataModel *)group pubAccount:(PubAccountDataModel *)pubAccount mode:(KDChatMode)mode; //从会话列表中进入使用此方法进行初始化 pubAccount（私人模式下传入nil）
- (id)initWithParticipant:(PersonSimpleDataModel *)participant; //从搜索列表进入,使用此方法进行初始化（私人模式）
- (id)initWithPersonId:(NSString *)personId; //传入personId,进行双人会话的界面
//- (void)sendWithRecord:(RecordDataModel *)record;
//- (void)sendWithRecord:(RecordDataModel *)record unreadMonitor:(int)unreadMonitor;
- (void)handleEventModel:(MessageTypeNewsEventsModel *)event;
- (void)sendSignInLocationMessageWithTitle:(NSString *)title content:(NSString *)content webPageUrl:(NSString *)webPageUrl;
- (void)cancelPlay;
- (void)reloadData;
//- (void)emojiBtnClick:(id)sender;
//- (void)hideEmojiBoard;
//- (void)showEmojiBoard;
- (void)sendShareFile:(NSDictionary *)dict;
- (void)reloadCurrentData;
- (void)changeMessageModeTo:(KDChatMessageMode)mode;
- (void)deleteCell:(KDChatBaseCell *)cell;
- (void)forwardMessage:(NSNotification *)notify;
//- (void)handleImage:(UIImage *)image savedPhotosAlbum:(BOOL)savedPhotosAlbum;
- (void)sendPublicEventData:(NSString *)evenData publicID:(NSString *)publicID;/// 从客服通道入口进入客服公众号，自动发送一条消息
- (void)changeToInputIfNeeded;
- (void)enterEditingMode:(BubbleDataInternal *)bubbleData;
- (void)quitEditingMode;
- (void)shareHistoryRecords;//群历史记录转发
- (void)showFavoriteBanner;
- (void)showScheduleBannerWirhUrl:(NSString *)url;
- (void)updateContentViewFrame;
- (void)hideViewLastPhoto;
- (BOOL)sendMessageWithTextView:(UITextView *)textView replacementText:(NSString *)text expectedText:(NSString *)expectedText range:(NSRange)range;
//- (void)sendWithRecord:(RecordDataModel *)record imageData:(NSData *)imageData;
- (void)changeTextViewFrame:(UITextView *)textView;
- (void)setupNavigationRightItem;
- (void)flashCellWithIndexPath:(NSIndexPath *)indexPath; // 点击查看原文，跳转后闪烁
- (void)showUnreadMessageButton;
- (void)goUpdateAtBanner;
//- (void)updateEmojiButton:(BOOL)isFirstResponder; //更新emojiButton的样式
- (void)cancelAllToolbarMenuSelection;
- (void)onGroupChange;
- (void)queryInexsitentWithCompletion:(void (^ _Nullable)(BOOL needUpdate))completion;
@property (nonatomic, strong) KDNaviBarLoading * _Nullable naviBarLoading;
@property (nonatomic, strong) UIBarButtonItem * _Nullable titleItem;// 暂存，用于标题栏loading后还原
@property (nonatomic, strong) UIBarButtonItem * _Nullable titleItemOnlyHeader; // 用于临时设置标题栏loading
@property (nonatomic, strong) UIBarButtonItem * _Nullable backItem; // 同上
//@property (nonatomic, assign) BOOL shouldScrollToBottomAtFirstEnter; // 进组需不需要滚到最后

- (BOOL)hasNewMessages; // 如果组最新一条和本地db不同，证明有新消息

- (void)reSendVoiceData:(NSData *_Nullable)voiceData andRecognizeStr:(NSString *_Nullable)recognizeStr andMsgLen:(int)msgLen;

@property (nonatomic, strong) KDThrottle * _Nullable reloadDataThrottle;
- (BOOL)shouldScrollToBottom;

- (void)unlimitedReloadData;

- (void)cancelKeyboard;
//- (void)changeBtnClick:(id)sender;

- (void)showInputBoard;
- (void)hideInputBoard;

- (void)recordTouchDown;
- (void)recordTouchUpInside;
- (void)recordTouchUpOutside;
- (void)recordTouchDragEnger;
- (void)recordTouchDragExit;

- (void)checkLastPhoto:(BOOL)showViewLastPhoto;
- (void)onSendMessageButtonPress;

@property(nonatomic, assign) BOOL autoSendDraft;


@end
