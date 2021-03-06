//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UILabel;

@interface CTCallCollectionViewCell : UICollectionViewCell
{
    long long _cellStyle;
    UILabel *_verticalLine;
    UILabel *_horizonLine;
    UIButton *_content;
}

@property(retain, nonatomic) UIButton *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *horizonLine; // @synthesize horizonLine=_horizonLine;
@property(retain, nonatomic) UILabel *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (void)setLayer:(id)arg1 withMask:(id)arg2;
- (void)resetShadow;
- (void)setShadowWithPath:(id)arg1;
- (void)layoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

