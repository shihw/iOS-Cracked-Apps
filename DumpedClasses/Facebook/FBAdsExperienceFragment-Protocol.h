//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFragmentModelProtocol-Protocol.h"

@class FBGraphQLConsistency, FBGraphQLServiceToken, NSObject, NSString;
@protocol FBAdsExperienceFragmentBuilder, FBAdsExperienceFragment_adSharedByFragment, FBAdsExperienceFragment_adgroupFragment, FBAdsExperienceFragment_pageFragment, OS_dispatch_queue;

@protocol FBAdsExperienceFragment <FBFragmentModelProtocol>
- (id <FBAdsExperienceFragmentBuilder>)updateBuilder;
- (id <FBAdsExperienceFragmentBuilder>)copyBuilder;
- (FBGraphQLServiceToken *)subscribeWithConsistency:(FBGraphQLConsistency *)arg1 updateCallback:(void (^)(id <FBAdsExperienceFragment>, id <FBGraphQLServiceStatus>))arg2 failureCallback:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (id <FBAdsExperienceFragment_pageFragment>)page;
- (NSString *)graphQLID;
- (id <FBAdsExperienceFragment_adgroupFragment>)adgroup;
- (NSString *)adSharingStatus;
- (id <FBAdsExperienceFragment_adSharedByFragment>)adSharedBy;
- (NSString *)adPreviewId;
@end

