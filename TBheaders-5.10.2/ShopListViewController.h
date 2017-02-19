//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMSearchContentViewController.h"

#import "SingleCollectionViewDelegate-Protocol.h"

@class NSString, ShopSearchViewModel, SingleCollectionView, UIView;

@interface ShopListViewController : TMSearchContentViewController <SingleCollectionViewDelegate>
{
    SingleCollectionView *_collectionView;	// 16 = 0x10
    ShopSearchViewModel *_viewModel;	// 24 = 0x18
    UIView *_bottomTipView;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *bottomTipView; // @synthesize bottomTipView=_bottomTipView;
@property(retain, nonatomic) ShopSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)scrollViewOfScrollContentViewController;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)currentPage;
- (long long)pageSize;
- (long long)totalPage;
- (void)loadMorePage;
- (_Bool)isPageLoading;
- (_Bool)hasMoreData;
- (void)onShopsSearchResultUpdatedFailed:(id)arg1;
- (void)onShopsSearchResultUpdatedSuccess:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithShopSearchVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
