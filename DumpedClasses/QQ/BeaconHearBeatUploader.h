//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BeaconHearBeatUploader : NSObject
{
}

+ (id)sharedInstance;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)uploadBeatEvent:(id)arg1;
- (_Bool)startReportHearBeatEventWhatever;
- (_Bool)startReportHearBeatEvent;
- (void)stopHeartBeatTask;
- (void)nextDayHeartBeat;
- (void)nextTryHeartbeatWhatever;
- (void)nextTryHeartbeat;

@end
