//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DanMuSettingBaseView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPageControl, UIScrollView;

@interface DanMuSettingView : DanMuSettingBaseView <UIScrollViewDelegate>
{
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void).cxx_destruct;
- (void)emotionSwitch:(id)arg1;
- (void)positionClick:(id)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)loadLeftView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

