//
//  KDChoosePerson+GroupSuggestion.h
//  kdweibo
//
//  Created by Darren Zheng on 2018/3/27.
//  Copyright © 2018年 www.kingdee.com. All rights reserved.
//

#import "KDChoosePerson.h"

@interface KDChoosePerson (GroupSuggestion)

/**
 进入已有群组推荐页面

 @param persons 选择的人
 @param selectedView 底部选择控件，为了push
 @param onSelectGroup 选择了某个旧组的回调
 @param onSelectCreateNewGroup 选择创建新组的回调
 @return 是否执行成功，有可能因为人数过多而没有执行
 */
+ (BOOL)checkSuggestionGroupByPersons:(NSArray *)persons
                         selectedView:(KDChooseSelectedView *)selectedView
                        onSelectGroup:(void (^)(GroupDataModel *))onSelectGroup
               onSelectCreateNewGroup:(void (^)(void))onSelectCreateNewGroup;
@end
