//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSearchPhotoStreamResultsDataBridge, NSDictionary;

@protocol FBSearchPhotoStreamResultsDataBridgeDelegate <NSObject>
- (void)didReceiveInitalContentWithAppliedFilters:(NSDictionary *)arg1 isOfflineContent:(_Bool)arg2;
- (unsigned long long)resultsDataBridge:(FBSearchPhotoStreamResultsDataBridge *)arg1 enqueueChangesetItems:(const struct Items *)arg2;
@end

