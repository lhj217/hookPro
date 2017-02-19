//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IMOfficalAccoutsServiceDelegate-Protocol.h"
#import "MUKButtonActionCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface IMOfficalListController : UIViewController <UITableViewDataSource, UITableViewDelegate, IMOfficalAccoutsServiceDelegate, MUKButtonActionCellDelegate>
{
    UITableView *_innerTableView;	// 8 = 0x8
    NSMutableArray *_subsribedAccouts;	// 16 = 0x10
    NSMutableArray *_unsubsribedAccouts;	// 24 = 0x18
    unsigned long long _lastTapTime;	// 32 = 0x20
}

@property(nonatomic) unsigned long long lastTapTime; // @synthesize lastTapTime=_lastTapTime;
@property(retain, nonatomic) NSMutableArray *unsubsribedAccouts; // @synthesize unsubsribedAccouts=_unsubsribedAccouts;
@property(retain, nonatomic) NSMutableArray *subsribedAccouts; // @synthesize subsribedAccouts=_subsribedAccouts;
@property(retain, nonatomic) UITableView *innerTableView; // @synthesize innerTableView=_innerTableView;
- (void).cxx_destruct;
- (void)actionCell:(id)arg1 buttonDidClickAtIdentifier:(id)arg2;
- (void)officalAccountInfoDeleted:(id)arg1;
- (void)officalAccountInfoUpdated:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)spmStringForCell:(id)arg1 withCellModel:(id)arg2;
- (id)spmCntStringForCell:(id)arg1 withCellModel:(id)arg2;
- (void)checkUnreadAndPostNotifiy;
- (void)innerHandleWithSearchResultItems:(id)arg1 needHandleAccounts:(id)arg2 withCellModel:(id)arg3 section:(long long)arg4;
- (void)innerHandleDeletedOfficalAccountInfo:(id)arg1;
- (void)innerHandleUpdatedOfficalAccountInfo:(id)arg1;
- (void)updateRelationForOfficalAccountInfo:(id)arg1 withIsSubscribe:(_Bool)arg2 isPush:(_Bool)arg3;
- (void)innerLoadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
