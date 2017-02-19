//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDShippingAddressModel.h"

@class NSNumber, NSString;

@interface JDEasyBuyAddressModel : JDShippingAddressModel
{
    _Bool _easyBuyFlag;
    _Bool _defaultAndEasyBuyFlag;
    NSString *_alias;
    NSNumber *_paymentID;
    NSNumber *_picksiteID;
    NSNumber *_shipmentID;
    NSString *_picksiteName;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) _Bool defaultAndEasyBuyFlag; // @synthesize defaultAndEasyBuyFlag=_defaultAndEasyBuyFlag;
@property(nonatomic) _Bool easyBuyFlag; // @synthesize easyBuyFlag=_easyBuyFlag;
@property(copy, nonatomic) NSString *picksiteName; // @synthesize picksiteName=_picksiteName;
@property(retain, nonatomic) NSNumber *shipmentID; // @synthesize shipmentID=_shipmentID;
@property(retain, nonatomic) NSNumber *picksiteID; // @synthesize picksiteID=_picksiteID;
@property(retain, nonatomic) NSNumber *paymentID; // @synthesize paymentID=_paymentID;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;

@end
