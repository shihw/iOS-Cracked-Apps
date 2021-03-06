//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBClassProvidable-Protocol.h"

@class FBMChatContextManager, FBUserDefaultsCache, LastActiveManager, NSString;

@interface ContactCellFactory : NSObject <FBClassProvidable>
{
    FBMChatContextManager *_chatContextManager;
    FBUserDefaultsCache *_userDefaultsCache;
    LastActiveManager *_lastActiveManager;
}

- (void).cxx_destruct;
- (id)_configureContactCell:(id)arg1 withPerson:(id)arg2 colorScheme:(int)arg3 showLocation:(_Bool)arg4 showStatusText:(_Bool)arg5;
- (id)_searchingCellForTableView:(id)arg1 colorScheme:(int)arg2;
- (id)createCellForContactSearch:(id)arg1 withColorScheme:(int)arg2 withRow:(long long)arg3 inContactSearchSection:(long long)arg4 inTableView:(id)arg5;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithLastActiveManager:(id)arg1 chatContextManager:(id)arg2 userDefaultsCache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

