//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, aluInputBox, aluLoginBox;

@protocol aluLoginBoxDelegate <NSObject>
- (NSString *)aluLoginBox:(aluLoginBox *)arg1 loginIdOfHistoryItemAtIndex:(long long)arg2;

@optional
- (void)aluInputBoxTextDidBegin:(aluInputBox *)arg1;
- (void)aluIputBoxChangeToAlipay;
- (void)aluIputBoxChangeToTaoBao;
- (void)aluLoginBoxRightAccessoryClicked;
- (void)aluLoginBoxWhenAllHistoryUsersRemoved;
- (void)aluLoginPwdBox:(aluLoginBox *)arg1;
- (void)aluLoginLoginIdBox:(aluLoginBox *)arg1 replacementString:(NSString *)arg2;
- (void)aluLoginBox:(aluLoginBox *)arg1 didDeleteHistoryAtIndex:(long long)arg2;
- (_Bool)aluLoginBox:(aluLoginBox *)arg1 shouldDeleteHistoryAtIndex:(long long)arg2;
- (void)aluLoginBoxFindBackPwdClicked:(aluLoginBox *)arg1;
- (void)aluLoginBoxStartAnimation:(aluLoginBox *)arg1 changeToFrame:(struct CGRect)arg2 animation:(void (^)(void))arg3;
- (void)aluLoginBoxShouldGoLogin:(aluLoginBox *)arg1;
- (void)aluLoginBox:(aluLoginBox *)arg1 inputAvailable:(_Bool)arg2;
@end
