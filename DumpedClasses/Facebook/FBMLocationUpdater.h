//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLocationAuthorizationListener-Protocol.h"
#import "FBViewerContextClassProvidable-Protocol.h"
#import "ZRTariffedSessionTaskDelegate-Protocol.h"

@class CLLocation, FBMAppProperties, FBMLocationUpdateListenerAnnouncer, FBUserSession, NSString, ZRTariffedSessionTask, ZRTariffedUxSessionCookie;
@protocol FBLocationManagerSubscription;

@interface FBMLocationUpdater : NSObject <ZRTariffedSessionTaskDelegate, FBLocationAuthorizationListener, FBViewerContextClassProvidable>
{
    _Bool _startWhenSessionBecomesValid;
    ZRTariffedUxSessionCookie *_session;
    id <FBLocationManagerSubscription> _locationManagerToken;
    ZRTariffedSessionTask *_sessionTask;
    FBUserSession *_userSession;
    CLLocation *_lastLocationAccurate;
    CLLocation *_lastLocationLatest;
    FBMLocationUpdateListenerAnnouncer *_announcer;
    FBMAppProperties *_appProperties;
}

@property(retain, nonatomic) FBMAppProperties *appProperties; // @synthesize appProperties=_appProperties;
@property(retain, nonatomic) FBMLocationUpdateListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) CLLocation *lastLocationLatest; // @synthesize lastLocationLatest=_lastLocationLatest;
@property(retain, nonatomic) CLLocation *lastLocationAccurate; // @synthesize lastLocationAccurate=_lastLocationAccurate;
@property(retain, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) ZRTariffedSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(retain, nonatomic) id <FBLocationManagerSubscription> locationManagerToken; // @synthesize locationManagerToken=_locationManagerToken;
@property(nonatomic) _Bool startWhenSessionBecomesValid; // @synthesize startWhenSessionBecomesValid=_startWhenSessionBecomesValid;
@property(readonly, retain, nonatomic) ZRTariffedUxSessionCookie *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)nonZeroRatedSessionTaskMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionTaskMayActivate:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_unregisterLocationManager;
- (void)_stopUpdatingLocation;
- (void)_reset;
- (void)_locationUpdaterDidUpdateLocation:(id)arg1 error:(id)arg2;
- (void)locationAuthorizationDidChange:(int)arg1;
- (void)_subscribeToLocationManager;
- (void)_startLocationListeningIfNeeded;
- (_Bool)locationIsDisabled;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithNonZeroRatedSession:(id)arg1 userSession:(id)arg2 appProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

