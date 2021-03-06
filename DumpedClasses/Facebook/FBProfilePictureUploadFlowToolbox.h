//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProfilePictureUploadFlowToolbox-Protocol.h"

@class FBMemPerson, FBUserSession, NSString;
@protocol FBNavigationCoordinator;

@interface FBProfilePictureUploadFlowToolbox : NSObject <FBProfilePictureUploadFlowToolbox>
{
    FBUserSession *_session;
    NSObject *_scenePath;
    FBMemPerson *_targetPerson;
    id <FBNavigationCoordinator> _navigationCoordinator;
}

@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, copy, nonatomic) FBMemPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, nonatomic) NSObject *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 screnePath:(id)arg2 navigationCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

