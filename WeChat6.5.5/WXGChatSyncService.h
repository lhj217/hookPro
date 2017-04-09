//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WXGChatSyncDataPackerDelegate-Protocol.h"

@class NSDate, NSString, WXGChatSyncDataPacker;

__attribute__((visibility("hidden")))
@interface WXGChatSyncService : MMService <ICdnComMgrExt, PBMessageObserverDelegate, WXGChatSyncDataPackerDelegate, MMService>
{
    NSString *m_uploadingFileName;
    NSString *m_uploadingFilePath;
    WXGChatSyncDataPacker *m_dataPacker;
    _Bool m_startSync;
    long long m_sessionListCount;
    long long m_sessionInfoCount;
    long long m_msgCount;
    _Bool m_pcSyncClose;
    _Bool m_macSyncClose;
    unsigned int m_dataSize;
    NSDate *m_startSyncDate;
}

- (void).cxx_destruct;
- (void)onChatSyncDataPackFinishWithFilePath:(id)arg1;
- (void)onChatSyncDataPackStart;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (_Bool)sendAppMessageWith:(id)arg1;
- (void)startUploadDataToCDNWithFilePath:(id)arg1;
- (void)stopSync;
- (void)startSyncWithType:(unsigned long long)arg1;
- (long long)getMsgCount;
- (long long)getSessionInfoCount;
- (long long)getSessionListCount;
- (void)p_checkABTest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
