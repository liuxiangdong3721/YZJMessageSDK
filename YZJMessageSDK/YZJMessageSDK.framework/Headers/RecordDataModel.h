//
//  RecordDataModel.h
//  ContactsLite
//
//  Created by Gil on 12-12-10.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import "BOSBaseDataModel.h"

#define XTFileExt @".xt"

//消息类型
typedef enum : NSInteger {
    MessageTypeNone = -1, // 未设置
    MessageTypeSystem = 0,//系统消息
    MessageTypeCall = 1,//通话消息（已废弃）（2018.8重启）
    MessageTypeText = 2,//文本消息
    MessageTypeSpeech = 3,//语音消息
    MessageTypePicture = 4,//图片消息（已废弃，转为文件消息）
    MessageTypeAttach = 5,//操作类消息
    MessageTypeNews = 6,//新闻消息
    MessageTypeShareNews = 7,//分享消息
    MessageTypeFile = 8,//文件消息
    MessageTypeEvent = 9,//事件消息（界面不展现）
    MessageTypeRedEnvelope = 13,//红包消息
    MessageTypeNotrace = 14,//无痕消息
    MessageTypeCombineForward = 16,// 合并转发
    MessageTypeIntelligentDocument = 17// 智能文档
    //----------------------------------------------
    // 【注意】扩展的时候更新unsupportedMessageType属性
    //----------------------------------------------
} MessageType;

//消息状态,0—未读,1—已读
typedef enum _MessageStatus{
    MessageStatusUnread = 0,
    MessageStatusRead = 1
}MessageStatus;

//消息方向 0—左边, 1—右边
typedef enum _MessageDirection{
    MessageDirectionLeft = 0,
    MessageDirectionRight = 1
}MessageDirection;

//额外的数据类型

//消息发送、接收状态
typedef enum _MessageRequestState{
    MessageRequestStateSuccess,//请求成功
    MessageRequestStateRequesting,//请求中
    MessageRequestStateFailue,//请求失败
    MessageRequestStatePartialSuccess, //部分成功(send请求成功入库, 但还没轮询拉取入库) 用来避免分页拉取新消息时发送消息造成的数据断层.
}MessageRequestState;

//播放状态
typedef enum _MessagePlayType{
    MessagePlayTypeSuccess,//服务器返回的数据
    MessagePlayTypeFailue//本地临时数据
}MessagePlayType;

//收藏消息的类型
typedef enum : NSInteger {
    FavoriteContentTypeTEXT = 1 << 0,//文本
    FavoriteContentTypePIC = 1 << 1,//图片
    FavoriteContentTypeVOICE = 1 << 2,//语音
    FavoriteContentTypeVIDEO = 1 << 3,//视频
    FavoriteContentTypeFILE = 1 << 4,//文件
    FavoriteContentTypeLINK = 1 << 5,//链接
    FavoriteContentTypeAPPLY = 1 << 6,//应用
    FavoriteContentTypeMERGED_MSGS = 1 << 7,//合并的多条聊天消息
} FavoriteContentType;

@class MessageParamDataModel;
@class PersonSimpleDataModel;
@interface RecordDataModel : BOSBaseDataModel<NSCopying>

// ----------------------------- 必要字段 -----------------------------

@property (nonatomic, copy, nullable) NSString *fromUserId;//发送者ID
@property (nonatomic, copy, nullable) NSString *sendTime;//发送时间
@property (nonatomic, assign) NSInteger sendTimeInt;
@property (nonatomic, copy, nullable) NSString *msgId;//消息ID
@property (nonatomic, assign) MessageType msgType;//消息类型
@property (nonatomic, assign) MessageStatus status;//消息状态
@property (nonatomic, assign) int msgLen;//消息时长,当消息类型为语音时有效
//消息内容,当消息类型为文本和通话时有效。如果消息为语音或者图片,需调用单独接口获取
@property (nonatomic, copy, nullable) NSString *content;
@property (nonatomic, copy, nullable) NSString *originalContent; // reply去掉中间过程的@提及追加的原始信息，其他模式和content相同
@property (nonatomic, copy, nullable) NSString *nickname;
@property (nonatomic, assign) MessageDirection msgDirection;
@property (nonatomic, strong, nullable) MessageParamDataModel *param;
@property (nonatomic, assign) MessageRequestState msgRequestState;
@property (nonatomic, strong, nullable) NSString *clientMsgId; // msgList回调网络接口获得，用于防止msgList早于send回调，与本地的msgId做关联，不一定存在
@property (nonatomic, strong, nullable) NSString *localClientMsgId; // 和clientMsgId类似，但是是本地记录的，用于关联本地record和网络record
@property (nonatomic, copy, nullable) NSString *groupId;//组ID

