//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WXStackTribeOperation : NSObject
{
    NSString *_tribeId;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
    NSString *_userInfo;	// 24 = 0x18
    NSDictionary *_params;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *tribeId; // @synthesize tribeId=_tribeId;
- (void).cxx_destruct;

@end
