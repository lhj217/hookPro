//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDIcon, JDImageView, OrderWareModel, UIButton, UIImageView, UILabel, UIView;

@interface OrderDetailWareTableViewCell : UITableViewCell
{
    JDImageView *wareImageView;
    UILabel *wareInfoLabel;
    UILabel *wareNumLabel;
    UILabel *warePriceLabel;
    JDIcon *internationalMark;
    JDIcon *samMark;
    UIButton *_addCartButton;
    UIView *_configurableView;
    _Bool _isSamOrder;
    int _wareListNum;
    UIImageView *_lineView;
    OrderWareModel *_model;
    long long _internationalType;
    long long _isShowShoppingCart;
    id <OrderDetailWareTableViewCellDelegate> _cellDelegate;
    UILabel *_colorLabel;
}

@property(nonatomic) _Bool isSamOrder; // @synthesize isSamOrder=_isSamOrder;
@property(nonatomic) int wareListNum; // @synthesize wareListNum=_wareListNum;
@property(retain, nonatomic) UILabel *colorLabel; // @synthesize colorLabel=_colorLabel;
@property(nonatomic) id <OrderDetailWareTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) long long isShowShoppingCart; // @synthesize isShowShoppingCart=_isShowShoppingCart;
@property(nonatomic) long long internationalType; // @synthesize internationalType=_internationalType;
@property(retain, nonatomic) OrderWareModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) JDIcon *internationalMark; // @synthesize internationalMark;
@property(retain, nonatomic) UILabel *warePriceLabel; // @synthesize warePriceLabel;
@property(retain, nonatomic) UILabel *wareNumLabel; // @synthesize wareNumLabel;
@property(retain, nonatomic) UILabel *wareInfoLabel; // @synthesize wareInfoLabel;
@property(retain, nonatomic) JDImageView *wareImageView; // @synthesize wareImageView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setJDEXPOMTAWithkey:(id)arg1 eventId:(id)arg2 param:(id)arg3;
- (void)dealloc;
- (void)addToCart;
- (void)setConfigurableView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
