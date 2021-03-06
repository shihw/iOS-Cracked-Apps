//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseService.h"

@class NSMutableDictionary;

@interface DCDInviteOrderService : DCBaseService
{
    NSMutableDictionary *_cacheDic;
}

+ (_Bool)isValidKey:(id)arg1;
+ (_Bool)isSameId:(id)arg1 andId:(id)arg2;
+ (id)matchInviteIdentify:(id)arg1 identify:(id)arg2;
+ (id)identifyForInviteModel:(id)arg1;
+ (id)identificationForModel:(id)arg1;
+ (void)addInviteObject:(id)arg1;
+ (id)getInviteObjectForKey:(id)arg1 vcType:(unsigned long long)arg2;
+ (id)allIdentifyForInviteModel:(id)arg1;
+ (_Bool)isCurrentInviteOrder:(id)arg1;
+ (id)sharedInstance;
+ (id)analyticsParams:(id)arg1 channel:(id)arg2 status:(id)arg3;
+ (void)addAnalyticsParams:(long long)arg1 event:(id)arg2 model:(id)arg3 status:(id)arg4;
+ (void)showFailedAlert:(id)arg1;
+ (void)gotoDCDAcceptInviteVC:(id)arg1 carpoolId:(id)arg2 tempModel:(id)arg3;
+ (void)gotoDCDInviteVC:(id)arg1 passengerRouteId:(id)arg2 driverRouteId:(id)arg3 tempModel:(id)arg4;
@property(retain, nonatomic) NSMutableDictionary *cacheDic; // @synthesize cacheDic=_cacheDic;
- (void).cxx_destruct;
- (id)getInviteCacheData:(unsigned long long)arg1;
- (void)sendNotificationWhenReloadStateChanged:(id)arg1 status:(_Bool)arg2;
- (id)recvmessageWithURLEvent:(id)arg1;
- (void)steupURLObserver;
- (void)serviceDidLoad;
- (id)init;
- (void)dealloc;
- (_Bool)isAppBeingBackground;
- (void)gotoPushVC:(id)arg1;
- (void)showBlackBarPush:(id)arg1 type:(long long)arg2;
- (void)playTTSWithText:(id)arg1;
- (void)distributePushMsg:(id)arg1 type:(long long)arg2;
- (id)getNotificationData:(id)arg1;
- (void)dealIMPushMessage:(id)arg1 type:(long long)arg2;
- (void)receiveIMControlNotification:(id)arg1;
- (void)handleAPNsMessage:(id)arg1;
- (void)registerAPNSMsg;

@end

