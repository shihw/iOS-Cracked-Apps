//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAAnimationDelegate.h"
#import "DGCSplitSlideAnimationProtocol.h"
#import "DGMHomePageEventsProtocol.h"
#import "DGMHomePageLifeCycleProtocol.h"
#import "DGPSceneTabUnitDelegate.h"
#import "DiDiLocationGeoManagerDelegate.h"
#import "DiDiLocationManagerDelegate.h"
#import "ONEDraftOrderStoreDelegate.h"
#import "ONEHomeContentAware.h"
#import "ONESBaseMapEntranceAware.h"
#import "ONESBaseMapEntranceDelegate.h"
#import "ONESmoothMoveDataSource.h"
#import "ONEUserStoreDelegate.h"
#import "SBaseComProtocol.h"
#import "SHomeBubbleDelegate.h"
#import "SPosMarkerDataSource.h"
#import "UIScrollViewDelegate.h"

@class CLLocation, DGPBorderLabel, DGPHomeOperationRequest, DGPHomeRecommendMapBusiness, DGPHomeRecommendationRequest, DGPHomeSchemeView, DGPHomepageVerneContainerView, DGPOperationFormUnit, DGPPosMarkerUnit, DGPRecommendCombineResultModel, DGPRecommendLineCardView, DGPRefreshEtaTask, DGPSceneTabUnit, DGPSearchSuggestOperateModel, DGPSmoothManager, DGPTakeCarPlaceUnit, DGPTransferSolutionListModel, DGPTransitMapBusiness, DGPUnLockWaitPublicModel, DGPUserInstructView, DGPWaitPublicStatusModel, DiDiPOIEntityModel, HJTimer, NSArray, NSDate, NSMutableArray, NSString, ONEMapLocationButton, ONESBaseMapEntrance, ONEUserAnnotationsBussniess, TRTopNavgationView, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface DGMHomePage : UIViewController <SHomeBubbleDelegate, DGPSceneTabUnitDelegate, ONEDraftOrderStoreDelegate, ONEHomeContentAware, DGMHomePageLifeCycleProtocol, DGMHomePageEventsProtocol, DiDiLocationManagerDelegate, DiDiLocationGeoManagerDelegate, ONESBaseMapEntranceDelegate, ONESmoothMoveDataSource, ONESBaseMapEntranceAware, SPosMarkerDataSource, UIScrollViewDelegate, SBaseComProtocol, DGCSplitSlideAnimationProtocol, ONEUserStoreDelegate, CAAnimationDelegate>
{
    _Bool _preventRecommendRequest;
    _Bool _isShowHongBaoErroeMessage;
    _Bool _isHaveRecommend;
    _Bool _preventTraffic;
    _Bool _preventSearchBackFetchRecommend;
    _Bool _onPositionUseForTransit;
    _Bool _notFirstGetGEO;
    _Bool _fromUpdateLocation;
    _Bool _isCancelFromNearbyPage;
    NSArray *_bizPages;
    TRTopNavgationView *_naviView;
    DGPSceneTabUnit *_sceneTabUnit;
    NSString *_currentLineId;
    NSDate *_lastRecommendDate;
    CLLocation *_savedNearbyLocation;
    long long _locationBuffer;
    long long _distanceBuffer;
    long long _myLocationBuffer;
    NSString *_selectedLineStopInfo;
    NSString *_nearbyFid;
    struct CGRect _visibleFrame;
}

