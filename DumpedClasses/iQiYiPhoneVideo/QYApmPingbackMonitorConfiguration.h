//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface QYApmPingbackMonitorConfiguration : NSObject
{
    NSArray *_monitorList;
    long long _monitorPeriod;
    double _sendRate;
}

+ (id)defaultConfiguration;
@property(nonatomic) double sendRate; // @synthesize sendRate=_sendRate;
@property(nonatomic) long long monitorPeriod; // @synthesize monitorPeriod=_monitorPeriod;
@property(retain, nonatomic) NSArray *monitorList; // @synthesize monitorList=_monitorList;
- (void).cxx_destruct;

@end

