//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFNSettingsDataController, NSArray, NSString;
@protocol FBFriendsNearbyDataController;

@protocol FBFriendsNearbyDataSource <NSObject>
@property(nonatomic) _Bool seenNux;
- (void)removePersonWithFBID:(NSString *)arg1;
- (void)reloadFriendsNearbyData:(_Bool)arg1;
- (FBFNSettingsDataController *)settingsDataController;
- (id <FBFriendsNearbyDataController>)dataController;
- (NSArray *)dashboardSections;
@end

