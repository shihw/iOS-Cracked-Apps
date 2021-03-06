//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, QXCardMonthModel, UICollectionView, UICollectionViewFlowLayout, UIImageView, UILabel, UIProgressView, UIView;

@interface QXCardRankCell : QiXiuBaseCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UILabel *_clockNumber;
    UILabel *_clockNumberTip;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_seperatorView;
    UIView *_leveBackgroundView;
    UIImageView *_leveView;
    UILabel *_continueExperience;
    UILabel *_needExperience;
    UIProgressView *_experienceProgress;
    UILabel *_continueClock;
    UIView *_continueExperienceView;
    QXCardMonthModel *_cardMonthModel;
}

@property(retain, nonatomic) QXCardMonthModel *cardMonthModel; // @synthesize cardMonthModel=_cardMonthModel;
@property(retain, nonatomic) UIView *continueExperienceView; // @synthesize continueExperienceView=_continueExperienceView;
@property(retain, nonatomic) UILabel *continueClock; // @synthesize continueClock=_continueClock;
@property(retain, nonatomic) UIProgressView *experienceProgress; // @synthesize experienceProgress=_experienceProgress;
@property(retain, nonatomic) UILabel *needExperience; // @synthesize needExperience=_needExperience;
@property(retain, nonatomic) UILabel *continueExperience; // @synthesize continueExperience=_continueExperience;
@property(retain, nonatomic) UIImageView *leveView; // @synthesize leveView=_leveView;
@property(retain, nonatomic) UIView *leveBackgroundView; // @synthesize leveBackgroundView=_leveBackgroundView;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *clockNumberTip; // @synthesize clockNumberTip=_clockNumberTip;
@property(retain, nonatomic) UILabel *clockNumber; // @synthesize clockNumber=_clockNumber;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)experienceAnimation;
- (void)layoutRankView:(id)arg1;
- (void)reloadCellData:(id)arg1 key:(id)arg2;
- (void)initUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

