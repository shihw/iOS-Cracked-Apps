//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMContentTagView, NMShow, UIImage, UIImageView, UILabel;

@interface NMArtistShowCell : NMCommonCell
{
    UILabel *_titleFirstLabel;
    UILabel *_titleSecondLabel;
    UILabel *_dateLabel;
    NMContentTagView *_tagView;
    UIImageView *_showCoverImageView;
    UIImage *_coverImage;
    UIImageView *_cornerImageView;
    NMShow *_show;
}

+ (double)cellSeparatorInsetLeft;
+ (double)cellWidth;
+ (double)cellHeight;
@property(retain, nonatomic) NMShow *show; // @synthesize show=_show;
- (void).cxx_destruct;
- (void)setShow:(id)arg1 withTag:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

