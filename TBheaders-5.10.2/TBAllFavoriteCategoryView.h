//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, TBFavoriteCategoryList, UIAlertView, UIControl, UITableView;
@protocol TBFavoriteCategoryViewControllerDelegate;

@interface TBAllFavoriteCategoryView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableSet *_selectBabyItems;	// 8 = 0x8
    CDUnknownBlockType _batchAddButtonClickedBlock;	// 16 = 0x10
    CDUnknownBlockType _addCategorySuccessBlock;	// 24 = 0x18
    id <TBFavoriteCategoryViewControllerDelegate> _favorCategorydelegate;	// 32 = 0x20
    UIView *_topView;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    UIControl *_addCategoryControl;	// 56 = 0x38
    UIView *_footerView;	// 64 = 0x40
    UIView *_headerView;	// 72 = 0x48
    UIAlertView *_alertView;	// 80 = 0x50
    long long _currentRow;	// 88 = 0x58
    NSMutableArray *_categories;	// 96 = 0x60
    TBFavoriteCategoryList *_favorCategoryList;	// 104 = 0x68
}

+ (id)imageWithColor:(id)arg1;
@property(retain, nonatomic) TBFavoriteCategoryList *favorCategoryList; // @synthesize favorCategoryList=_favorCategoryList;
@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property(nonatomic) long long currentRow; // @synthesize currentRow=_currentRow;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIControl *addCategoryControl; // @synthesize addCategoryControl=_addCategoryControl;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak id <TBFavoriteCategoryViewControllerDelegate> favorCategorydelegate; // @synthesize favorCategorydelegate=_favorCategorydelegate;
@property(copy, nonatomic) CDUnknownBlockType addCategorySuccessBlock; // @synthesize addCategorySuccessBlock=_addCategorySuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType batchAddButtonClickedBlock; // @synthesize batchAddButtonClickedBlock=_batchAddButtonClickedBlock;
@property(retain, nonatomic) NSMutableSet *selectBabyItems; // @synthesize selectBabyItems=_selectBabyItems;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dismissAction:(id)arg1;
- (void)addCategoryAction:(id)arg1;
- (id)addCategoryLableForIconFont;
- (void)loadDatas;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