// ----------------------------- 发送补充字段 2017年11月 -----------------------------
//@property (nonatomic, assign) BOOL isOriginalImage; // 发送的是否是原图
//@property (nonatomic, strong) NSString * _Nullable resourceFilePath; // 携带本地要发送的静态资源路径
@property (nonatomic, assign) BOOL isAdminGroup; // 是否是公共号管理员发消息
@property (nonatomic, assign) BOOL isExternalGroup;
@property (nonatomic, strong, nullable) NSString *toUserId;
@property (nonatomic, strong, nullable) NSString *publicId;
@property (nonatomic, strong, nullable) NSData *sendData; // image的data数据
@property (nonatomic, strong, nullable) NSString *fileId; // send.action回调的fileId

// ----------------------------- 预拉取消息补充字段 2017年12月 -----------------------------
@property (nonatomic, assign) BOOL isPrefetch;  // 是否是预拉取消息

// ----------------------------- 额外字段 -----------------------------

@property (nonatomic, assign) MessagePlayType msgPlayType;
@property (nonatomic, assign, readonly) FavoriteContentType favoriteContentType;
@property (nonatomic, assign) BOOL isResend; // 来判断是否是重发
@property (nonatomic, assign) int iNotifyType;          // 提醒类型, 第0位: @提及， 1：新公告，2:进群申请
@property (nonatomic, copy, nullable) NSString *strNotifyDesc;    // 提醒描述
@property (nonatomic, copy, nullable) NSString *strEmojiType;     // 表情字段 "emojiType"："original" 则是大图表情
@property (nonatomic, assign) BOOL bImportant; //重要消息
@property (nonatomic, strong, nullable) NSString *sourceMsgId;
@property (nonatomic, assign) NSInteger msgUnreadCount; //消息的已读未读
@property (nonatomic, strong, nullable) NSString *fromClientId;   //来自于桌面端
@property (nonatomic, assign) BOOL bIsTheFisrtTodoInToday; // 是否是今天的第一条代办, 为了代办的cell显示"今天"的标题.
@property (nonatomic, assign) BOOL isLocalImage;
@property (nonatomic, assign, readonly) BOOL isEmoji; // 是否为表情
@property (nonatomic, assign, readonly) BOOL unsupportedMessageType;
@property (nonatomic, assign, readonly) BOOL isVideoMessage;
@property (nonatomic, assign, readonly) BOOL isPictureMessage;
@property (nonatomic, assign, readonly) BOOL isForwardTextMessage;
@property (nonatomic, assign, readonly) BOOL isNotFavoriteMessage;

// 2018-12-10新增 文本内容翻译，本地db缓存字段。nil: 没存过，"": 正在翻译，"有值": 翻译结果
@property (nonatomic, copy, nullable) NSString *translation;

// 是否有@提及
- (BOOL)isNotifyTypeAt;
//本地语音文件路径，如果不存在，则返回nil
//仅对MessageTypeSpeech有效
- (nullable NSString *)xtFilePath;

- (nullable NSURL *)thumbnailPictureUrl;
- (nullable NSURL *)originalPictureUrl;
- (nullable NSURL *)bigPictureUrl;
- (nullable NSString *)username;
@end

// MessageTypeCall
@interface MessageCallDataModel : BOSBaseDataModel
@property (nonatomic, strong, nullable) NSString *logo; //消息前面显示logo的url，比如通话图标
@property (nonatomic, strong, nullable) NSString *uri;  //点击触发的跳转协议
@property (nonatomic, strong, nullable) NSString *desc; //描述
@end

// MessageTypeSpeech
@interface MessageSpeechDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *recognizedText;
@property (nonatomic, assign) BOOL recognizedTextIsFixed;
@end

