//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseService.h"

@class DCDCreateRouteRequest, DCYSInviteGetInfoBaseModel, NSMutableArray, NSString<Optional>, OKNetTRBaseReqAdapter;

@interface DCRouteService : DCBaseService
{
    DCDCreateRouteRequest *_routeRequest;
    OKNetTRBaseReqAdapter *_widthdrawRouteRequest;
    NSMutableArray *_completionHanlders;
    id _pushObserverID;
    id _logoutID;
    NSMutableArray *_routeModels;
    DCYSInviteGetInfoBaseModel *_currentDetailInfoModel;
    NSString<Optional> *_setup_time;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString<Optional> *setup_time; // @synthesize setup_time=_setup_time;
@property(retain, nonatomic) DCYSInviteGetInfoBaseModel *currentDetailInfoModel; // @synthesize currentDetailInfoModel=_currentDetailInfoModel;
@property(retain, nonatomic) NSMutableArray *routeModels; // @synthesize routeModels=_routeModels;
@property(retain, nonatomic) id logoutID; // @synthesize logoutID=_logoutID;
@property(retain, nonatomic) id pushObserverID; // @synthesize pushObserverID=_pushObserverID;
@property(retain, nonatomic) NSMutableArray *completionHanlders; // @synthesize completionHanlders=_completionHanlders;
@property(retain, nonatomic) OKNetTRBaseReqAdapter *widthdrawRouteRequest; // @synthesize widthdrawRouteRequest=_widthdrawRouteRequest;
@property(retain, nonatomic) DCDCreateRouteRequest *routeRequest; // @synthesize routeRequest=_routeRequest;
- (void).cxx_destruct;
- (void)getDriverTimeConfigWithRouteModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)hasRoute;
- (id)modelPassingTest:(CDUnknownBlockType)arg1;
- (id)modelWithRouteID:(id)arg1;
- (void)removeRouteModel:(id)arg1;
- (void)addRouteModel:(id)arg1;
- (void)orderTaken:(id)arg1;
- (void)didEnterBackground;
- (void)notifyCompetionHanldersRouteModel:(id)arg1 status:(long long)arg2 errorMsg:(id)arg3;
- (void)withdrawRouteWithCompletionHandler:(CDUnknownBlockType)arg1 routeID:(id)arg2;
- (void)cancelRequest;
- (void)removeCompletionHandler:(id)arg1;
- (id)addCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)newRouteModel:(id)arg1 status:(long long)arg2 errorMsg:(id)arg3;
- (id)getCurrentDetailInfoModel;
- (void)requestRouteInfoModel:(id)arg1 scene_msg:(id)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)requestRouteModel:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)serviceDidLoad;
- (void)dealloc;
- (id)init;
- (_Bool)jumpToAddOrManageCommonRouteH5:(long long)arg1 addParameters:(id)arg2;
- (void)steupURLObserver;
- (void)showPushRouteDetailInfo:(long long)arg1;
- (void)handleUserActionPublicRouteDetailInfo:(id)arg1 passengerRouteID:(id)arg2 driverRouteID:(id)arg3 sessionID:(id)arg4 directDegree:(id)arg5 dateID:(id)arg6 scene_msg:(id)arg7 type:(long long)arg8 success:(CDUnknownBlockType)arg9 failed:(CDUnknownBlockType)arg10;
- (void)handleAppOpenURLEvent:(id)arg1;
- (void)handleUserActionPublicRoute:(id)arg1;

@end

