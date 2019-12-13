//
//  YZJLoginVC.h
//  Pods-YZJLogin_Example
//
//  Created by hour on 2019/2/21.
//

#import <UIKit/UIKit.h>

typedef void(^YZJLoginBlock)(NSDictionary<NSString *, id> *);

NS_ASSUME_NONNULL_BEGIN

@interface YZJLoginVC : UIViewController

@property (nonatomic, copy) YZJLoginBlock loginBlock;


@end

NS_ASSUME_NONNULL_END
