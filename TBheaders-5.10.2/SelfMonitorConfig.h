//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCConfigInterfaceUpdate-Protocol.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface SelfMonitorConfig : NSObject <UTMCConfigInterfaceUpdate>
{
    NSLock *_apLock;	// 8 = 0x8
    NSLock *_utLock;	// 16 = 0x10
    NSLock *_abtestLock;	// 24 = 0x18
    NSMutableDictionary *_apConfig;	// 32 = 0x20
    NSMutableSet *_utConfig;	// 40 = 0x28
    NSMutableDictionary *_abtestBucketConfig;	// 48 = 0x30
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *abtestBucketConfig; // @synthesize abtestBucketConfig=_abtestBucketConfig;
@property(retain, nonatomic) NSMutableSet *utConfig; // @synthesize utConfig=_utConfig;
@property(retain, nonatomic) NSMutableDictionary *apConfig; // @synthesize apConfig=_apConfig;
- (void).cxx_destruct;
- (void)parseABTestBucketConfigValue:(id)arg1;
- (void)parseUTConfigValue:(id)arg1;
- (void)parseAPConfigValue:(id)arg1 forKey:(id)arg2;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (id)getMeasureSetForABTestWithModule:(id)arg1 monitorPoint:(id)arg2;
- (_Bool)isABTestForOfflineWithEventType:(unsigned long long)arg1 module:(id)arg2 monitorPoint:(id)arg3;
- (_Bool)isABTestForBucketWithModule:(id)arg1 monitorPoint:(id)arg2;
- (_Bool)isMonitorWithEventId:(id)arg1;
- (_Bool)_isMonitorWithEventType:(unsigned long long)arg1 module:(id)arg2 monitorPoint:(id)arg3 forKey:(id)arg4;
- (_Bool)isMonitorWithEventType:(unsigned long long)arg1 module:(id)arg2 monitorPoint:(id)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
