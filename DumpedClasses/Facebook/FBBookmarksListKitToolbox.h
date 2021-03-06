//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBSectionComponentToolbox.h>

#import "FBSectionComponentToolbox-Protocol.h"

@class FBAdsManagerDeepLinkingController, FBBookmarksListKitExperimentContext, FBBookmarksRecentItems, FBBookmarksRedesignExperimentContext, FBFeedGraphQLConnectionManager, FBGraphQLConsistentLookasideCache, FBListLogger, FBListViewLayoutListenerAnnouncer, FBUserSession, NSObject, NSString;
@protocol FBBookmarksListKitScrollListenerAnnouncer, FBBookmarksListKitTapHandler, FBGraphQLService, FBIntentHandler, FBListViewControllerActionHandler, FBListViewNavigationSearchBarUpdater, FBListViewStateManagerProtocol, FBNavigationCoordinator, FBSectionComponentScrollManagerProtocol;

@interface FBBookmarksListKitToolbox : FBSectionComponentToolbox <FBSectionComponentToolbox>
{
    id <FBBookmarksListKitTapHandler> _tapHandler;
    FBBookmarksListKitExperimentContext *_listKitExperiment;
    FBBookmarksRedesignExperimentContext *_redesignExperiment;
    FBAdsManagerDeepLinkingController *_adsManagerDeepLinkingController;
    id <FBBookmarksListKitScrollListenerAnnouncer> _scrollListenerAnnouncer;
    FBBookmarksRecentItems *_recentItems;
}

@property(readonly, nonatomic) FBBookmarksRecentItems *recentItems; // @synthesize recentItems=_recentItems;
@property(readonly, nonatomic) __weak id <FBBookmarksListKitScrollListenerAnnouncer> scrollListenerAnnouncer; // @synthesize scrollListenerAnnouncer=_scrollListenerAnnouncer;
@property(readonly, nonatomic) FBAdsManagerDeepLinkingController *adsManagerDeepLinkingController; // @synthesize adsManagerDeepLinkingController=_adsManagerDeepLinkingController;
@property(readonly, nonatomic) FBBookmarksRedesignExperimentContext *redesignExperiment; // @synthesize redesignExperiment=_redesignExperiment;
@property(readonly, nonatomic) FBBookmarksListKitExperimentContext *listKitExperiment; // @synthesize listKitExperiment=_listKitExperiment;
@property(readonly, nonatomic) __weak id <FBBookmarksListKitTapHandler> tapHandler; // @synthesize tapHandler=_tapHandler;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 tapHandler:(id)arg2 scrollListenerAnnouncer:(id)arg3 recentItems:(id)arg4;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *analyticsModule;
@property(readonly, nonatomic) __weak id <FBListViewControllerActionHandler> componentActionHandler;
@property(readonly, nonatomic) FBGraphQLConsistentLookasideCache *consistentLookasideCache;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBFeedGraphQLConnectionManager *feedGraphQLConnectionManager;
@property(readonly, nonatomic) id <FBGraphQLService> graphQLService;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <FBIntentHandler> intentHandler;
@property(readonly, nonatomic) FBListViewLayoutListenerAnnouncer *layoutAnnouncer;
@property(readonly, nonatomic) FBListLogger *logger;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
@property(readonly, nonatomic) NSObject *scenePath;
@property(readonly, nonatomic) __weak id <FBSectionComponentScrollManagerProtocol> scrollManager;
@property(readonly, nonatomic) __weak id <FBListViewNavigationSearchBarUpdater> searchBarUpdater;
@property(readonly, nonatomic) FBUserSession *session;
@property(readonly) Class superclass;
@property(readonly, nonatomic) __weak id <FBListViewStateManagerProtocol> viewStateManager;

@end

