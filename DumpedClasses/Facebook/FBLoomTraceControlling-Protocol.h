//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBLoomTraceContext, FBLoomTraceManager;

@protocol FBLoomTraceControlling
@property __weak FBLoomTraceManager *manager;
- (void)traceManager:(FBLoomTraceManager *)arg1 traceDidFail:(FBLoomTraceContext *)arg2;
- (void)traceManager:(FBLoomTraceManager *)arg1 traceDidTimeout:(FBLoomTraceContext *)arg2;
@end

