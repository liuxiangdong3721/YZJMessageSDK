//
//  XTSelectPersonsView.h
//  XT
//
//  Created by Gil on 13-7-22.
//  Copyright (c) 2013年 Kingdee. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XTSelectPersonsViewDelegate,XTSelectPersonsViewDataSource;
@class PersonSimpleDataModel, GroupDataModel;

@interface XTSelectPersonsView : UIView

@property (nonatomic, strong, readonly) UIButton *confirmButton;

@property (nonatomic, strong, readonly) NSMutableArray *persons;

@property (nonatomic, weak) id<XTSelectPersonsViewDelegate> delegate;
@property (nonatomic, weak) id<XTSelectPersonsViewDataSource> dataSource;

@property (nonatomic, assign) int minCount;
@property (nonatomic, assign) int maxCount;
@property (nonatomic, assign) BOOL isAllFlag;
@property (nonatomic, assign) BOOL isMult; //增加新属性，用来判断是否多选，默认为多选
@property (nonatomic, strong) NSMutableArray *whiteList;

@property (nonatomic, strong) NSDictionary *params;
@property (nonatomic, assign) BOOL alwaysCanTouch;

@property (nonatomic, strong) NSString *confirmBtTitle;
@property (nonatomic, strong) NSMutableArray *chatNeedCreatePersonPhones;//需要创建用户的手机号 避免过多循环判断

@property (nonatomic, assign) BOOL addPersonNeedCheckExisting; //defult YES

@property (nonatomic, assign) BOOL isAddPersonByPhone;

- (BOOL)canSelected;

- (void)setCanEmptyChoose;

- (void)addPerson:(PersonSimpleDataModel *)person;
- (void)deletePerson:(PersonSimpleDataModel *)person;

- (void)deleteAllPerson;
- (void)addPersonAtFirst;

- (void)addDelegate:(id<XTSelectPersonsViewDelegate>)dsToAdd;
- (void)removeDelegate:(id<XTSelectPersonsViewDelegate>)dsToRemove;

- (void)addDataSource:(id<XTSelectPersonsViewDataSource>)dsToAdd;
- (void)removeDataSource:(id<XTSelectPersonsViewDataSource>)dsToRemove;
@end

@protocol XTSelectPersonsViewDelegate <NSObject>
- (void)selectPersonViewDidConfirm:(NSMutableArray *)persons isAll:(BOOL)flag;
@end

@protocol XTSelectPersonsViewDataSource <NSObject>
@optional
- (void)selectPersonViewDidAddPerson:(PersonSimpleDataModel *)person;
- (void)selectPersonsViewDidDeletePerson:(PersonSimpleDataModel *)person;

@end
