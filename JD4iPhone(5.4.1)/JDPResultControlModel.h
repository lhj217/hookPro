//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBModel.h"

@class NSArray, NSString;

@interface JDPResultControlModel : CBModel
{
    NSString *_msgTitle;
    NSString *_msgContent;
    NSArray *_controllerArray;
    NSString *_errorCode;
}

@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSArray *controllerArray; // @synthesize controllerArray=_controllerArray;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(copy, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
- (void).cxx_destruct;

@end
