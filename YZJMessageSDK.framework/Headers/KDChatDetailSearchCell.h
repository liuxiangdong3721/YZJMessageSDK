//
//  KDChatDetailSearchCell.h
//  kdweibo
//
//  Created by kyle on 16/9/29.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import "KDTableViewCell.h"

typedef NS_ENUM(NSUInteger, KDChatDetailSearchType) {
    KDChatDetailSearchType_File,
    KDChatDetailSearchType_Picture,
    KDChatDetailSearchType_ChatContent,
    KDChatDetailSearchType_App
};

typedef void(^KDChatDetailSearchBlock)(KDChatDetailSearchType type);

@interface KDChatDetailSearchModel : NSObject

@end

@interface KDChatDetailSearchCell : KDTableViewCell

@property (nonatomic, strong) KDChatDetailSearchBlock actionBlock;

- (void)initDefaultData;
- (void)addReddotImageViewAtIndex:(NSInteger)index;
- (void)removeReddotImageViewAtIndex:(NSInteger)index;

@end
