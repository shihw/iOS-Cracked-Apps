//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class RCTQYNetworkConfiguration, RCTQYSwitchConfiguration;

@interface RCTQYConfigurationHolder : NSObject
{
    RCTQYNetworkConfiguration *_networkConfiguration;
    RCTQYSwitchConfiguration *_switchConfiguration;
}

+ (id)sharedInstance;
@property(retain, nonatomic) RCTQYSwitchConfiguration *switchConfiguration; // @synthesize switchConfiguration=_switchConfiguration;
@property(retain, nonatomic) RCTQYNetworkConfiguration *networkConfiguration; // @synthesize networkConfiguration=_networkConfiguration;
- (void).cxx_destruct;
- (id)init;

@end

