//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, TTAsyncCornerImageView;

@interface TTCertificationPreviewView : SSThemedView
{
    SSThemedLabel *_titleLabel;
    TTAsyncCornerImageView *_iconView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_occupationalLabel;
    SSThemedView *_topLine;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) SSThemedLabel *occupationalLabel; // @synthesize occupationalLabel=_occupationalLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTAsyncCornerImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAuthType:(id)arg1;
- (void)setPreViewText:(id)arg1;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

