//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSearchImpressionLoggerProtocol-Protocol.h"

@class NSString;

@interface FBSearchStandardImpressionLogger : NSObject <FBSearchImpressionLoggerProtocol>
{
}

- (void)logImpressionForChangedModel:(id)arg1 fromPreviousModel:(id)arg2 indexPath:(id)arg3 context:(id)arg4 logAnnouncer:(id)arg5;
- (void)logImpressionModel:(id)arg1 indexPath:(id)arg2 context:(id)arg3 logAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

