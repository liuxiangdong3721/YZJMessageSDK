//
//  KDChooseHeaderModel.h
//  kdweibo
//
//  Created by kyle on 16/10/13.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KDChooseHeaderModelButtonType) {
    KDChooseHeaderModelButtonType_InputPhoneNumber,
    KDChooseHeaderModelButtonType_Contact,
    KDChooseHeaderModelButtonType_WeChat,
    KDChooseHeaderModelButtonType_QrCard,
};

@interface KDChooseHeaderModel : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) KDChooseHeaderModelButtonType type;

@end
