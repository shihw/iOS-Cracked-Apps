//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBSearchImageView, UILabel;

@interface TBShopSearchItemCardView : UIView
{
    TBSearchImageView *_picImageView;
    UIView *_priceContainerView;
    UILabel *_priceLabel;
    NSString *_nid;
    NSString *_title;
    NSString *_RN;
    NSString *_abtest;
    NSString *_pageName;
    NSString *_keyword;
}

@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *abtest; // @synthesize abtest=_abtest;
@property(retain, nonatomic) NSString *RN; // @synthesize RN=_RN;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nid; // @synthesize nid=_nid;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *priceContainerView; // @synthesize priceContainerView=_priceContainerView;
@property(retain, nonatomic) TBSearchImageView *picImageView; // @synthesize picImageView=_picImageView;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)configWithItem:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
