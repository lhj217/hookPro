//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDImageView, NSDictionary, UILabel;

@interface MDShareGroupCell : UITableViewCell
{
    NSDictionary *dataDict;
    UILabel *titleLabel;
    MDImageView *thumbImageView;
}

+ (double)heightOfCell;
@property(retain, nonatomic) MDImageView *thumbImageView; // @synthesize thumbImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict;
- (void).cxx_destruct;
- (void)configureSubViewWithDictionary:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
