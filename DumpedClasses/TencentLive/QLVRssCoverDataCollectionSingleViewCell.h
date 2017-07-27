//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QLHTMLFontLabel, QLJCECoverItemData, QLSImageView, UIImageView, UILabel;

@interface QLVRssCoverDataCollectionSingleViewCell : UICollectionViewCell
{
    UIImageView *_albumImgView;
    QLSImageView *_coverImgView;
    QLHTMLFontLabel *_titleLbl;
    UILabel *_countLbl;
    QLJCECoverItemData *_coverItemData;
}

+ (struct CGSize)sizeForCoverCollectionView;
@property(retain, nonatomic) QLJCECoverItemData *coverItemData; // @synthesize coverItemData=_coverItemData;
@property(retain, nonatomic) UILabel *countLbl; // @synthesize countLbl=_countLbl;
@property(retain, nonatomic) QLHTMLFontLabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) QLSImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) UIImageView *albumImgView; // @synthesize albumImgView=_albumImgView;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
