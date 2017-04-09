//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMBizFileMatchNode : NSObject
{
    _Bool m_isRegex;
    _Bool m_isIndexed;
    int m_bizType;
    int m_fileTypeInUse;
    int m_pathPrefixType;
    int m_storeTimeType;
    int m_delUnknowOp;
    NSString *m_text;
    NSMutableArray *m_arrBizMatchNode;
    NSDictionary *m_dicTextBizMatchNode;
    NSMutableArray *m_arrRegexBizMatchNode;
}

+ (_Bool)isCertainBizType:(int)arg1;
+ (id)nodeWithText:(id)arg1;
@property(nonatomic) int m_delUnknowOp; // @synthesize m_delUnknowOp;
@property(nonatomic) int m_storeTimeType; // @synthesize m_storeTimeType;
@property(nonatomic) int m_pathPrefixType; // @synthesize m_pathPrefixType;
@property(nonatomic) _Bool m_isIndexed; // @synthesize m_isIndexed;
@property(retain, nonatomic) NSMutableArray *m_arrRegexBizMatchNode; // @synthesize m_arrRegexBizMatchNode;
@property(retain, nonatomic) NSDictionary *m_dicTextBizMatchNode; // @synthesize m_dicTextBizMatchNode;
@property(nonatomic) int m_fileTypeInUse; // @synthesize m_fileTypeInUse;
@property(nonatomic) int m_bizType; // @synthesize m_bizType;
@property(retain, nonatomic) NSMutableArray *m_arrBizMatchNode; // @synthesize m_arrBizMatchNode;
@property(retain, nonatomic) NSString *m_text; // @synthesize m_text;
@property(nonatomic) _Bool m_isRegex; // @synthesize m_isRegex;
- (void).cxx_destruct;
- (_Bool)hasDelUknowDataOperation;
- (_Bool)isDelUnknowData;
- (_Bool)isMatchWithName:(id)arg1;
- (void)indexChildMatchNode;
- (_Bool)isMarkBizType;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
