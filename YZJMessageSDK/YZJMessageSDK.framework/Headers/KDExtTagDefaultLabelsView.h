//
//  KDExtTagDefaultLabelsView.h
//  kdweibo
//
//  Created by huanghaining on 16/12/13.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDExtTagDefaultLabelsView, KDExtTagModel;

@protocol KDExtTagDefaultLabelsViewDelegate <NSObject>

- (void)extTagDefaultLabelsView:(KDExtTagDefaultLabelsView *)extTagDefaultLabelsView didClickTag:(NSString *)tagName;

@end

@interface KDExtTagDefaultLabelsView : UIView

@property (nonatomic, strong) NSArray<KDExtTagModel *> *defaultTags;

@property (nonatomic, copy) NSString *curretTagName;

@property (nonatomic, strong) NSMutableArray<NSString *> *extTagsArray;

@property (nonatomic, weak) id<KDExtTagDefaultLabelsViewDelegate> delegate;

@property (nonatomic, strong) NSMutableArray<KDExtTagModel *> *selectedTags;
@property (nonatomic, assign) BOOL isMutlChoose;

@property (nonatomic, assign) CGFloat totalHeight;
@end
