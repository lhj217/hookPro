//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class UILabel;

@interface TBOUnfoldCell : TBOBaseCell
{
    UILabel *_label;	// 8 = 0x8
    UILabel *_downArrow;	// 16 = 0x10
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
@property(retain, nonatomic) UILabel *downArrow; // @synthesize downArrow=_downArrow;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
