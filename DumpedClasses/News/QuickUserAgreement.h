//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel;

@interface QuickUserAgreement : SSThemedView
{
    SSThemedButton *_radioButton;
    SSThemedLabel *_leftLabel;
    SSThemedButton *_termButton;
}

@property(retain, nonatomic) SSThemedButton *termButton; // @synthesize termButton=_termButton;
@property(retain, nonatomic) SSThemedLabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) SSThemedButton *radioButton; // @synthesize radioButton=_radioButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

