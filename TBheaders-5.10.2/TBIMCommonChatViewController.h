//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBAVPlayerViewDelegate-Protocol.h"
#import "TBIMChatCellDelegate-Protocol.h"
#import "TBIMInputViewDelegate-Protocol.h"
#import "TBIMLoginerviceDelegate-Protocol.h"
#import "TBIMMessageServiceDelegate-Protocol.h"
#import "TBIMPhotoViewerContainerViewDataSource-Protocol.h"
#import "TBIMSessionServiceDelegate-Protocol.h"
#import "TBIMUserServiceDelegate-Protocol.h"
#import "TBNavigatorBehaviorProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GPUImageView, NSMutableArray, NSMutableDictionary, NSString, TBIMBusinessCardActionExecutor, TBIMChatCellModelConfig, TBIMChatLoadMoreView, TBIMInputView, TBIMPerformProxy, TBIMPhotoViewerContainerView, UIBarButtonItem, UIButton, UIImageView, UITableView, UITapGestureRecognizer;
@protocol TBIMAVMessage, TBIMLoginServiceAdapter, TBIMMessageAdapter, TBIMMessageServiceAdapter, TBIMSessionAdapter, TBIMSessionServiceAdapter;

@interface TBIMCommonChatViewController : UIViewController <TBIMMessageServiceDelegate, TBIMSessionServiceDelegate, UIActionSheetDelegate, TBIMChatCellDelegate, TBIMPhotoViewerContainerViewDataSource, TBAVPlayerViewDelegate, TBIMUserServiceDelegate, TBIMLoginerviceDelegate, UITableViewDelegate, UITableViewDataSource, TBNavigatorBehaviorProtocol, TBIMInputViewDelegate>
{
    TBIMInputView *_messageInputView;	// 8 = 0x8
    UITapGestureRecognizer *_messageTableViewTapRecognizer;	// 16 = 0x10
    id <TBIMAVMessage> _currentAudioMessage;	// 24 = 0x18
    UIBarButtonItem *_leftBarButtonItem;	// 32 = 0x20
    UIBarButtonItem *_rightBarButtonItem;	// 40 = 0x28
    _Bool _isOnlineMessage;	// 48 = 0x30
    _Bool _newMsgShouldSort;	// 49 = 0x31
    _Bool _bHaveMoreMessage;	// 50 = 0x32
    _Bool _bLoadingMessage;	// 51 = 0x33
    _Bool _isDataPrepared;	// 52 = 0x34
    _Bool _bPlayNextAudio;	// 53 = 0x35
    _Bool _isLoadImageFrontHasMore;	// 54 = 0x36
    _Bool _isLoadImageBackHasMore;	// 55 = 0x37
    _Bool _isAnimationScrolling;	// 56 = 0x38
    UITableView *_messageTableView;	// 64 = 0x40
    id <TBIMSessionAdapter> _session;	// 72 = 0x48
    id <TBIMSessionServiceAdapter> _sessionSrv;	// 80 = 0x50
    id <TBIMMessageServiceAdapter> _messageSvr;	// 88 = 0x58
    id <TBIMLoginServiceAdapter> _loginSvr;	// 96 = 0x60
    NSString *_sesssionID;	// 104 = 0x68
    NSString *_pageName;	// 112 = 0x70
    NSString *_moduleSPM;	// 120 = 0x78
    NSMutableArray *_list;	// 128 = 0x80
    unsigned long long _firstPageMessageNumber;	// 136 = 0x88
    UIImageView *_backgroundImage;	// 144 = 0x90
    NSString *_currentNewShareItem;	// 152 = 0x98
    NSString *_selfUserNick;	// 160 = 0xa0
    unsigned long long _functionConfig;	// 168 = 0xa8
    unsigned long long _inputConfig;	// 176 = 0xb0
    id <TBIMMessageAdapter> _reSendMessage;	// 184 = 0xb8
    TBIMPhotoViewerContainerView *_photoViewerContainerView;	// 192 = 0xc0
    TBIMBusinessCardActionExecutor *_businessCardActionExecutor;	// 200 = 0xc8
    UIButton *_unreadLocator;	// 208 = 0xd0
    TBIMChatCellModelConfig *_cellModelConfig;	// 216 = 0xd8
    TBIMChatLoadMoreView *_moreView;	// 224 = 0xe0
    NSMutableArray *_messageOperationQueue;	// 232 = 0xe8
    TBIMPerformProxy *_addPerformProxy;	// 240 = 0xf0
    TBIMPerformProxy *_afterScrollPerformProxy;	// 248 = 0xf8
    NSMutableDictionary *_menuClickDict;	// 256 = 0x100
    GPUImageView *_gpuHeadBackImageView;	// 264 = 0x108
}

