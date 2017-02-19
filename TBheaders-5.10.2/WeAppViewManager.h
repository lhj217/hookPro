//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController, WeAppActionManager, WeAppComponent, WeAppComponentItem, WeAppConfigContext, WeAppDataAgent, WeAppDataManager, WeAppEngine, WeAppViewModuleManager, WeAppWeakMutableArray, WeAppWeakMutableDictionary;

@interface WeAppViewManager : NSObject
{
    _Bool _needLazyLoad;	// 8 = 0x8
    _Bool _foreachNeedRegisterObserver;	// 9 = 0x9
    int _mesureFlag;	// 12 = 0xc
    WeAppEngine *_engine;	// 16 = 0x10
    WeAppConfigContext *_configContext;	// 24 = 0x18
    WeAppViewManager *_parentViewManager;	// 32 = 0x20
    WeAppViewManager *_childViewManager;	// 40 = 0x28
    WeAppDataManager *_dataManager;	// 48 = 0x30
    WeAppActionManager *_actionManager;	// 56 = 0x38
    WeAppDataAgent *_dataAgent;	// 64 = 0x40
    WeAppViewModuleManager *_moduleManager;	// 72 = 0x48
    UIViewController *_viewController;	// 80 = 0x50
    WeAppComponent *_rootView;	// 88 = 0x58
    long long _viewDeep;	// 96 = 0x60
    long long _viewCount;	// 104 = 0x68
    long long _viewDeepFirst;	// 112 = 0x70
    long long _viewCountFirst;	// 120 = 0x78
    WeAppWeakMutableDictionary *_weakutableDict;	// 128 = 0x80
    WeAppWeakMutableArray *_childViewManagerArray;	// 136 = 0x88
    WeAppComponentItem *_viewPattern;	// 144 = 0x90
    struct CGSize _size;	// 152 = 0x98
    struct CGPoint _xyOringe;	// 168 = 0xa8
}

@property(retain, nonatomic) WeAppComponentItem *viewPattern; // @synthesize viewPattern=_viewPattern;
@property(retain, nonatomic) WeAppWeakMutableArray *childViewManagerArray; // @synthesize childViewManagerArray=_childViewManagerArray;
@property(retain, nonatomic) WeAppWeakMutableDictionary *weakutableDict; // @synthesize weakutableDict=_weakutableDict;
@property(nonatomic) struct CGPoint xyOringe; // @synthesize xyOringe=_xyOringe;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool foreachNeedRegisterObserver; // @synthesize foreachNeedRegisterObserver=_foreachNeedRegisterObserver;
@property(nonatomic) long long viewCountFirst; // @synthesize viewCountFirst=_viewCountFirst;
@property(nonatomic) long long viewDeepFirst; // @synthesize viewDeepFirst=_viewDeepFirst;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long viewDeep; // @synthesize viewDeep=_viewDeep;
@property(nonatomic) _Bool needLazyLoad; // @synthesize needLazyLoad=_needLazyLoad;
@property(nonatomic) int mesureFlag; // @synthesize mesureFlag=_mesureFlag;
@property(retain, nonatomic) WeAppComponent *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak WeAppViewModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
@property(nonatomic) __weak WeAppDataAgent *dataAgent; // @synthesize dataAgent=_dataAgent;
@property(nonatomic) __weak WeAppActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) __weak WeAppDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak WeAppViewManager *childViewManager; // @synthesize childViewManager=_childViewManager;
@property(nonatomic) __weak WeAppViewManager *parentViewManager; // @synthesize parentViewManager=_parentViewManager;
@property(nonatomic) __weak WeAppConfigContext *configContext; // @synthesize configContext=_configContext;
@property(nonatomic) __weak WeAppEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getRootMeasureSpec:(int)arg1 withMaxSize:(int)arg2;
- (void)cancelMeasureScale:(id)arg1;
- (void)setMeasureScale:(id)arg1;
- (void)measure:(struct CGSize)arg1;
- (void)setNetwork:(id)arg1;
- (void)setComponentTreeItem:(id)arg1 byItem:(id)arg2;
- (struct CGSize)getRootViewSizeByItem:(id)arg1;
- (double)getRootViewHeightByItem:(id)arg1;
- (id)constructPatternViewByIndex:(int)arg1;
- (void)setPattern:(id)arg1 withSize:(struct CGSize)arg2;
- (id)getWeAppComponentRecureFromChileArrayWithComponentId:(id)arg1;
- (id)getWeAppComponentRecurWithId:(id)arg1;
- (id)getWeAppComponentWithId:(id)arg1;
- (void)addComponent:(id)arg1 withComponentItem:(id)arg2;
- (void)addComponentItem:(id)arg1 toComponent:(id)arg2;
- (id)addComponentToParent:(id)arg1 withItem:(id)arg2;
- (void)setPagingLoadComponentToScrollContainerComponent:(id)arg1;
- (id)constructViewTree:(id)arg1 withParent:(id)arg2;
- (struct CGPoint)getPoint;
- (void)setPoint:(struct CGPoint)arg1;
- (void)updateFrame;
- (id)constructViewWithItem:(id)arg1 bySize:(struct CGSize)arg2;
- (void)treeLog:(id)arg1 withTag:(id)arg2;
- (id)constructView:(id)arg1 bySize:(struct CGSize)arg2;
- (id)init;

@end
