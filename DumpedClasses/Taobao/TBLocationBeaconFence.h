//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKServerDelegate.h"

@class NSString, iBeaconManager;

@interface TBLocationBeaconFence : NSObject <TBSDKServerDelegate>
{
    iBeaconManager *ibeaconManager;
    _Bool isHandleBeacons;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beaconDataSendFailed:(id)arg1;
- (void)beaconDataSendFinished:(id)arg1;
- (void)beaconDataSend:(id)arg1;
- (void)lifeNearbyDevices:(id)arg1;
- (_Bool)checkRate;
- (void)tbLolNearbyDevices:(id)arg1;
- (void)applicationEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