//MessageTypeAttach
@interface MessageAttachEachDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *value;
@property (nonatomic, copy, nullable) NSString *appId;
@end
@interface MessageAttachDataModel : BOSBaseDataModel
@property (nonatomic, strong, nullable) NSArray *attach;
@property (nonatomic, assign) int attachCount;
@property (nonatomic, copy, nullable) NSString *billId;
@property (nonatomic, copy, nullable) NSString *appId;
@end

//MessageTypeNews buttons
@interface MessageTypeNewsEventsModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *title;
@property (nonatomic, copy, nullable) NSString *event;
@property (nonatomic, copy, nullable) NSString *url;
@property (nonatomic, copy, nullable) NSString *appid;
@end

//MessageTypeNews
@interface MessageNewsEachDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString       *date;
@property (nonatomic, copy, nullable) NSString       *name;//新闻内容图片的url，坑爹的后台，居然用name来返回，坑爹坑爹坑爹坑爹啊
@property (nonatomic, copy, nullable) NSString       *text;
@property (nonatomic, copy, nullable) NSString       *title;
@property (nonatomic, copy, nullable) NSString       *url;
@property (nonatomic, copy, nullable) NSString       *appId;
@property (nonatomic, strong, nullable) NSMutableArray *buttons;

@property (strong, nonatomic, nullable) NSString       *f_appName;//新闻来源应用的名称，暂时只用于转发的新闻消息
@property (nonatomic, copy, nullable) NSString       *f_thumbUrl;//缩略图url，暂时只用于转发的新闻消息

- (BOOL)hasHeaderPicture;
- (BOOL)isSubNews; //判断是不是输入多图新闻里的单条新闻
@end
@interface MessageNewsDataModel : BOSBaseDataModel
@property (nonatomic, strong, nullable) NSMutableArray *newslist;
@property (nonatomic, assign) int model;
@property (nonatomic, assign) BOOL openAd; // 是否是广告
@end

//MessageTypeShareNews
@interface MessageShareNewsDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *appId;//来源应用的AppId
@property (nonatomic, copy, nullable) NSString *appName;//来源应用的名称
@property (nonatomic, copy, nullable) NSString *title;//标题
@property (nonatomic, copy, nullable) NSString *content;//内容
@property (nonatomic, copy, nullable) NSString *thumbUrl;//缩略图url
@property (nonatomic, copy, nullable) NSString *thumbData;//缩略图数据（与thumbUrl二选一）
@property (nonatomic, copy, nullable) NSString *webpageUrl;//新闻地址
@property (nonatomic, copy, nullable) NSString *lightAppId;//轻应用ID

@property (nonatomic, assign) int customStyle;          //是否采用新的自定义样式，1表示展示为新样式，无此参数或者此参数为其他值表示展示为旧样式
@property (nonatomic, copy, nullable) NSString *primaryContent;   // 主要内容
@property (nonatomic, strong, nullable) NSString *contentUrl;     //内容图表URL
@property (nonatomic, copy, nullable) NSString *extUserId;        // 人员外部ID
@property (nonatomic, copy, nullable) NSString *unreadMonitor;

/// 自定义按钮标题
@property (nonatomic, copy, nullable) NSString *actionName;
/// 自定义按钮动作
@property (nonatomic, copy, nullable) NSString *actionUrl;

- (nullable NSString *)toJsonString;
@end



typedef enum : NSUInteger {
    RedPacketTypeNormal,    // 普通红包
    RedPacketTypeExclusive, // 专属红包
    RedPacketTypeReward,    // 打赏红包
} RedPacketType;

//MessageTypeRedEnvelope 红包
@interface MessageRedEnvelopeDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *appId;//来源应用的AppId
@property (nonatomic, copy, nullable) NSString *appName;//来源应用的名称
@property (nonatomic, copy, nullable) NSString *title;//标题
@property (nonatomic, copy, nullable) NSString *content;//内容
@property (nonatomic, copy, nullable) NSString *webpageUrl;//新闻地址
@property (nonatomic, assign) RedPacketType type; // redpkgExtType;  //红包类型 exclusive 是专属红包，reward是打赏红包
@property (nonatomic, copy, nullable) NSString *redpkgTemplateId; // 如果redpkgTemplateId有值，则显示春节红包气泡样式和抢红包样式，否则为普通红包

@property (nonatomic, strong, nullable) NSString *fromAppName; //打赏红包，来源轻应用
@property (nonatomic, strong, nullable) NSArray *users; //专属红包人员信息 ,参考红包js桥人员信息
// 从webpageUrl解析出来的属性
@property (nonatomic, strong, nullable) NSString *redId;

