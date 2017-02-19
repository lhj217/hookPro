//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UITextField;

@interface JDJPLinkManInfoView : UIView <UITextFieldDelegate>
{
    UITextField *linkManNameField;
    UITextField *linkManPhoneNoField;
    UITextField *linkManEmailField;
    UIButton *linkManButton;
    UIImageView *bottomLineView;
    _Bool _isPhoneDes;
    _Bool _isEmailDes;
}

@property(nonatomic) _Bool isEmailDes; // @synthesize isEmailDes=_isEmailDes;
@property(nonatomic) _Bool isPhoneDes; // @synthesize isPhoneDes=_isPhoneDes;
@property(retain, nonatomic) UITextField *linkManEmailField; // @synthesize linkManEmailField;
@property(retain, nonatomic) UITextField *linkManPhoneNoField; // @synthesize linkManPhoneNoField;
@property(retain, nonatomic) UITextField *linkManNameField; // @synthesize linkManNameField;
- (void)textFieldDidBeginEditing;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)linkManButtonClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
