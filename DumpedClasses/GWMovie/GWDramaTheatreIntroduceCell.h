//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWCinemaBaseCell.h"

@class GWDramaTheatreIntroduceCellObject, UIView;

@interface GWDramaTheatreIntroduceCell : GWCinemaBaseCell
{
    GWDramaTheatreIntroduceCellObject *_cellObject;
    UIView *_backView;
}

+ (double)rowHeightWithCellObject:(id)arg1;
+ (id)createDescLabelWithString:(id)arg1;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) GWDramaTheatreIntroduceCellObject *cellObject; // @synthesize cellObject=_cellObject;
- (void).cxx_destruct;
- (double)heightIntroduceView:(id)arg1;
- (void)showCellWithCellObject:(id)arg1;
- (void)layoutSubviews;
- (void)createAllViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

