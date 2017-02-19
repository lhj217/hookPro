//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVJSBridgeCallbackDelegate-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXWindVaneModule : NSObject <WVJSBridgeCallbackDelegate, WXModuleProtocol>
{
    WXSDKInstance *weexInstance;	// 8 = 0x8
    NSString *_successCallback;	// 16 = 0x10
    NSString *_failureCallback;	// 24 = 0x18
    NSString *_ifid;	// 32 = 0x20
}

+ (void)releaseBridge;
+ (id)wx_export_method_30;
@property(retain, nonatomic) NSString *ifid; // @synthesize ifid=_ifid;
@property(retain, nonatomic) NSString *failureCallback; // @synthesize failureCallback=_failureCallback;
@property(retain, nonatomic) NSString *successCallback; // @synthesize successCallback=_successCallback;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)onFireEvent:(id)arg1 withParam:(id)arg2;
- (void)callback:(id)arg1 withRet:(id)arg2 withResult:(id)arg3 success:(_Bool)arg4;
- (void)onFailure:(id)arg1 withRet:(id)arg2 withResult:(id)arg3;
- (void)onSuccess:(id)arg1 withRet:(id)arg2 withResult:(id)arg3;
- (id)getIfid;
- (void)call:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)URL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
