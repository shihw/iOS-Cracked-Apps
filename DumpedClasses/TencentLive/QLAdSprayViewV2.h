//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLAdSprayView.h"

@class TADDspLabel, TADItemInfo, UIFont, UIImageView, UILabel;

@interface QLAdSprayViewV2 : QLAdSprayView
{
    UIFont *_titleFont;
    UILabel *_mainTitleLabel;
    UIImageView *_titleBgView;
    TADItemInfo *_adItem;
    TADDspLabel *_dspLabel;
}

@property(retain, nonatomic) TADDspLabel *dspLabel; // @synthesize dspLabel=_dspLabel;
@property(retain, nonatomic) TADItemInfo *adItem; // @synthesize adItem=_adItem;
@property(retain, nonatomic) UIImageView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)addTitle;
- (void)updateContextByADBulletinBoard:(id)arg1;

@end