@end

//MessageTypeSystem
@interface MessageSystemDataModel : BOSBaseDataModel
@property (nonatomic, strong, nullable) NSString *body; //系统消息详细内容
@property (nonatomic, strong, nullable) NSString *logo; //logo的url
@property (nonatomic, strong, nullable) NSString *color; //关键字hex color
@property (nonatomic, strong, nullable) NSString *keyword; //关键字
@property (nonatomic, strong, nullable) NSString *appId; //来源应用的AppId
@property (nonatomic, strong, nullable) NSString *webpageUrl; //关键字对应的相对地址（如果是红包，则为sceneId=GRAB&redId=红包ID）
@property (nonatomic, copy, nullable) NSArray *keywords; // 新keywords支持多个，同时兼容老的keyword
@property (nonatomic, copy, nullable) NSArray *buttons;  // 按钮列表；{ "name":string, //按钮名称  "uri":string //如果http则直接提交,包含选中的关键字id数组（参数名：keywordIds）,如果是cloudhub协议则本地跳转 }
@property (nonatomic, copy, nullable) NSString *sysType;  // 系统消息类型

@end

//MessageTypeText or MessageTypePicture
@interface MessageShareTextOrImageDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *appId;//来源应用的AppId
@property (nonatomic, copy, nullable) NSString *appName;//来源应用的名称

@property (nonatomic, strong, nullable) NSString *replyMsgId;
@property (nonatomic, strong, nullable) NSString *replyPersonName;
@property (nonatomic, strong, nullable) NSString *replySummary;
// 9.4.0 追加一批回复，为了可以回复各种类型消息
@property (nonatomic, strong, nullable) NSString *replyType; //被回复的消息类型，1=文本（老版本发出的回复消息没有此字段时默认为1），2=图片，3=链接（包括文件消息、应用消息）
@property (nonatomic, strong, nullable) NSString *replyTitle; //被回复的消息标题（replyType=1、2时无此字段，replyType=3时为"[文件]"或者"[工作汇报]"）
@property (nonatomic, strong, nullable) NSString *replyImgUrl; //被回复的图片预览地址（replyType=1、3时无此字段，replyType=2时为图片的预览地址）
//被回复的消息点击后跳转地址，cloudhub通用协议，目前主要是文件和应用消息（replyType=1、2时无此字段，replyType=3时如下）
//应用消息uri：cloudhub://lightapp?appid=10097&urlparam=xxx
//文件消息uri：cloudhub://filepreview?fileid=599fbeea50f8dd783570cae6&filename=移动端优化.xlsx&filesize=10072&fileext=xlsx
@property (nonatomic, strong, nullable) NSString *replyURI;

@property (nonatomic, strong, nullable) NSString *forwardPersonName; //转发的消息发送人
@property (nonatomic, strong, nullable) NSString *forwardGroupName;  //转发的消息群组
@property (nonatomic, strong, nullable) NSString *forwardSendTime;    //转发的消息发送时间

@end

@interface MessageNotraceDataModel : BOSBaseDataModel

@property (nonatomic, assign) MessageType msgType; //真实消息类型，应该有文本和文件两种
@property (nonatomic, strong, nullable) NSString *content; // 如果是文本，则返回真实消息的文本内容
@property (nonatomic) int effectiveDuration; // 有效时间长度，单位秒
//如果是图片，则返回文件格式
@property (nonatomic, strong, nullable) NSString *file_id;//文件ID
@property (nonatomic, strong, nullable) NSString *name;//文件名
@property (nonatomic, strong, nullable) NSString *uploadDate;//创建时间
@property (nonatomic, strong, nullable) NSString *size;//文件大小
@property (nonatomic, strong, nullable) NSString *ext;//文件扩展名

@end

@interface MessageCombineForwardDataModel : BOSBaseDataModel

@property (nonatomic, strong, nullable) NSString *content;    //内容，合并消息的前4条
@property (nonatomic, strong, nullable) NSString *mergeId;    //消息合并后的业务ID
@property (nonatomic, strong, nullable) NSString *title;      //标题，【xxx的聊天记录】

@end