+ (void)load;
@property(retain, nonatomic) NSString *nearbyFid; // @synthesize nearbyFid=_nearbyFid;
@property(retain, nonatomic) NSString *selectedLineStopInfo; // @synthesize selectedLineStopInfo=_selectedLineStopInfo;
@property(nonatomic) _Bool isCancelFromNearbyPage; // @synthesize isCancelFromNearbyPage=_isCancelFromNearbyPage;
@property(nonatomic) long long myLocationBuffer; // @synthesize myLocationBuffer=_myLocationBuffer;
@property(nonatomic) long long distanceBuffer; // @synthesize distanceBuffer=_distanceBuffer;
@property(nonatomic) long long locationBuffer; // @synthesize locationBuffer=_locationBuffer;
@property(retain, nonatomic) CLLocation *savedNearbyLocation; // @synthesize savedNearbyLocation=_savedNearbyLocation;
@property(nonatomic) _Bool fromUpdateLocation; // @synthesize fromUpdateLocation=_fromUpdateLocation;
@property(nonatomic) _Bool notFirstGetGEO; // @synthesize notFirstGetGEO=_notFirstGetGEO;
@property(nonatomic) _Bool onPositionUseForTransit; // @synthesize onPositionUseForTransit=_onPositionUseForTransit;
@property(nonatomic) _Bool preventSearchBackFetchRecommend; // @synthesize preventSearchBackFetchRecommend=_preventSearchBackFetchRecommend;
@property(nonatomic) _Bool preventTraffic; // @synthesize preventTraffic=_preventTraffic;
@property(nonatomic) _Bool isHaveRecommend; // @synthesize isHaveRecommend=_isHaveRecommend;
@property(nonatomic) _Bool isShowHongBaoErroeMessage; // @synthesize isShowHongBaoErroeMessage=_isShowHongBaoErroeMessage;
@property(retain, nonatomic) NSDate *lastRecommendDate; // @synthesize lastRecommendDate=_lastRecommendDate;
@property(retain, nonatomic) NSString *currentLineId; // @synthesize currentLineId=_currentLineId;
@property(nonatomic) _Bool preventRecommendRequest; // @synthesize preventRecommendRequest=_preventRecommendRequest;
@property(retain, nonatomic) DGPSceneTabUnit *sceneTabUnit; // @synthesize sceneTabUnit=_sceneTabUnit;
@property(nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
@property(retain, nonatomic) TRTopNavgationView *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) NSArray *bizPages; // @synthesize bizPages=_bizPages;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appLifeCycle_applicationUserDidTakeScreenshot;
- (void)appLifeCycle_applicationDidEnterBackground:(id)arg1;
- (void)appLifeCycle_applicationWillResignActive;
- (void)appLifeCycle_applicationDidBecomeActive;
- (void)appLifeCycle_setupNotificationHandlers;
- (void)setSmoothMoveShouldUpdateBubble:(_Bool)arg1;
- (void)updateBubbleTypeLoading;
- (void)updateCurrentPositionContentX:(id)arg1 unit:(id)arg2 desc:(id)arg3;
- (void)updateCurrentPositionContentX:(id)arg1;
- (void)restoreODPosition;
- (void)backupODPosition;
- (void)startHomepage;
- (void)createTabCom;
- (_Bool)sceneTab:(id)arg1 willSelectTabWithTitle:(id)arg2;
- (void)common_tryRecovery;
- (void)common_switchState;
- (void)common_didSwitchCity:(id)arg1;
- (void)common_willSwitchCity:(id)arg1;
- (void)common_exitGongJiaoTab;
- (void)common_viewDidDisappear:(_Bool)arg1;
- (void)common_viewWillDisappear:(_Bool)arg1;
- (void)common_viewDidAppear:(_Bool)arg1;
- (void)common_viewWillAppear:(_Bool)arg1;
- (void)common_enterGongJiaoTab;
- (void)common_viewDidLoad;
- (void)onPositionDidChange:(id)arg1;
- (void)unbindDraftOrderStore;
- (void)bindDraftOrderStore;
- (_Bool)onPositionByHand;
- (void)homeContentAware_setupNotificationHandler;
- (void)didUnselected;
- (void)didSelected;
- (void)switchCity:(id)arg1;
- (void)setContentFrame:(struct CGRect)arg1;
- (_Bool)navigationBarTitleViewClickable;
- (id)businessNavigationBar;
- (void)updateBottomViewLayout;
- (void)updateSubViewsLayout;
- (void)initLayout;
- (void)dgm_switchToState:(long long)arg1;
- (void)dgm_switchCity:(id)arg1;
- (id)dgm_businessNavigationBar;
- (void)dgm_exitGongJiaoTab;
- (void)dgm_viewDidDisappear:(_Bool)arg1;
- (void)dgm_viewWillDisappear:(_Bool)arg1;
- (void)dgm_viewDidAppear:(_Bool)arg1;
- (void)dgm_viewWillAppear:(_Bool)arg1;
- (void)dgm_enterGongJiaoTab;
- (void)dgm_viewDidLoad;
- (void)geoManagerDidRequestGeoDataFail;
- (void)geoManagerDidUpdateGeoData;
- (void)didiLocationManagerDidUpdateDistance:(double)arg1 distanceFilter:(double)arg2;
- (void)unbindLocationStaff;
- (void)bindLocationStaff;
- (void)showTecentMapLogo:(_Bool)arg1;
- (void)zoomForDifferentCityWithOn:(id)arg1;
- (void)locationMe;
- (void)changeBusIcon;
- (void)updateLocationButtonPositionWithRecommend:(_Bool)arg1;
- (void)resetToCurrentLocation;
- (void)initLocationButton;
@property(retain, nonatomic) ONEMapLocationButton *locationButton; // @dynamic locationButton;
@property(retain, nonatomic) ONEUserAnnotationsBussniess *userAnnotationBusiness; // @dynamic userAnnotationBusiness;
- (void)mapDidUnselected;
- (void)mapDidSelected;
- (void)clearBusAnnotations;
- (void)startMapRealtime;
- (void)stopMapModule;
- (void)pauseMapModule;
- (void)initMapModule;
@property(readonly, nonatomic) ONESBaseMapEntrance *map;
- (void)updateMarker;
- (void)updateMarkerPositionWithRecommend:(_Bool)arg1;
- (void)initMapMarker;
@property(retain, nonatomic) DGPBorderLabel *markerLabel; // @dynamic markerLabel;
- (id)addExtraParamaWithUrl:(id)arg1;
- (void)onNotification_PushToSubView:(id)arg1;
- (void)onNotification_UserDidLogin;
- (void)onNotification_DGPMapHomePageCurrentOperationNoti:(id)arg1;
- (void)onNotification_DGPMapHomePageOperationButtonClickNoti:(id)arg1;
- (void)onNotification_DGPNoMapMarker:(id)arg1;
- (void)onNotification_showNoHaveHongBaoAlter;
- (void)onNotification_RegreshTabConfig;
- (void)setupNotificationHandlers;
- (void)saveLastClosedBannerID:(id)arg1;
- (_Bool)isHaveOpenWithBannerId:(id)arg1;
- (void)cOperationButtonClick;
- (void)currentOperationButtonClick;
- (void)operationBanner_closeButtonClick;
- (void)showCurrentOperationWithWords:(id)arg1;
- (void)fetchCurrentOperation;
- (void)initOperationModule;
@property(retain, nonatomic) UIButton *operationBannerCloseButton; // @dynamic operationBannerCloseButton;
@property(retain, nonatomic) UIButton *operationBannerButton; // @dynamic operationBannerButton;
@property(retain, nonatomic) UIButton *operationButton; // @dynamic operationButton;
@property(retain, nonatomic) UIView *operationContainerView; // @dynamic operationContainerView;
@property(retain, nonatomic) UIView *operationBannerButtonBGView; // @dynamic operationBannerButtonBGView;
@property(retain, nonatomic) DGPHomeOperationRequest *homeOperationRequest; // @dynamic homeOperationRequest;
- (_Bool)posMarkerEnableRecommendDestination;
- (void)stopRecognitionWithcomponent:(id)arg1;
- (void)reloadOnPosMapMarker;
- (void)posMarkerCom:(id)arg1 cellClickForType:(long long)arg2;
- (void)posMarkerCom:(id)arg1 cellType:(long long)arg2 addrDidChange:(id)arg3;
- (void)recommend_destroyMapModule;
- (void)recommend_initMapModule;
- (void)toLineDetailWithModel:(id)arg1 withCityID:(id)arg2 withFID:(id)arg3;
- (void)onNotification_DGPHomepageMapStationClickNoti:(id)arg1;
- (void)onNotification_DGPRecommendLineClickNoti:(id)arg1;
- (void)onNotification_DGPRecommendLineCardClickNoti:(id)arg1;
- (void)onNotification_DGPHomepageArrivalETANoti:(id)arg1;
- (void)onNotification_DGPHomepageETANoti:(id)arg1;
- (void)onNotification_BusCalloutViewOperationNoti;
- (void)onNotification_ConfigQueryDoneNoti;
- (void)onNotification_DGPHomepageMapOperationAnnotationClickNoti:(id)arg1;
- (void)onNotification_ONETrafficSwitchStatusDiDChangeNoti:(id)arg1;
- (void)recommend_setupNotificationHandlers;
- (void)recommend_removeNotificationHandlers;
- (void)cancelRecommend;
- (void)recommendUnselected;
- (void)recommendSelected;
- (void)nearStationLineEntrance;
- (void)lineClickWithButtonTag:(long long)arg1;
- (_Bool)judgeRecommendFromNearby;
- (void)updateRecommendArrivalETAWithRealTimeModel:(id)arg1;
- (void)updateRecommendETAWithRealTimeModel:(id)arg1;
- (void)updateRecommendStopWithStopIndex:(long long)arg1;
- (void)fetchFirstRecommendLineWithSelectedIndex:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)clickLineButtonUIWithButton:(id)arg1;
- (void)lineButtonClick:(id)arg1;
- (void)reverseBtnClick;
- (id)transformationModelWithMetroBusModel:(id)arg1;
- (void)exchangeLineWithLineModel:(id)arg1 viewTag:(long long)arg2;
- (void)clearRecommendMap;
- (void)startMapModuleWithLineModel:(id)arg1;
- (void)initOperationAnnotations;
- (void)updateBottomScrollWithRecommendArray:(id)arg1;
- (void)updateTopScrollWithRecommendArray:(id)arg1;
- (void)addSeprateLine;
- (void)updateSeprateLine;
- (long long)judgeClickNearbyLine;
- (void)addNoBusNearbyInfo;
- (void)updateWithEmptyRecommendTip:(id)arg1;
- (void)showRecommendWithSelectIndex:(long long)arg1;
- (void)showRecommendForSwitchDirectionWithSelectIndex:(long long)arg1;
- (void)updateTabLayout;
- (void)recommendFail;
- (void)fetchRecommendWithNearbyLineString:(id)arg1 withCallbackID:(id)arg2;
- (void)bamaiRecommendLogWithFocuscityID:(id)arg1;
- (void)initRecommendModule;
@property(retain, nonatomic) DGPSmoothManager *smoothManager; // @dynamic smoothManager;
@property(retain, nonatomic) DGPHomeRecommendMapBusiness *recommendMapBusiness; // @dynamic recommendMapBusiness;
@property(retain, nonatomic) NSMutableArray *lineCardViewArray; // @dynamic lineCardViewArray;
@property(retain, nonatomic) DGPRecommendLineCardView *currentlineCardView; // @dynamic currentlineCardView;
@property(retain, nonatomic) NSMutableArray *lineButtonArray; // @dynamic lineButtonArray;
@property(retain, nonatomic) DGPRecommendCombineResultModel *recommendResultModel; // @dynamic recommendResultModel;
@property(retain, nonatomic) DGPHomeRecommendationRequest *homeRecommendationRequest; // @dynamic homeRecommendationRequest;
@property(retain, nonatomic) UIScrollView *bottomScrollView; // @dynamic bottomScrollView;
@property(retain, nonatomic) UIScrollView *topScrollView; // @dynamic topScrollView;
@property(retain, nonatomic) UIView *recommendCanvasView; // @dynamic recommendCanvasView;
@property(retain, nonatomic) UIView *recommendContainerView; // @dynamic recommendContainerView;
@property(retain, nonatomic) UIView *seperateLine; // @dynamic seperateLine;
@property(retain, nonatomic) NSDate *recommendDate; // @dynamic recommendDate;
@property(retain, nonatomic) UIButton *nearLineButton; // @dynamic nearLineButton;
@property(copy, nonatomic) NSString *nearbyClickLineID; // @dynamic nearbyClickLineID;
- (void)transitPlanRecovery;
- (void)crashRecovery;
- (void)updateTakecarPlaceToMyPosition:(struct CLLocationCoordinate2D)arg1;
- (void)gotoResultViewControllerWithTransitViewModels:(id)arg1 origin:(id)arg2 destination:(id)arg3 fid:(id)arg4;
- (void)gotoNewResultViewControllerWithorigin:(id)arg1 destination:(id)arg2;
- (void)fetchTransitSearchWithStart2:(id)arg1 end:(id)arg2 strategy:(long long)arg3;
- (void)tryEnterTransitListPage;
- (void)setHomeReverseGeoStatus:(long long)arg1;
- (long long)getHomeReverseGeoStatus;
- (long long)getHomeLocationStatus;
- (void)stopEstimateWithComponent:(id)arg1;
- (void)startEstimateWithScene:(long long)arg1 component:(id)arg2;
- (void)component:(id)arg1 selectSceneTabAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)dismissAllPopUpViewsWithComponent:(id)arg1;
- (void)component:(id)arg1 reloadFormWithType:(long long)arg2 cellType:(long long)arg3 animated:(_Bool)arg4;
- (void)sceneTabCom:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)sceneTabCom:(id)arg1 willSelectItemAtIndex:(unsigned long long)arg2;
- (double)operationFormCom:(id)arg1 guideOffsetForFrame:(struct CGRect)arg2;
- (_Bool)canShowGuideInOperationFormCom:(id)arg1;
- (void)operationFormCom:(id)arg1 willTransferToHeight:(double)arg2 duration:(double)arg3 state:(long long)arg4;
- (id)operationFormCom:(id)arg1 modelForCellType:(long long)arg2;
@property(retain, nonatomic) DGPTakeCarPlaceUnit *takecarplaceCom; // @dynamic takecarplaceCom;
@property(retain, nonatomic) DGPPosMarkerUnit *posMarkerCom; // @dynamic posMarkerCom;
@property(retain, nonatomic) DGPOperationFormUnit *operationFormUnit; // @dynamic operationFormUnit;
- (id)viewContainerForComponent:(id)arg1;
- (id)stretchImage:(id)arg1;
- (_Bool)usingServerPlaceHolder;
@property(retain, nonatomic) UILabel *searchLabel; // @dynamic searchLabel;
@property(retain, nonatomic) DGPSearchSuggestOperateModel *operateBusinessModel; // @dynamic operateBusinessModel;
- (void)searchButtonClick;
- (void)initSearchModule;
@property(retain, nonatomic) UIButton *searchButton; // @dynamic searchButton;
- (id)searchSuggestOperateModel;
@property(retain, nonatomic) UIView *searchContainerView; // @dynamic searchContainerView;
- (void)longPressButtonAction:(id)arg1;
- (void)serverEnvSwitchButtonAction:(id)arg1;
- (void)removeServerEnvSwitchButton;
- (void)setupServerEnvSwitchButton;
@property(retain, nonatomic) UIButton *serverEnvSwitchButton; // @dynamic serverEnvSwitchButton;
- (_Bool)shouldIgnoreToPoiModel;
- (_Bool)shouldOpenHomeTransitDetail;
- (long long)calcHomeState;
@property(nonatomic) long long state;
- (void)startTakeCarPlaceWithComponent:(id)arg1;
- (void)stopTakeCarPlaceWithComponent:(id)arg1;
- (void)takeCarPlaceBusinessCom:(id)arg1 reverseGeoFinished:(id)arg2 cityId:(id)arg3 cityName:(id)arg4;
- (void)takeCarPlaceBusinessCom:(id)arg1 reverseGeoFailure:(struct CLLocationCoordinate2D)arg2;
- (void)takeCarPlaceBusinessCom:(id)arg1 reverseGeoStarted:(struct CLLocationCoordinate2D)arg2;
- (void)takeCarPlaceBusinessCom:(id)arg1 positionDidChange:(id)arg2;
- (unsigned long long)defaultTransferSearchOptions;
- (void)setRecoveryModel;
- (void)leftClearButtonClicked:(id)arg1;
- (id)transitDetail_homeNavigationBar;
- (void)cleanTransitList;
- (void)cleanListModel;
- (void)saveListModel;
- (void)disMisLoadingView;
- (void)showLoadingViewTyle:(long long)arg1;
- (id)loadingView;
- (void)checkDetailVC;
- (void)checkMoreVC;
- (void)updateTimeLabel;
- (void)addSchemeViewWithsolutionModel:(id)arg1;
- (id)generateOfOPolylineWithLocationArray:(id)arg1;
- (void)switchToOFOWithsname:(id)arg1 dname:(id)arg2 loactionArray:(id)arg3;
- (void)switchToOFOWithBicycleLineModel:(id)arg1;
- (void)unbindUserLOcation;
- (void)bindUserLocation;
- (void)forceUpdateETAList;
- (void)handleBusDidSwitchNotification:(id)arg1;
- (void)handleBusWillSwitchNotification:(id)arg1;
- (void)processTrafficRefreshNotification:(id)arg1;
- (void)handleETARefreshNotification:(id)arg1;
- (void)updateMapViewModelForLooper:(_Bool)arg1;
- (void)restartTrafficRefreshLoop;
- (void)restartETARefreshLoopAndRefreshImmediately:(_Bool)arg1;
- (void)removeHomeLoop;
- (void)startHomeLoop;
- (void)removeBusSwitchNotification;
- (void)addBusSwitchNotification;
- (void)showTransitList;
- (void)recoveryFromMemory;
- (void)showAbnormalMapStatus;
- (void)generateListModelContexModel;
- (void)fetchSoulationList;
- (void)homeTransitListRecovery;
@property(retain, nonatomic) DGPHomeSchemeView *schemeView; // @dynamic schemeView;
@property(retain, nonatomic) DiDiPOIEntityModel *destPOIEntityModel; // @dynamic destPOIEntityModel;
@property(retain, nonatomic) DiDiPOIEntityModel *originPOIEntityModel; // @dynamic originPOIEntityModel;
@property(retain, nonatomic) NSDate *appointmentDate; // @dynamic appointmentDate;
@property(retain, nonatomic) DGPRefreshEtaTask *trafficRefreshTask; // @dynamic trafficRefreshTask;
@property(retain, nonatomic) DGPRefreshEtaTask *etaRefreshTask; // @dynamic etaRefreshTask;
@property(retain, nonatomic) DGPTransitMapBusiness *transitMapBusiness; // @dynamic transitMapBusiness;
@property(retain, nonatomic) NSDate *currentDate; // @dynamic currentDate;
@property(retain, nonatomic) DGPTransferSolutionListModel *listModel; // @dynamic listModel;
- (void)slideInWithDuration:(double)arg1;
- (void)slideOutWithDuration:(double)arg1;
- (void)removeUserGuideView;
- (void)initUserGuideView;
@property(retain, nonatomic) DGPUserInstructView *instructView; // @dynamic instructView;
- (void)ONEUserStoreDidKickOff;
- (void)ONEUserStoreDidLogout;
- (void)ONEUserStoreDidLogin;
- (_Bool)shouldShowTabUnit;
- (void)bamaiDidselectedLog;
- (id)safeStr:(id)arg1;
- (id)webAppUrl;
- (void)configVerneEntranceButton;
- (void)verneButtonClick;
- (void)updateVerneButtonPositionWithRecommend:(_Bool)arg1;
- (void)initVerneModule;
@property(retain, nonatomic) UIButton *verneButton; // @dynamic verneButton;
@property(retain, nonatomic) DGPHomepageVerneContainerView *verneContainerView; // @dynamic verneContainerView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isHomePage;
- (void)hongBaoAnimation;
- (void)showHongBaoView;
- (void)cout;
- (void)startCountDown;
- (void)layoutWaitpublicBtnWithRecommend:(_Bool)arg1;
- (void)downLoadHongBaoImageWithUrl:(id)arg1;
- (void)downLoadImageWithImageUrl:(id)arg1;
- (id)charterDateFormatterWithTimeStamp:(double)arg1;
- (_Bool)isSameDay:(long long)arg1 date2:(long long)arg2;
- (void)endWaitPublicTimer;
- (_Bool)isStartTimeer;
- (void)startWaitPublicTimer;
- (void)countDown;
- (void)gotoBannerWebView;
- (void)gotoLock;
- (void)waitPublicButtonClick;
- (void)fetchLogin;
- (void)updateBtnStatusWithLockStatus:(long long)arg1;
- (long long)unlockPublicBtnStatus;
- (void)showHongBaoEerrorMessage;
- (void)waitPublicBtnStatus;
- (void)checkCachActivity;
- (void)unlockGesture;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)disMissActivityView;
- (void)initWaitPublicView;
@property(nonatomic) long long lockType; // @dynamic lockType;
@property(retain, nonatomic) DGPUnLockWaitPublicModel *unLockWaitPublicModel; // @dynamic unLockWaitPublicModel;
@property(retain, nonatomic) DGPWaitPublicStatusModel *waitPublicStatusModel; // @dynamic waitPublicStatusModel;
@property(retain, nonatomic) UILabel *countLabel; // @dynamic countLabel;
@property(retain, nonatomic) UIView *countView; // @dynamic countView;
@property(nonatomic) long long timeOutTime; // @dynamic timeOutTime;
@property(retain, nonatomic) HJTimer *coutDownTimer; // @dynamic coutDownTimer;
@property(retain, nonatomic) DGPHomepageVerneContainerView *waitContainerView; // @dynamic waitContainerView;
@property(retain, nonatomic) UIButton *waitPublicButton; // @dynamic waitPublicButton;
@property(retain, nonatomic) UIImageView *activityImageView; // @dynamic activityImageView;
@property(retain, nonatomic) UIView *activityBacView; // @dynamic activityBacView;
@property(retain, nonatomic) UILabel *countDownLabel; // @dynamic countDownLabel;
@property(retain, nonatomic) HJTimer *timer; // @dynamic timer;
@property(nonatomic) long long secondsCountDown; // @dynamic secondsCountDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

