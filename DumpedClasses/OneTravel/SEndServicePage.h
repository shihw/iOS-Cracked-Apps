//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPage.h"

#import "SActiveBoardsComProtocol.h"
#import "SBottomContainerViewDelegate.h"
#import "SBulletinBoardsCallback.h"
#import "SNIMComProtocol.h"
#import "SNewDriverCarInfoCardComProtocol.h"
#import "SOrderActComDelegate.h"
#import "SOrderComDelegate.h"
#import "SPayBillComProtocol.h"
#import "SPayFnishedAlertDelegate.h"
#import "SPhoneProtectedComProtocol.h"
#import "SPosMarkerComDelegate.h"

@class NSString, SActiveBoardsCom, SBicycleNumberCom, SBulletinBoardsCom, SCarpoolCom, SDriverCarInfoCardCom, SEvaluateCom, SMapBizCom, SNIMCom, SNewDriverCarInfoCardCom, SOrderActCom, SOrderCom, SOrderTrajCom, SPaidAlertCom, SPayBillCom, SPayCom, SPhoneProtectedCom, SPosMarkerCom, SRedPacketCom, SShareCom;

@interface SEndServicePage : SPTPage <SOrderActComDelegate, SPosMarkerComDelegate, SNIMComProtocol, SPayBillComProtocol, SPhoneProtectedComProtocol, SNewDriverCarInfoCardComProtocol, SActiveBoardsComProtocol, SBottomContainerViewDelegate, SPayFnishedAlertDelegate, SBulletinBoardsCallback, SOrderComDelegate>
{
    SOrderActCom *_orderActCom;
    SEvaluateCom *_evaluateCom;
    SPayCom *_payCom;
    SBulletinBoardsCom *_bbCom;
    SShareCom *_shareCom;
    SNewDriverCarInfoCardCom *_nDriverInfoCom;
    SDriverCarInfoCardCom *_driverInfoCom;
    SMapBizCom *_mapBizCom;
    SPosMarkerCom *_posMarkerCom;
    SBicycleNumberCom *_bicycleNumberCom;
    SActiveBoardsCom *_boardCom;
    SPhoneProtectedCom *_phoneProtectedCom;
    SNIMCom *_imCom;
    SOrderCom *_orderCom;
    SPayBillCom *_payBillCom;
    SCarpoolCom *_carpoolCom;
    SPaidAlertCom *_paidAlertCom;
    SOrderTrajCom *_orderTrajCom;
    SRedPacketCom *_redPacketCom;
}

