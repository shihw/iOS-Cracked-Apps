//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQDynamicBusiHotWordModel, UILabel;

@interface FTSHotWordViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    QQDynamicBusiHotWordModel *_cellModel;
}

@property(retain, nonatomic) QQDynamicBusiHotWordModel *cellModel; // @synthesize cellModel=_cellModel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
