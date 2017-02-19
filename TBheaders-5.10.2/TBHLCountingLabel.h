//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString, NSTimer;
@protocol UILabelCounter;

@interface TBHLCountingLabel : UILabel
{
    NSString *_format;	// 8 = 0x8
    long long _method;	// 16 = 0x10
    double _animationDuration;	// 24 = 0x18
    CDUnknownBlockType _formatBlock;	// 32 = 0x20
    CDUnknownBlockType _attributedFormatBlock;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
    double _startingValue;	// 56 = 0x38
    double _destinationValue;	// 64 = 0x40
    double _progress;	// 72 = 0x48
    double _lastUpdate;	// 80 = 0x50
    double _totalTime;	// 88 = 0x58
    double _easingRate;	// 96 = 0x60
    NSTimer *_timer;	// 104 = 0x68
    id <UILabelCounter> _counter;	// 112 = 0x70
}

@property(retain, nonatomic) id <UILabelCounter> counter; // @synthesize counter=_counter;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property double easingRate; // @synthesize easingRate=_easingRate;
@property double totalTime; // @synthesize totalTime=_totalTime;
@property double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property double progress; // @synthesize progress=_progress;
@property double destinationValue; // @synthesize destinationValue=_destinationValue;
@property double startingValue; // @synthesize startingValue=_startingValue;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType attributedFormatBlock; // @synthesize attributedFormatBlock=_attributedFormatBlock;
@property(copy, nonatomic) CDUnknownBlockType formatBlock; // @synthesize formatBlock=_formatBlock;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (double)currentValue;
- (void)runCompletionBlock;
- (void)setTextValue:(double)arg1;
- (void)updateValue:(id)arg1;
- (void)countFromZeroTo:(double)arg1 withDuration:(double)arg2;
- (void)countFromZeroTo:(double)arg1;
- (void)countFromCurrentValueTo:(double)arg1 withDuration:(double)arg2;
- (void)countFromCurrentValueTo:(double)arg1;
- (void)countFrom:(double)arg1 to:(double)arg2 withDuration:(double)arg3;
- (void)countFrom:(double)arg1 to:(double)arg2;

@end