typedef enum : NSUInteger {
    KDFileMessageTypeFile = 0,       // 普通文件
    KDFileMessageTypePicture = 1,    // 静态图
    KDFileMessageTypeGif = 2,        // 动态图
    KDFileMessageTypeVideo = 3,      // 视频
    KDFileMessageTypeVoice = 4,      // 音频
} KDFileMessageType;

//MessageTypeFile
@interface MessageFileDataModel : BOSBaseDataModel
@property (nonatomic, strong, nullable) NSString *appId;//来源应用的AppId
@property (nonatomic, strong, nullable) NSString *appName;//来源应用的名称
@property (nonatomic, strong, nullable) NSString *file_id;//文件ID
@property (nonatomic, strong, nullable) NSString *name;//文件名, 本地表情图片，通过name格式定义为[group:name],如[xiaoyun:haha]
@property (nonatomic, strong, nullable) NSString *uploadDate;//创建时间
@property (nonatomic, strong, nullable) NSString *size;//文件大小
@property (nonatomic, strong, nullable) NSString *ext;//文件扩展名
@property (nonatomic, strong, nullable) NSString *emojiType; // 表情类型 original
@property (nonatomic, strong, nullable) NSString *msgId;
@property (nonatomic, strong, nullable) NSString *groupId;
@property (nonatomic, strong, nullable) NSString *wbUserId;
@property (nonatomic, strong, nullable) PersonSimpleDataModel *sendUser;//文件发送人
@property (nonatomic, assign) KDFileMessageType ftype; // 0 普通文件，1 静态图，2 动态图，3 视频， 4 音频 ，默认0；大图表情，采用2 动态图类型，通过name格式定义为[group:name],如[xiaoyun:haha]
@property (nonatomic, strong, nullable) NSString *previewId; // 预览图
@property (nonatomic, assign) int msgLen; // video length

- (nullable NSDictionary *)dictionaryFromMessageFileDataModel;

- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict;

@property (nonatomic, strong, nullable) NSString *highlightName;//高亮显示的文件,不存储
@property (nonatomic, strong, nullable) NSString *highlightPersonName; //高亮发送人

@property (nonatomic, strong, nullable) NSString *fileSendTime;//文件消息的发送时间,不存储
@property (nonatomic, strong, nullable) NSString *fileSendPersonName;//文件消息的发送人,不存储


@property (nonatomic, strong, nullable) NSString *folderId; // 文件夹ID
@property (nonatomic, strong, nullable) NSString *folderName; // 文件夹名称
@property (nonatomic, copy, nullable) NSString *unreadMonitor;

@end

//MessageTypeEvent
@interface MessageEventDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *type; //事件类型 favorite代表收藏
@property (nonatomic, strong, nullable) NSString *withdrawMsgType; //撤回的操作, replace代表把源消息替换成内容为content的系统消息, delete代表把原消息删除, 默认为replace
@property (nonatomic, strong, nullable) NSString *withdrawMsgId; // 需要撤回的消息id
@property (nonatomic, strong, nullable) NSString *withdrawMsgBy;
@property (nonatomic, copy, nullable) NSString *originContent;  // 撤回消息的文本
@property (nonatomic, copy, nullable) NSString *withdrawReplyMsgId;  // 撤回的回复消息id
@end

//MessageTypeIntelligentDocument
@interface MessageIntelligentDocumentDataModel : BOSBaseDataModel
@property (nonatomic, copy, nullable) NSString *appName;
@property (nonatomic, copy, nullable) NSString *title;
@property (nonatomic, copy, nullable) NSString *thumbUrl;
@property (nonatomic, copy, nullable) NSString *webpageUrl;
@property (nonatomic, copy, nullable) NSString *lightAppId;
@property (nonatomic, copy, nullable) NSString *fileId;
@property (nonatomic, copy, nullable) NSString *fileName;
@end

@interface MessageParamDataModel : BOSBaseDataModel<NSCopying>

@property (nonatomic, assign) MessageType type;
//can be MessageAttachDataModel、MessageNewsDataModel、MessageShareNewsDataModel、MessageShareTextOrImageDataModel
@property (nonatomic, strong, nullable) id paramObject;
@property (nonatomic, copy, nullable) NSString *paramString;


- (nullable id)initWithDictionary:(NSDictionary *_Nonnull)dict type:(MessageType)type;
- (nullable id)initWithJSONString:(NSString *_Nonnull)jsonString type:(MessageType)type;
@end
