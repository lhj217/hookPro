//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveWsearchItemModel : TBJSONModel
{
    NSString *_title;	// 8 = 0x8
    NSString *_item_id;	// 16 = 0x10
    NSString *_price;	// 24 = 0x18
    NSString *_pic_path;	// 32 = 0x20
    NSString *_auctionURL;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *auctionURL; // @synthesize auctionURL=_auctionURL;
@property(copy, nonatomic) NSString *pic_path; // @synthesize pic_path=_pic_path;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
