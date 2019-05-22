//
//  KDChooseSelectedView.h
//  kdweibo
//
//  Created by Scan on 2017/11/14.
//  Copyright © 2017年 www.kingdee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@class KDChoosePersonConfig;
@class GroupDataModel, KDChooseSelectedCountView, XTOrgTreeDataModel;

@protocol KDChooseReloadProtocol,KDChooseCellCheckProtocol;

@interface KDChooseSelectedView : UIView

@property (nonatomic, copy, readonly, nonnull) NSArray <PersonSimpleDataModel*> *selectedPersons;
@property (nonatomic, copy, readonly, nonnull) NSArray <PersonSimpleDataModel*> *unEnableSelectPersons;
@property (nonatomic, copy, readonly, nonnull) NSArray <PersonSimpleDataModel*> *selectRangePersons;
@property (nonatomic, copy, readonly, nonnull) NSArray <NSDictionary*> *needToCreateUser;
@property (nonatomic, strong, readonly, nonnull) UIButton *confirmButton;
@property (nonatomic, strong, readonly, nonnull) KDChooseSelectedCountView *countView;

@property (nonatomic, strong, nonnull) KDChoosePersonConfig *config;

@property (nonatomic, weak, nullable) UIViewController *rootViewController;

@property (nonatomic, copy, nullable) void(^complete)(KDChooseSelectedView * _Nonnull selectedView);

@property (nonatomic, copy, nullable) void(^onSearchingCompleteActionCallBlock)(void(^ _Nullable callBack)(void));

@property (nonatomic, strong, readonly, nonnull) NSMutableSet <id<KDChooseReloadProtocol>> *delegates;

@property (nonatomic, strong, nullable) GroupDataModel *shareToWechatCreatedGroup;
@property (nonatomic, strong, nullable) NSMutableSet <NSString *>*selectedOrgDeptId;
@property (nonatomic, strong, nullable) NSString *rootOrgId; //跟组织id 保存持有

- (id _Nullable )init;

- (void)reloadData;

// all call back delegates
- (BOOL)didSelectPerson:(PersonSimpleDataModel *_Nullable)person inCell:( _Nullable id <KDChooseCellCheckProtocol>)cell;

//- (void)removeObjectsInArray:(NSArray <PersonSimpleDataModel *> *_Nullable)objects;
- (void)removeAllSelected;

// object no call back delegate
- (BOOL)addPersonWithoutCallBack:(PersonSimpleDataModel *_Nullable)person callBack:(_Nullable id<KDChooseReloadProtocol>)object;
- (BOOL)removePersonWithoutCallBack:(PersonSimpleDataModel *_Nullable)person callBack:(_Nullable id<KDChooseReloadProtocol>)object;

// no call back delegate
- (void)addNeedToCreate:(NSDictionary *_Nullable)object;
- (void)removeNeedToCreate:(NSDictionary *_Nullable)object;

- (void)addUnEnableObjectsInArray:(NSArray <PersonSimpleDataModel *> *_Nullable)objects;


// convenient methods  // call delegate when finished  isMultChoose = YES

- (void)addPersonsInArray:(NSArray <PersonSimpleDataModel *> *_Nullable)objects;
- (void)removePersonsInArray:(NSArray <PersonSimpleDataModel *> *_Nullable)objects;

- (void)addPersonsInArray:(NSArray <PersonSimpleDataModel *> *_Nullable)objects withoutCallback:(_Nullable id<KDChooseReloadProtocol>)object;
- (void)removePersonsInArray:(NSArray <PersonSimpleDataModel *> *_Nullable)objects withoutCallback:(_Nullable id<KDChooseReloadProtocol>)object;

- (void)showLimitToast;

@end
