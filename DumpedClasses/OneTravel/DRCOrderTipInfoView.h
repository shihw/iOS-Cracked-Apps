//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTTAttributedLabel, UIImageView, UILabel;

@interface DRCOrderTipInfoView : UIView
{
    UIImageView *_fetchCarIconView;
    UILabel *_fetchCarLabel;
    TTTAttributedLabel *_fetchCarDetailLabel;
    UIImageView *_tipIconView;
    UILabel *_tipLabel;
    TTTAttributedLabel *_tipDetailLabel;
    UIView *_singleLineView;
}

@property(retain, nonatomic) UIView *singleLineView; // @synthesize singleLineView=_singleLineView;
@property(retain, nonatomic) TTTAttributedLabel *tipDetailLabel; // @synthesize tipDetailLabel=_tipDetailLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipIconView; // @synthesize tipIconView=_tipIconView;
@property(retain, nonatomic) TTTAttributedLabel *fetchCarDetailLabel; // @synthesize fetchCarDetailLabel=_fetchCarDetailLabel;
@property(retain, nonatomic) UILabel *fetchCarLabel; // @synthesize fetchCarLabel=_fetchCarLabel;
@property(retain, nonatomic) UIImageView *fetchCarIconView; // @synthesize fetchCarIconView=_fetchCarIconView;
- (void).cxx_destruct;
- (double)heightForText:(id)arg1 withFont:(id)arg2 labelWidth:(double)arg3;
- (double)heightForTipView;
- (void)updateOrderTipInfoViewWithFetchCarTitle:(id)arg1 fetchCarDeTail:(id)arg2 tipTitle:(id)arg3 tipDetail:(id)arg4;
- (void)makeConstraints;
- (id)init;

@end

