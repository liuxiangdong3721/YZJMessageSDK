//
//  XTImageUtil.h
//  TestTabBar
//
//  Created by Gil on 13-7-3.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum _ChatDetailType
{
    ChatDetailTypeSingle = 0,
    ChatDetailTypeMutil = 1
}ChatDetailType;

@interface XTImageUtil : NSObject

+ (UIImage *)imageNamed:(NSString *)name;

#pragma mark - TabBar
+ (UIImage *)tabBarBackgroundImage;
#pragma mark - Header
+ (UIImage *)headerDefaultImage;
#pragma mark - Cell
+ (UIImage *)cellUnreadNumberImage;
+ (UIImage *)cellAccessoryDisclosureIndicatorImageWithState:(UIControlState)state;
+ (UIImage *)cellSelectStateImageWithState:(BOOL)state;
+ (UIImage *)cellSelectDotImage;
+ (UIImage *)cellSelectStateImageForFileWithState:(BOOL)state;
+ (UIImage *)cellThumbnailImageWithType:(int)type;
#pragma mark - Button
+ (UIImage *)buttonBackImageWithState:(UIControlState)state;
+ (UIImage *)buttonAddMenuImage;
+ (UIImage *)buttonAddMenuHighlightImage;
#pragma mark - Chat
+ (UIImage *)chatVoiceImageWithDirection:(int)direction tag:(int)tag;
+ (UIImage *)chatDialogBackgroundImageWithDirection:(int)direction state:(UIControlState)state;
+ (UIImage *)chatSendFailueImage;
+ (UIImage *)chatToolBarBackgroundImage;
+ (UIImage *)chatToolBarChangeBtnImageWithTag:(int)tag state:(UIControlState)state;
+ (UIImage *)chatVoiceDeleteBackgroundImage;
+ (UIImage *)chatVoiceMicrophoneImage;
+ (UIImage *)chatVoiceTrashImage;
+ (UIImage *)chatDetailDeletePersonImageWithState:(UIControlState)state;
+ (UIImage *)chatPictureBackgroundImageWithDirection:(int)direction state:(UIControlState)state;
+ (UIImage *)chatOtherBackgroundImageWithDirection:(int)direction state:(UIControlState)state;

#pragma mark - QR
+ (UIImage *)qrLoginXTWebImage;
+ (UIImage *)qrLoginMyKingdeeImage;
+ (UIImage *)newsBackgroundImage;

@end
