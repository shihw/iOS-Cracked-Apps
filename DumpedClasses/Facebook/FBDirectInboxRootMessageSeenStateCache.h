//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSMutableSet;
@protocol OS_dispatch_queue;

@interface FBDirectInboxRootMessageSeenStateCache : NSObject
{
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableSet *_seenRootMessageIds;
}

- (void).cxx_destruct;
- (void)_fetchCachedSeenRootMessageIds;
- (_Bool)hasSeenRootMessageId:(id)arg1;
- (void)markViewRootMessageId:(id)arg1;
- (void)cacheSeenRootMessageIds;
- (id)initWithSession:(id)arg1;

@end

