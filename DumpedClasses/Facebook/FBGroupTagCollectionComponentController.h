//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponentController.h>

#import "FBGroupsInfoTagsDataSourceDelegate-Protocol.h"

@class NSString;
@protocol FBIntentHandler;

@interface FBGroupTagCollectionComponentController : CKComponentController <FBGroupsInfoTagsDataSourceDelegate>
{
    id <FBIntentHandler> intentHandler;
}

- (void).cxx_destruct;
- (void)didUpdateComponent;
- (void)didTapTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

