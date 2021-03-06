//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBProfileDiscoverySessionLogger, NSString;

@interface FBProfileDiscoveryFriendListSessionLogger : NSObject
{
    NSString *_discoveryFriendListSessionID;
    FBProfileDiscoverySessionLogger *_discoverySessionLogger;
}

@property(readonly, nonatomic) FBProfileDiscoverySessionLogger *discoverySessionLogger; // @synthesize discoverySessionLogger=_discoverySessionLogger;
@property(readonly, copy, nonatomic) NSString *discoveryFriendListSessionID; // @synthesize discoveryFriendListSessionID=_discoveryFriendListSessionID;
- (void).cxx_destruct;
- (id)discoveryFriendListSessionExtras;
- (void)_logEventWithExtras:(id)arg1;
- (void)logClickOnPersonInPeopleListWithPersonIndex:(unsigned long long)arg1;
- (void)logActionOnPilltersBarInDiscoveryFriendListWithAction:(id)arg1 filter:(id)arg2 value:(id)arg3 index:(unsigned long long)arg4;
- (void)logDiscoveryFriendListSessionImpression;
- (id)initWithDiscoverySessionLogger:(id)arg1;

@end

