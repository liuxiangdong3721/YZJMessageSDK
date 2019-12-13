//
//  KDFileGuideView.h
//  kdweibo
//
//  Created by 张培增 on 2016/10/22.
//  Copyright © 2016年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^KDFileGuideViewKingdeeYunBtnClickBlock)(void);
typedef void(^KDFileGuideViewMyFileBtnClickBlock)(void);

@interface KDFileGuideView : UIView

@property (nonatomic, copy) KDFileGuideViewKingdeeYunBtnClickBlock kingdeeYunBtnClickBlock;
@property (nonatomic, copy) KDFileGuideViewMyFileBtnClickBlock myFileBtnClickBlock;

@end
