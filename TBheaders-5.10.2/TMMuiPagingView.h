//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol TMMuiPageScrollViewDelegate, TMMuiPagingViewDataSource, TMMuiPagingViewDelegate;

@interface TMMuiPagingView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isNotLayoutSubviews;	// 8 = 0x8
    _Bool _isCache;	// 9 = 0x9
    _Bool _isCacheMore;	// 10 = 0xa
    _Bool _beginDragging;	// 11 = 0xb
    double _topBottomPadding;	// 16 = 0x10
    double _leftRightPadding;	// 24 = 0x18
    NSMutableSet *_visibleViews;	// 32 = 0x20
    id <TMMuiPagingViewDelegate> _pagingViewDelegate;	// 40 = 0x28
    id <TMMuiPagingViewDataSource> _pagingViewDataSource;	// 48 = 0x30
    id <TMMuiPageScrollViewDelegate> _scrollViewDelegate;	// 56 = 0x38
    NSMutableSet *_recycledViews;	// 64 = 0x40
    unsigned long long _draggingDirection;	// 72 = 0x48
    long long _fromPage;	// 80 = 0x50
    struct CGPoint _draggingOffset;	// 88 = 0x58
}

@property(nonatomic) long long fromPage; // @synthesize fromPage=_fromPage;
@property(nonatomic) unsigned long long draggingDirection; // @synthesize draggingDirection=_draggingDirection;
@property(nonatomic) struct CGPoint draggingOffset; // @synthesize draggingOffset=_draggingOffset;
@property(nonatomic) _Bool beginDragging; // @synthesize beginDragging=_beginDragging;
@property(retain, nonatomic) NSMutableSet *recycledViews; // @synthesize recycledViews=_recycledViews;
@property(nonatomic) _Bool isCacheMore; // @synthesize isCacheMore=_isCacheMore;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) _Bool isNotLayoutSubviews; // @synthesize isNotLayoutSubviews=_isNotLayoutSubviews;
@property(nonatomic) __weak id <TMMuiPageScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <TMMuiPagingViewDataSource> pagingViewDataSource; // @synthesize pagingViewDataSource=_pagingViewDataSource;
@property(nonatomic) __weak id <TMMuiPagingViewDelegate> pagingViewDelegate; // @synthesize pagingViewDelegate=_pagingViewDelegate;
@property(retain, nonatomic) NSMutableSet *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(nonatomic) double leftRightPadding; // @synthesize leftRightPadding=_leftRightPadding;
@property(nonatomic) double topBottomPadding; // @synthesize topBottomPadding=_topBottomPadding;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)endDragging;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)isViewVisible:(long long)arg1;
- (struct CGRect)frameForPage:(id)arg1;
- (id)viewForPage:(long long)arg1;
- (void)recomputeContentSize;
- (void)tileSubviews;
- (void)removeAtCell:(id)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAtCell:(id)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long currentPageIndex;
- (id)pageViewAtIndex:(unsigned long long)arg1;
- (id)dequeueView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
