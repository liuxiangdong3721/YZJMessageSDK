//
//  PubAccountDataModel.h
//  ContactsLite
//
//  Created by Gil on 12-11-30.
//  Copyright (c) 2012年 kingdee eas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PubAccountDataModel : BOSBaseDataModel <NSCoding>
@property (nonatomic,copy) NSString *publicId;//公众号ID
@property (nonatomic,copy) NSString *name;//公众号名称
@property (nonatomic,copy) NSString *photoUrl;//图片URL
@property (nonatomic,assign) BOOL manager;//是否为管理员
@end
