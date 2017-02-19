//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MDImageAndTitleView : UIView
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)decorateImageAndTitleViewWithSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 iconUrl:(id)arg3 title:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (void)dealloc;

@end
