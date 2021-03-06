//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBWhistleDispatcher-Protocol.h"

@class FBWhistleExecutor;
@protocol OS_dispatch_queue;

@interface FBWhistleQueueDispatcher : NSObject <FBWhistleDispatcher>
{
    NSObject<OS_dispatch_queue> *_mainQueue;
    FBWhistleExecutor *_whistleExecutor;
    _Bool _useWorkerQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

- (void).cxx_destruct;
- (id)whistleExecutor;
- (id)queue;
- (void)dispatchFromWorkerToMainQueue:(CDUnknownBlockType)arg1;
- (void)dispatchFromEvbToWorkerQueue:(CDUnknownBlockType)arg1;
- (void)dispatchFromMainToWorkerQueue:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMainQueue:(id)arg1 useWorkerQueue:(_Bool)arg2;

@end