@property(retain, nonatomic) SRedPacketCom *redPacketCom; // @synthesize redPacketCom=_redPacketCom;
@property(retain, nonatomic) SOrderTrajCom *orderTrajCom; // @synthesize orderTrajCom=_orderTrajCom;
@property(retain, nonatomic) SPaidAlertCom *paidAlertCom; // @synthesize paidAlertCom=_paidAlertCom;
@property(retain, nonatomic) SCarpoolCom *carpoolCom; // @synthesize carpoolCom=_carpoolCom;
@property(retain, nonatomic) SPayBillCom *payBillCom; // @synthesize payBillCom=_payBillCom;
@property(retain, nonatomic) SOrderCom *orderCom; // @synthesize orderCom=_orderCom;
@property(retain, nonatomic) SNIMCom *imCom; // @synthesize imCom=_imCom;
@property(retain, nonatomic) SPhoneProtectedCom *phoneProtectedCom; // @synthesize phoneProtectedCom=_phoneProtectedCom;
@property(retain, nonatomic) SActiveBoardsCom *boardCom; // @synthesize boardCom=_boardCom;
@property(retain, nonatomic) SBicycleNumberCom *bicycleNumberCom; // @synthesize bicycleNumberCom=_bicycleNumberCom;
@property(retain, nonatomic) SPosMarkerCom *posMarkerCom; // @synthesize posMarkerCom=_posMarkerCom;
@property(retain, nonatomic) SMapBizCom *mapBizCom; // @synthesize mapBizCom=_mapBizCom;
@property(retain, nonatomic) SDriverCarInfoCardCom *driverInfoCom; // @synthesize driverInfoCom=_driverInfoCom;
@property(retain, nonatomic) SNewDriverCarInfoCardCom *nDriverInfoCom; // @synthesize nDriverInfoCom=_nDriverInfoCom;
@property(retain, nonatomic) SShareCom *shareCom; // @synthesize shareCom=_shareCom;
@property(retain, nonatomic) SBulletinBoardsCom *bbCom; // @synthesize bbCom=_bbCom;
@property(retain, nonatomic) SPayCom *payCom; // @synthesize payCom=_payCom;
@property(retain, nonatomic) SEvaluateCom *evaluateCom; // @synthesize evaluateCom=_evaluateCom;
@property(retain, nonatomic) SOrderActCom *orderActCom; // @synthesize orderActCom=_orderActCom;
- (void).cxx_destruct;
- (void)orderComShowActivitySheetView:(id)arg1 animated:(_Bool)arg2;
- (void)orderComShowEvaluateSheetView:(id)arg1 animated:(_Bool)arg2;
- (void)orderComShowPaySheetView:(id)arg1 animated:(_Bool)arg2;
- (void)awardAlertDidConfirm:(id)arg1 shareModel:(id)arg2;
- (void)containerView:(id)arg1 didTransferToHeight:(double)arg2 gesture:(_Bool)arg3;
- (_Bool)containerViewCanSwitchExpand:(id)arg1;
- (id)viewSourcesForContainerView:(id)arg1;
- (void)evaluateCom:(id)arg1 type:(unsigned long long)arg2 getActivityView:(CDUnknownBlockType)arg3;
- (void)evaluateCom:(id)arg1 evaluateCompleted:(unsigned long long)arg2;
- (void)evaluateCom:(id)arg1 evaluateWillDismiss:(unsigned long long)arg2;
- (void)evaluateCom:(id)arg1 didSelectWithRating:(long long)arg2;
- (struct CGRect)viewFrameForComponent:(id)arg1;
- (id)viewContainerForComponent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)createCom:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)canEvaluateFromPayFinished:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)activeBoardsCom:(id)arg1 showEvaluateActivityView:(unsigned long long)arg2 isFromPayFinished:(_Bool)arg3 automatic:(_Bool)arg4;
- (id)activitySheetContainerView;
- (void)activeBoardComShowLotteryAlert;
- (void)activeBoardsCom:(id)arg1 shareModel:(id)arg2;
- (void)driverAvatarActionForSDriverCarInfoCardCom:(id)arg1 openDriverPage:(id)arg2;
- (id)actComForNewDriverCarCom;
- (void)orderActCom:(id)arg1 didClickItemWithType:(long long)arg2;
- (struct UIEdgeInsets)orderTrajMapRegionInsetForCom:(id)arg1;
- (struct UIEdgeInsets)posMarkerMapRegionInsetForCom:(id)arg1;
- (void)bulletinBoards:(id)arg1 didBBFrameChanged:(struct CGRect)arg2 isOpened:(_Bool)arg3 isSupportHandle:(_Bool)arg4;
- (id)bulletinBoards:(id)arg1 belowViewForViewContainer:(id)arg2;
- (void)bulletinBoards:(id)arg1 clickedCard:(id)arg2 actBtnAtIndex:(long long)arg3 actionType:(long long)arg4 targetURL:(id)arg5 extenralParams:(id)arg6;
- (void)imCom:(id)arg1 didAddToSuperView:(_Bool)arg2;
- (void)payBill:(id)arg1 loadDataForPage:(_Bool)arg2;
- (void)payBillRefreshModel:(id)arg1;
- (void)payBill:(id)arg1 keyBoardWillHidden:(_Bool)arg2;
- (void)payBill:(id)arg1 keyBoradHeight:(unsigned long long)arg2;
- (void)payBill:(id)arg1 inputFee:(id)arg2;
- (void)phoneProtectCom:(id)arg1 didAddToSuperView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

