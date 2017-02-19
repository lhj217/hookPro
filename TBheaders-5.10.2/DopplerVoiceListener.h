//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;
@protocol DopplerVoiceDelegate;

@interface DopplerVoiceListener : NSObject
{
    _Bool mState;	// 8 = 0x8
    int normalIndex;	// 12 = 0xc
    int processState;	// 16 = 0x10
    int driftThreshold;	// 20 = 0x14
    int maxDriftThreshold;	// 24 = 0x18
    int minDriftThreshold;	// 28 = 0x1c
    int normalThreshold;	// 32 = 0x20
    int dopplerDrift;	// 36 = 0x24
    int *keyIndex;	// 40 = 0x28
    int keyArrayLength;	// 48 = 0x30
    int frequencyList[100];	// 52 = 0x34
    int freListIndex;	// 452 = 0x1c4
    int preIndex;	// 456 = 0x1c8
    int indexCounter;	// 460 = 0x1cc
    int preCodeValue;	// 464 = 0x1d0
    int decodeState;	// 468 = 0x1d4
    _Bool decodeComplete;	// 472 = 0x1d8
    unsigned char codes[10];	// 473 = 0x1d9
    _Bool startTokenDetected;	// 483 = 0x1e3
    id <DopplerVoiceDelegate> _delegate;	// 488 = 0x1e8
    NSMutableArray *_values;	// 496 = 0x1f0
    NSString *_CRC_ERROR;	// 504 = 0x1f8
}

+ (id)initWithKeyIndex:(int *)arg1 keyLength:(int)arg2 driftThreshold:(int)arg3 normalThreshold:(int)arg4 maxThreshold:(int)arg5 minThreshold:(int)arg6 delegate:(id)arg7;
+ (id)initWithKeyIndex:(int *)arg1 keyLength:(int)arg2 driftThreshold:(int)arg3 normalThreshold:(int)arg4 maxThreshold:(int)arg5 minThreshold:(int)arg6;
@property(retain, nonatomic) NSString *CRC_ERROR; // @synthesize CRC_ERROR=_CRC_ERROR;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) __weak id <DopplerVoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)bytesToHexString:(char *)arg1 length:(int)arg2;
- (_Bool)CRCCheck;
- (id)parseCode;
- (void)decode:(int)arg1 frameCounter:(int)arg2;
- (int)mapBinIndexToCodeValue:(int)arg1;
- (void)recognize:(int)arg1 frameCounter:(int)arg2;
- (_Bool)pulsDetected;
- (int)findCurrentChannel:(int)arg1;
- (void)detectDopplerDrift:(int)arg1;
- (void)process:(int)arg1 frameCounter:(int)arg2;
- (void)stop;
- (void)restartDecode;
- (void)restartDriftDetect;
- (void)start;
- (id)initWithKeyIndex:(int *)arg1 keyLength:(int)arg2 driftThreshold:(int)arg3 normalThreshold:(int)arg4 maxThreshold:(int)arg5 minThreshold:(int)arg6 delegate:(id)arg7;

@end
