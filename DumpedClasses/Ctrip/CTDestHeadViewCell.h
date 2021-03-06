//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseCell.h"

#import "CTAdBannerBrowserDatasource.h"
#import "CTAdBannerBrowserDelegate.h"

@class CTAdBannerBrowser, NSMutableArray, NSString;

@interface CTDestHeadViewCell : CTDestBaseCell <CTAdBannerBrowserDatasource, CTAdBannerBrowserDelegate>
{
    CDUnknownBlockType _headBlock;
    NSMutableArray *_adDataArray;
    CTAdBannerBrowser *_bottomAdScrollView;
}

+ (double)heightForCell:(int)arg1 withModel:(id)arg2;
@property(retain, nonatomic) CTAdBannerBrowser *bottomAdScrollView; // @synthesize bottomAdScrollView=_bottomAdScrollView;
@property(retain, nonatomic) NSMutableArray *adDataArray; // @synthesize adDataArray=_adDataArray;
@property(copy, nonatomic) CDUnknownBlockType headBlock; // @synthesize headBlock=_headBlock;
- (void).cxx_destruct;
- (void)refreshCell:(int)arg1 withModel:(id)arg2;
- (void)bannerScrollView:(id)arg1 didClickBannerAtPage:(long long)arg2;
- (id)bannerScrollView:(id)arg1 adViewAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

