//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSString;

@interface TBOPublishCommentRequest : TBMTOPBaseRequest
{
    NSString *_userId;	// 8 = 0x8
    NSString *_targetType;	// 16 = 0x10
    NSString *_subType;	// 24 = 0x18
    NSString *_targetId;	// 32 = 0x20
    NSString *_accountId;	// 40 = 0x28
    NSString *_parentId;	// 48 = 0x30
    NSString *_type;	// 56 = 0x38
    NSString *_content;	// 64 = 0x40
    NSString *_extSymbol;	// 72 = 0x48
    NSString *_topicId;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)init;

@end
