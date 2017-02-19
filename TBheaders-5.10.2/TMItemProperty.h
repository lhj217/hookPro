//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SearchMtopResponseProtocal-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TMItemProperty : NSObject <SearchMtopResponseProtocal>
{
    NSString *_propertyKid;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    long long _line;	// 32 = 0x20
    NSArray *_valueList;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *valueList; // @synthesize valueList=_valueList;
@property(nonatomic) long long line; // @synthesize line=_line;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *propertyKid; // @synthesize propertyKid=_propertyKid;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
