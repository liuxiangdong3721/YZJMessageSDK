//
//  XTTELHandle.h
//  XT
//
//  Created by Gil on 13-7-23.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XTTELHandle : NSObject

@property (nonnull, nonatomic, readonly) NSString *custServiceNum;

+ (XTTELHandle *_Nonnull)sharedTELHandle;

- (void)telWithCustmoerService;
- (void)telWithPhoneNumbel:(NSString *_Nullable)phoneNumber;

@end
