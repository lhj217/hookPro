//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NShippingAddressView.h"

@class UILabel;

@interface NShippingAddressSimpleView : NShippingAddressView
{
    UILabel *_shippingAddressLabel;
}

@property(retain, nonatomic) UILabel *shippingAddressLabel; // @synthesize shippingAddressLabel=_shippingAddressLabel;
- (void)__setupUI;
- (double)singleAddressLabelMaxY;
- (double)addressLabelTopY;
- (double)maxAlpha;
- (double)minAlpha;
- (void)setHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (void)setShippingAddressText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
