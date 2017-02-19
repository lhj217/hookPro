//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBTradeDetailRecommendHomeView, TBTradeDetailViewController, UIImage, UIImageView, UIView;

@interface TBMiniDetailBuilder : NSObject
{
    _Bool _isShowingMiniDetail;	// 8 = 0x8
    TBTradeDetailViewController *_detailVC;	// 16 = 0x10
    TBTradeDetailRecommendHomeView *_recommendView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UIView *_bottomCoverView;	// 40 = 0x28
    UIImageView *_meetingEntryView;	// 48 = 0x30
    NSString *_targetUrl;	// 56 = 0x38
    UIImage *_resizedImage;	// 64 = 0x40
    UIImageView *_blurImageView;	// 72 = 0x48
}

@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) UIImage *resizedImage; // @synthesize resizedImage=_resizedImage;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) UIImageView *meetingEntryView; // @synthesize meetingEntryView=_meetingEntryView;
@property(retain, nonatomic) UIView *bottomCoverView; // @synthesize bottomCoverView=_bottomCoverView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TBTradeDetailRecommendHomeView *recommendView; // @synthesize recommendView=_recommendView;
@property(nonatomic) _Bool isShowingMiniDetail; // @synthesize isShowingMiniDetail=_isShowingMiniDetail;
@property(nonatomic) __weak TBTradeDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
- (void).cxx_destruct;
- (void)performPullDownAnimation;
- (void)touchBottomCoverView:(id)arg1;
- (void)touchMeetingEntryView:(id)arg1;
- (id)currentImageFromHeader;
- (id)resizedImageFromHeaderPic;
- (void)configBlurImageForContentView;
- (id)blurImageWithOriginalImage:(id)arg1;
- (id)reSizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)scaleImage:(id)arg1 toScale:(float)arg2;
- (void)adjustRecommendViewPosition;
- (id)requestParams;
- (void)openNewPageWithTargetURL:(id)arg1;
- (void)dismissOverlayAndOpenURL:(id)arg1;
- (void)addMeetingEntryView;
- (_Bool)validate;
- (id)viewBuilder;
- (id)eventToken;
- (id)view;
- (id)dataSource;
- (void)showMiniDetail;

@end