@property(retain, nonatomic) GPUImageView *gpuHeadBackImageView; // @synthesize gpuHeadBackImageView=_gpuHeadBackImageView;
@property(retain, nonatomic) NSMutableDictionary *menuClickDict; // @synthesize menuClickDict=_menuClickDict;
@property(retain, nonatomic) TBIMPerformProxy *afterScrollPerformProxy; // @synthesize afterScrollPerformProxy=_afterScrollPerformProxy;
@property(retain, nonatomic) TBIMPerformProxy *addPerformProxy; // @synthesize addPerformProxy=_addPerformProxy;
@property(nonatomic) _Bool isAnimationScrolling; // @synthesize isAnimationScrolling=_isAnimationScrolling;
@property(retain, nonatomic) NSMutableArray *messageOperationQueue; // @synthesize messageOperationQueue=_messageOperationQueue;
@property(retain, nonatomic) TBIMChatLoadMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) TBIMChatCellModelConfig *cellModelConfig; // @synthesize cellModelConfig=_cellModelConfig;
@property(retain, nonatomic) UIButton *unreadLocator; // @synthesize unreadLocator=_unreadLocator;
@property(retain, nonatomic) TBIMBusinessCardActionExecutor *businessCardActionExecutor; // @synthesize businessCardActionExecutor=_businessCardActionExecutor;
@property(nonatomic) __weak TBIMPhotoViewerContainerView *photoViewerContainerView; // @synthesize photoViewerContainerView=_photoViewerContainerView;
@property(nonatomic) _Bool isLoadImageBackHasMore; // @synthesize isLoadImageBackHasMore=_isLoadImageBackHasMore;
@property(nonatomic) _Bool isLoadImageFrontHasMore; // @synthesize isLoadImageFrontHasMore=_isLoadImageFrontHasMore;
@property(retain, nonatomic) id <TBIMMessageAdapter> reSendMessage; // @synthesize reSendMessage=_reSendMessage;
@property(nonatomic) _Bool bPlayNextAudio; // @synthesize bPlayNextAudio=_bPlayNextAudio;
@property(nonatomic) unsigned long long inputConfig; // @synthesize inputConfig=_inputConfig;
@property(nonatomic) unsigned long long functionConfig; // @synthesize functionConfig=_functionConfig;
@property(nonatomic) _Bool isDataPrepared; // @synthesize isDataPrepared=_isDataPrepared;
@property(nonatomic) _Bool bLoadingMessage; // @synthesize bLoadingMessage=_bLoadingMessage;
@property(nonatomic) _Bool bHaveMoreMessage; // @synthesize bHaveMoreMessage=_bHaveMoreMessage;
@property(copy, nonatomic) NSString *selfUserNick; // @synthesize selfUserNick=_selfUserNick;
@property(nonatomic) _Bool newMsgShouldSort; // @synthesize newMsgShouldSort=_newMsgShouldSort;
@property(retain, nonatomic) NSString *currentNewShareItem; // @synthesize currentNewShareItem=_currentNewShareItem;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) unsigned long long firstPageMessageNumber; // @synthesize firstPageMessageNumber=_firstPageMessageNumber;
@property(nonatomic) _Bool isOnlineMessage; // @synthesize isOnlineMessage=_isOnlineMessage;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *moduleSPM; // @synthesize moduleSPM=_moduleSPM;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *sesssionID; // @synthesize sesssionID=_sesssionID;
@property(retain, nonatomic) id <TBIMLoginServiceAdapter> loginSvr; // @synthesize loginSvr=_loginSvr;
@property(retain, nonatomic) id <TBIMMessageServiceAdapter> messageSvr; // @synthesize messageSvr=_messageSvr;
@property(retain, nonatomic) id <TBIMSessionServiceAdapter> sessionSrv; // @synthesize sessionSrv=_sessionSrv;
@property(retain, nonatomic) id <TBIMSessionAdapter> session; // @synthesize session=_session;
@property(retain, nonatomic) UITableView *messageTableView; // @synthesize messageTableView=_messageTableView;
- (void).cxx_destruct;
- (void)changePageName:(id)arg1;
- (id)uniquePageIdForNavigatorBehavior;
- (id)localImageWithPhotoModel:(id)arg1;
- (void)backPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (void)frontPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (_Bool)isBackHasMore;
- (_Bool)isFrontHasMore;
- (long long)photoViewerRequestOffset;
- (long long)photoViewerRequestCount;
- (void)tableViewTouchEndedEmptyPart:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)initSession;
- (void)setSessionId:(id)arg1;
- (void)messageViewCell:(id)arg1 deleteWWMessage:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)prepareData;
- (void)updateCellHeader:(id)arg1;
- (void)showOfflineTip;
- (void)forceDisconnect;
- (void)loginFailed;
- (void)loginSuccess;
- (void)LookBigImage:(id)arg1 withMessage:(id)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)sensorStateChange:(id)arg1;
- (void)setCurrentPlayingAudioMessageWithCellModel:(id)arg1;
- (void)handleMessageViewTap:(id)arg1;
- (id)findValidLastMsg:(long long)arg1;
- (void)updateNaviBar;
- (void)UserChange:(id)arg1;
- (void)SessionChange:(id)arg1;
- (void)playerViewShowFailView:(id)arg1 error:(id)arg2;
- (void)playerViewDidTap:(id)arg1;
- (void)playerViewDidEndPlaying:(id)arg1;
- (void)messageViewCell:(id)arg1 urlDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 needBindSPMView:(id)arg2 chatCellSPMType:(unsigned long long)arg3;
- (void)messageViewCell:(id)arg1 collectDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 likeDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 itemLinkDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 bubbleDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 bubbleDidLongTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 cellDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 headImageDidTapped:(id)arg2;
- (void)messageViewCell:(id)arg1 reSendIMMessage:(id)arg2;
- (void)messageViewCell:(id)arg1 forwardingIMMessage:(id)arg2;
- (void)messageViewCell:(id)arg1 deleteIMMessage:(id)arg2;
- (void)messageViewCell:(id)arg1 copyIMMessage:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)inputViewWillOpenKeyboard:(id)arg1;
- (void)inputViewWillCloseKeyboard:(id)arg1;
- (void)inputViewStopGlobalSoundPlay:(id)arg1;
- (void)inputView:(id)arg1 emoticonToSend:(id)arg2;
- (void)inputView:(id)arg1 recorderToSend:(id)arg2;
- (void)inputView:(id)arg1 textToSend:(id)arg2 withPluginList:(id)arg3;
- (void)inputView:(id)arg1 willChangeToFrame:(struct CGRect)arg2 animateDuration:(double)arg3;
- (void)messageLoadShareItemMessageResult:(id)arg1 andMsg:(id)arg2;
- (void)messageLoadUnreadMessageResult:(id)arg1 andMsg:(id)arg2 unreadMsgCount:(long long)arg3;
- (void)messageLoadImageMessageFail:(id)arg1 currentMessage:(id)arg2 isFront:(_Bool)arg3;
- (void)messageLoadImageMessageResult:(id)arg1 currentMessage:(id)arg2 andMsg:(id)arg3 haveMore:(_Bool)arg4 isFront:(_Bool)arg5;
- (void)needReloadMessage:(id)arg1;
- (void)messageLoadFail:(id)arg1 error:(id)arg2;
- (id)getVisableCellByMessageCell:(id)arg1;
- (void)messageLoadResult:(id)arg1 andMsg:(id)arg2 haveMore:(_Bool)arg3;
- (void)performMessageDel:(id)arg1;
- (void)performMessageUpdate:(id)arg1 atIndex:(long long)arg2;
- (void)performMessageAdd:(id)arg1 sort:(_Bool)arg2;
- (void)proccessMessageUpdate:(id)arg1 sort:(_Bool)arg2;
- (void)reSendMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)messageClearAll:(id)arg1;
- (void)wwTemplateFinishLayoutNotification:(id)arg1;
- (void)messageContentDownLoad:(id)arg1;
- (void)messageChange:(id)arg1;
- (void)messageDel:(id)arg1;
- (void)messageAdd:(id)arg1;
- (void)executeMessageOperationQueue;
- (void)realWWTemplateFinishLayoutWithMessage:(id)arg1;
- (void)realMessageContentDownLoad:(id)arg1;
- (void)realMessageChange:(id)arg1;
- (void)realMessageDel:(id)arg1;
- (void)realMessageAdd:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)reflushStyle;
- (void)viewDidLoad;
- (void)applicationWillResignActiveNotificationShouldShutdown:(id)arg1;
- (void)applicationDidBecomeActiveShouldRestart:(id)arg1;
- (void)resignActive:(id)arg1;
- (void)dealloc;
- (void)updateShareItemCountForList:(id)arg1;
- (void)showShareItemUnreadedCountSysMsg;
- (void)saveCheckShareItemUnreadedCountTimeIfNeed:(_Bool)arg1;
- (_Bool)needCheckShareItemUnreadedCount;
- (void)bindSPMForLocationBar:(id)arg1;
- (void)bindSPMForP2PItemLinkView:(id)arg1;
- (void)bindSPMForLikeView:(id)arg1;
- (void)bindSPMForReSendView:(id)arg1;
- (void)bindSPMForAvatarView:(id)arg1;
- (void)bindSPMForChatBubble:(id)arg1 messageAdapter:(id)arg2;
- (void)updateCurrentVisibleCellsWithUser:(id)arg1;
- (id)chatCellModelWithArray:(id)arg1 message:(id)arg2 index:(long long)arg3;
- (void)setupContentViews;
- (void)scrollToMessageTableViewBottom;
- (void)scrollToMessageTableViewBottomWithContentSize:(_Bool)arg1;
- (void)scrollToMessageTableViewBottomCompletion;
- (void)viewDidLayoutSubviews;
- (void)reloadDataSourceAndTable;
- (void)_loadMore:(id)arg1;
- (void)hideUnreadLocator;
- (void)showUnreadLocatorWithUnreadNumber:(long long)arg1 withRealMsgCount:(unsigned long long)arg2;
- (void)unreadLocatorClick:(id)arg1;
@property(nonatomic) _Bool hasAtmosphre;
- (void)addBackgroundImage;
- (void)showBackIconImage:(id)arg1;
- (id)currentMessageList;
- (void)ConfigParams:(unsigned long long)arg1 menu:(unsigned long long)arg2 input:(unsigned long long)arg3 showname:(unsigned long long)arg4 showSendIdentity:(_Bool)arg5 showReceiveIdentity:(_Bool)arg6 newMsgShouldSort:(_Bool)arg7;
- (id)initWithSessionInfo:(id)arg1 sessionType:(int)arg2 pageName:(id)arg3 moduleSPM:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
