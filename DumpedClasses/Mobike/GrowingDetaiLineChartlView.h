//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GrowingRealtimeLineChartView, NSMutableArray;

@interface GrowingDetaiLineChartlView : UIView
{
    CDUnknownBlockType _onLoadFinish;
    GrowingRealtimeLineChartView *_chartView;
    NSMutableArray *_labelNumbers;
}

@property(retain, nonatomic) NSMutableArray *labelNumbers; // @synthesize labelNumbers=_labelNumbers;
@property(retain, nonatomic) GrowingRealtimeLineChartView *chartView; // @synthesize chartView=_chartView;
@property(copy, nonatomic) CDUnknownBlockType onLoadFinish; // @synthesize onLoadFinish=_onLoadFinish;
- (void).cxx_destruct;
- (void)updateNumbersWithData:(id)arg1;
- (void)loadElement:(id)arg1;
- (id)humanReadableNumberComponents:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

