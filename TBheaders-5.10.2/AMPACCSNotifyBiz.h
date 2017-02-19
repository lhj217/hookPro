//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPNotifyBiz-Protocol.h"

@class NSString, TBAccsManager;

@interface AMPACCSNotifyBiz : NSObject <AMPNotifyBiz>
{
    struct _opaque_pthread_rwlock_t _propertyRWLock;	// 8 = 0x8
    TBAccsManager *_accsManager;	// 208 = 0xd0
    _Bool _isAccsStart;	// 216 = 0xd8
}

- (void).cxx_destruct;
- (id)sendRequestWithContext:(id)arg1 error:(id *)arg2;
- (void)sendBizAck:(id)arg1 type:(long long)arg2 result:(_Bool)arg3;
- (id)serviceId;
- (void)proccessNotifyPackHeadType:(long long)arg1 bodyObject:(id)arg2;
- (void)proccessNotifyPack:(id)arg1;
- (void)proccessNotifyMessageList:(id)arg1;
- (void)proccessNotifyData:(id)arg1 dataId:(id)arg2;
@property(nonatomic) _Bool isAccsStart; // @synthesize isAccsStart=_isAccsStart;
- (void)stopBiz;
- (void)resetBiz;
- (void)startBiz;
- (void)registerPacketParse:(long long)arg1 useClass:(Class)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
