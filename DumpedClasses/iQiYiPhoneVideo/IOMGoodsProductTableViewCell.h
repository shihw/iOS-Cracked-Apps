//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface IOMGoodsProductTableViewCell : UITableViewCell
{
    CDUnknownBlockType _handleGoodsClickAction;
    UIView *_lineView;
    UIImageView *_goodsImageView;
    UILabel *_goodsTitle;
    UILabel *_goodsPrice;
    UILabel *_goodsSaleQuantity;
    NSLayoutConstraint *_goodsTitleHeight;
    UIView *_productContentView;
    UIImageView *_goodsImageView1;
    UILabel *_goodsTitle1;
    UILabel *_goodsPrice1;
    UILabel *_goodsSaleQuantity1;
    NSLayoutConstraint *_goodsTitleHeight1;
    UIView *_productContentView1;
    UIView *_hlineView;
}

+ (double)cellViewHeightByType:(long long)arg1;
+ (struct CGSize)oneSize;
+ (double)hlineViewSpace;
@property(retain, nonatomic) UIView *hlineView; // @synthesize hlineView=_hlineView;
@property(retain, nonatomic) UIView *productContentView1; // @synthesize productContentView1=_productContentView1;
@property(retain, nonatomic) NSLayoutConstraint *goodsTitleHeight1; // @synthesize goodsTitleHeight1=_goodsTitleHeight1;
@property(retain, nonatomic) UILabel *goodsSaleQuantity1; // @synthesize goodsSaleQuantity1=_goodsSaleQuantity1;
@property(retain, nonatomic) UILabel *goodsPrice1; // @synthesize goodsPrice1=_goodsPrice1;
@property(retain, nonatomic) UILabel *goodsTitle1; // @synthesize goodsTitle1=_goodsTitle1;
@property(retain, nonatomic) UIImageView *goodsImageView1; // @synthesize goodsImageView1=_goodsImageView1;
@property(retain, nonatomic) UIView *productContentView; // @synthesize productContentView=_productContentView;
@property(retain, nonatomic) NSLayoutConstraint *goodsTitleHeight; // @synthesize goodsTitleHeight=_goodsTitleHeight;
@property(retain, nonatomic) UILabel *goodsSaleQuantity; // @synthesize goodsSaleQuantity=_goodsSaleQuantity;
@property(retain, nonatomic) UILabel *goodsPrice; // @synthesize goodsPrice=_goodsPrice;
@property(retain, nonatomic) UILabel *goodsTitle; // @synthesize goodsTitle=_goodsTitle;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(copy, nonatomic) CDUnknownBlockType handleGoodsClickAction; // @synthesize handleGoodsClickAction=_handleGoodsClickAction;
- (void).cxx_destruct;
- (void)creatTab:(id)arg1 action:(SEL)arg2;
- (void)__commonInit;
- (void)configUI:(id)arg1 recommendProductRight:(id)arg2;
- (void)goodsProductClickAction:(id)arg1;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

