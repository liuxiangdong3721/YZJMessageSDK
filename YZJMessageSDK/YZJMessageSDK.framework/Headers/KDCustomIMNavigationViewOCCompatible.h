//
//  KDCustomIMNavigationViewOCCompatible.h
//  kdweibo
//
//  Created by tangzeng on 2018/3/16.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol KDCustomIMNavigationViewType;
@protocol KDCustomIMNavigationViewOCCompatible <NSObject>
@property (nonatomic, assign) id <KDCustomIMNavigationViewType> _Nullable customNavigationType;
- (instancetype _Nullable )initWithCustomNavigationType:(id <KDCustomIMNavigationViewType> _Nullable)customNavigationType;
@end
