//
//  KDExtTagsSettingViewController.h
//  kdweibo
//
//  Created by huanghaining on 16/12/12.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ExtTagListBlock) (NSMutableArray *extTags);

typedef NS_ENUM(NSUInteger, KDExtTagsSettingType) {
    KDExtTagsSettingTypeCreate,
    KDExtTagsSettingTypeRename,
    KDExtTagsSettingTypeAdd,
    KDExtTagsSettingTypeChange,
    KDExtTagsSeetingTypeAddByScan,
};

@class KDExtTagModel;

@interface KDExtTagsSettingViewController : UIViewController

@property (nonatomic, strong) KDExtTagModel *currentExtTag;
@property (nonatomic, assign) KDExtTagsSettingType type;
//被操作外部好友的好友信息
@property (nonatomic, copy) NSString *extPersonId;
//已有标签数组
@property (nonatomic, strong) NSMutableArray *extTagsArray;
//回调的block
@property (nonatomic, copy) ExtTagListBlock extTagListBlock;

@end
