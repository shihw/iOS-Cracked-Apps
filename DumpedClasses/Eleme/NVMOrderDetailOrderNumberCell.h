//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EODDetailBaseCardCell.h"

@class NVMOrderSnapshot, UIButton, UILabel;

@interface NVMOrderDetailOrderNumberCell : EODDetailBaseCardCell
{
    NVMOrderSnapshot *_snapShot;
    CDUnknownBlockType _copyOrderNumberSuccessAction;
    UILabel *_titleLabel;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType copyOrderNumberSuccessAction; // @synthesize copyOrderNumberSuccessAction=_copyOrderNumberSuccessAction;
@property(retain, nonatomic) NVMOrderSnapshot *snapShot; // @synthesize snapShot=_snapShot;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)clickButton;
- (id)verticalLine;
- (void)configViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

