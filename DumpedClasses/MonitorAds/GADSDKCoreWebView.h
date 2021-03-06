//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADActiveViewGMSGHandlerDelegate-Protocol.h"
#import "GADAdViewDelegate-Protocol.h"

@class GADActiveViewGMSGHandler, GADAdView, GADAdViewDelegate, GADSDKCoreGMSGHandler, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface GADSDKCoreWebView : NSObject <GADActiveViewGMSGHandlerDelegate, GADAdViewDelegate>
{
    int _state;
    BOOL _hasSDKCoreLoadedAtLeastOnce;
    NSMutableArray *_pendingJSCommands;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_commandQueue;
    NSMutableSet *_SDKCoreObservers;
    GADAdViewDelegate *_adViewDelegate;
    GADAdView *_adView;
    GADActiveViewGMSGHandler *_activeViewGMSGHandler;
    NSMapTable *_activeViewObservers;
    NSMutableSet *_runningActiveViewObservers;
    GADSDKCoreGMSGHandler *_SDKCoreGMSGHandler;
}

@property(retain, nonatomic) GADSDKCoreGMSGHandler *SDKCoreGMSGHandler; // @synthesize SDKCoreGMSGHandler=_SDKCoreGMSGHandler;
- (void).cxx_destruct;
- (BOOL)isActiveViewRunning;
- (void)clearAllActiveViewInstances;
- (void)removeActiveViewObserverForActiveViewID:(unsigned int)arg1;
- (void)setActiveViewObserver:(id)arg1 forActiveViewID:(unsigned int)arg2;
- (void)postJSNotification:(id)arg1 userInfo:(id)arg2;
- (void)dispatchPendingJavaScriptCommands;
- (void)enqueueJavaScriptCommand:(id)arg1;
@property BOOL hasSDKCoreLoadedAtLeastOnce;
@property int state;
- (void)notifyAllObserversOnlyOnceThatSDKCoreRequestIsFinished;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)refreshSDKCoreAndNotifyObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserverForOneTimeNotification:(id)arg1;
- (id)init;
- (void)activeViewGMSGHandler:(id)arg1 didReceiveVisibilityNotification:(BOOL)arg2 forActiveViewID:(unsigned int)arg3;
- (void)activeViewGMSGHandler:(id)arg1 didReceiveUntrackNotificationForActiveViewID:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

