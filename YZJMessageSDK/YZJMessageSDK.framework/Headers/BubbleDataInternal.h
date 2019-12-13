//
//  BubbleDataInternal.h
//
//  Created by Alex Barinov
//  StexGroup, LLC
//  http://www.stexgroup.com
//
//  Project home page: http://alexbarinov.github.com/UIBubbleTableView/
//
//  This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
//

#import "RecordDataModel.h"
#import "GroupDataModel.h"

@interface BubbleDataInternal : NSObject

@property (nonatomic, strong) GroupDataModel* group;
@property (nonatomic, strong) RecordDataModel* record;

@property (nonatomic, copy) NSString *header;
@property (nonatomic, assign) BOOL personNameLabelHidden;

@property (nonatomic) CGRect contentLabelFrame;//内容显示区域Frame
@property (nonatomic) CGRect replyContentLabelFrame;//消息回复内容frame
@property (nonatomic) CGRect replyLineFrame;//消息回复分割线frame

@property (nonatomic) CGRect viewOrgBtnFrame;

@property (nonatomic) CGSize bubbleLabelSize;//气泡区域Size
@property (nonatomic) float cellHeight;//行高
@property (nonatomic) float cellHeight1;//行高
@property (nonatomic) CGFloat picHeight;//图片高
@property (nonatomic) CGFloat voiceTextHeight;//语音转文字的高
@property (nonatomic) CGFloat voiceTextWidth;//语音转文字的宽

// new cell properties
@property (nonatomic, strong) NSMutableAttributedString *renderedText;
@property (nonatomic, strong) NSMutableAttributedString *replyRenderedText;
@property (nonatomic, strong) NSMutableAttributedString *nameRenderedText;
@property (nonatomic, strong) NSMutableAttributedString *voiceAttributedText;
@property (nonatomic, strong) NSMutableAttributedString *renderedTranslationText;

@property (nonatomic, assign) CGSize textContentSize;
@property (nonatomic, assign) CGSize replyTextContentSize;
@property (nonatomic, assign) CGSize translationContentSize;

@property (nonatomic, strong) NSMutableAttributedString *systemRenderedText;
@property (nonatomic, assign) CGSize systemTextContentSize;
@property (nonatomic, assign) BOOL isVoicePlaying;
@property (nonatomic, assign, readonly) BOOL isLeft;

/**
 *  从其他页面进入聊天页面时需要跳转到的行数
 */
@property (nonatomic, assign) NSUInteger scrollToIndexRow;

@property (nonatomic, assign) BOOL bDisplayed; // 显示过
@property (nonatomic, assign) BOOL bFirstUnreadMsg; // 表示本次拉取数据的第一条

- (BOOL)shouldShowTimeLabel:(RecordDataModel *)lastRecord; // 是否显示时间标题
- (BOOL)shouldShowNewMessageLabel:(NSString *)strFirstUnreadMessageMsgId; // 是否显示---以下为新消息---

@end
