//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber, NSString, QYPPPingbackModel;

@interface QYPPSubSearchManager : NSObject
{
    _Bool _isAcceptCorrection;
    long long _nextPageNumber;
    NSString *_keyword;
    NSMutableArray *_circleArray;
    NSMutableArray *_paopaoArray;
    NSNumber *_circleCount;
    NSNumber *_paopaoCount;
    NSMutableArray *_pingbackArray;
    NSNumber *_durationTime;
    QYPPPingbackModel *_pingbackCircle;
    QYPPPingbackModel *_pingbackPaopao;
    double _startSearchTime;
    double _endSearchTime;
}

@property(nonatomic) double endSearchTime; // @synthesize endSearchTime=_endSearchTime;
@property(nonatomic) double startSearchTime; // @synthesize startSearchTime=_startSearchTime;
@property(nonatomic) _Bool isAcceptCorrection; // @synthesize isAcceptCorrection=_isAcceptCorrection;
@property(copy, nonatomic) QYPPPingbackModel *pingbackPaopao; // @synthesize pingbackPaopao=_pingbackPaopao;
@property(copy, nonatomic) QYPPPingbackModel *pingbackCircle; // @synthesize pingbackCircle=_pingbackCircle;
@property(copy, nonatomic) NSNumber *durationTime; // @synthesize durationTime=_durationTime;
@property(retain, nonatomic) NSMutableArray *pingbackArray; // @synthesize pingbackArray=_pingbackArray;
@property(retain, nonatomic) NSNumber *paopaoCount; // @synthesize paopaoCount=_paopaoCount;
@property(retain, nonatomic) NSNumber *circleCount; // @synthesize circleCount=_circleCount;
@property(retain, nonatomic) NSMutableArray *paopaoArray; // @synthesize paopaoArray=_paopaoArray;
@property(retain, nonatomic) NSMutableArray *circleArray; // @synthesize circleArray=_circleArray;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) long long nextPageNumber; // @synthesize nextPageNumber=_nextPageNumber;
- (void).cxx_destruct;
- (void)getPingbackPaopaoModelForClick:(id)arg1;
- (void)getPingbackCircleModelForClick:(id)arg1;
- (void)loadMorePaopaoDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshSearchPaopaoData:(id)arg1;
- (void)refreshPaopaoDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadMoreCircleDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshSearchCircleData:(id)arg1;
- (void)refreshCircleDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

