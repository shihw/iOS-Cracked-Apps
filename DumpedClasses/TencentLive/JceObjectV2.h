//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObject.h"

@class NSString, NSTimer, QLLiveV3DetailPollModel;

@interface JceObjectV2 : JceObject
{
}

+ (id)jceType;
+ (id)objectWithName:(id)arg1 inAttributes:(id)arg2;
- (void)__unpack:(id)arg1;
- (void)__pack:(id)arg1;
- (id)jcePropsDescription;
- (id)jceRefObject;
- (id)jceType;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)JCELPS_asychCheckLiveStreamStatusUsingNotification;
- (long long)JCELPS_liveStreamStatus;
- (void)JCELPS_checkLiveStreamStatusUsingBlock:(CDUnknownBlockType)arg1;
- (void)checkStatusWithServer;
- (void)updateBroadcastLiveStatus:(unsigned long long)arg1;
- (void)updateEndState;
- (void)updateBeginningState;
- (void)updateBeginState;
- (void)updateSearchState;
- (void)updateVideoInfoFailed;
- (void)freshCountDownTitleByDateComponents:(id)arg1;
- (id)calcCountDown:(id)arg1 andBeginTime:(id)arg2;
- (id)getCorrectLocalDate;
- (void)stopCountDownTimer;
- (id)fetchCountDownTimer;
- (void)setDefaultValues;
@property(nonatomic) _Bool destroyTimer; // @dynamic destroyTimer;
@property(nonatomic) double liveStartTime; // @dynamic liveStartTime;
@property(nonatomic) double serverTimeInterval; // @dynamic serverTimeInterval;
@property(retain, nonatomic) NSTimer *countDownTimer; // @dynamic countDownTimer;
@property(nonatomic) _Bool countDownTimerFinishWillCheckWitherServerAgain; // @dynamic countDownTimerFinishWillCheckWitherServerAgain;
@property(retain, nonatomic) NSString *pID; // @dynamic pID;
@property(nonatomic) long long liveStreamStatus; // @dynamic liveStreamStatus;
@property(copy, nonatomic) CDUnknownBlockType itemSBlock; // @dynamic itemSBlock;
@property(retain, nonatomic) QLLiveV3DetailPollModel *livePoolModel; // @dynamic livePoolModel;
- (void)setInAttributes:(id)arg1 withName:(id)arg2;

@end

