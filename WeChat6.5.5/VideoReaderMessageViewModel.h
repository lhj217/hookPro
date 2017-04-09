//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VideoReaderMessageViewModel : ReaderMessageViewModel
{
    _Bool m_isTitleMultiRow;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) _Bool isTitleLabelMultiRow;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) NSString *timeText;
@property(readonly, nonatomic) NSString *coverImageURL;
@property(readonly, nonatomic) unsigned long long titleLabelFontSize;
@property(readonly, nonatomic) unsigned long long titleLabelWidth;
@property(readonly, nonatomic) unsigned long long messageNodeViewBottomMargin;
@property(readonly, nonatomic) unsigned long long messageNodeViewHeight;
@property(readonly, nonatomic) unsigned long long messageNodeViewWidth;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end
