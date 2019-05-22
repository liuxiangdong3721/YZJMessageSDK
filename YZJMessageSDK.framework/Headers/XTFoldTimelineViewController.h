//
//  XTFoldTimelineViewController.h
//  ContactsLite
//
//  Created by Gil on 12-12-25.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KDFoldableGroupType) {
    KDFoldableGroupTypeNone = 0,
    KDFoldableGroupTypePublic,
    KDFoldableGroupTypeExternal,
    KDFoldableGroupTypeDoNotDisturb,
};
@interface XTFoldTimelineViewController : UIViewController

- (instancetype)initWithType:(KDFoldableGroupType)type;
@property (nonatomic, assign) BOOL showUnreadOnly;
@end
