//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSDiscoverBaseCell.h"

#import "UIScrollViewDelegate.h"

@class MarketingActivitiesInformationModel, NSString, UIPageControl, UIScrollView;

@interface CTSActivityCell : CTSDiscoverBaseCell <UIScrollViewDelegate>
{
    MarketingActivitiesInformationModel *_model;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MarketingActivitiesInformationModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)jumpAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)cellHeight;
- (void)setContentWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

