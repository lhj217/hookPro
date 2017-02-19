//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol ACDSNotifyExtHandlerProtocol;

@protocol ACDSSetupProtocol <NSObject>
- (NSString *)loginToken;
- (NSString *)currentUserId;
- (NSString *)appUserLoginEventName;
- (NSString *)appTTID;
- (NSString *)appVersion;
- (int)appEnvironment;

@optional
- (id <ACDSNotifyExtHandlerProtocol>)sessionInvalidHandler;
- (NSString *)appKey;
@end
