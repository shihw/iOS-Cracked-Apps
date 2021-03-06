//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseDetailViewController.h"

#import "QLLiveV3DispatchCtlMessage.h"
#import "QLLiveV3TabsViewDelegate.h"
#import "QLLliveV3LivingDetailDataSouce.h"
#import "QLMomentDraftManagerDelegate.h"
#import "QLMutilCameraDataSourceProtocol.h"
#import "QLMutilCameraDelegateProtocol.h"
#import "QLPageNavigatorDatasource.h"
#import "QLPageNavigatorDelegate.h"
#import "QLSeeBackBusinessStateProtocol.h"

@class NSMutableDictionary, NSString, QLASIHTTPRequest, QLEditInputView, QLLiveChatPublishLable, QLLiveV3DetailModel, QLLiveV3DetailPollModel, QLLiveV3TabsView, QLLiveV3TopBannerView, QLLivev3TicketInfoModel, QLMovieItem, QLMutilCameraHandler, QLMutilCameraTipModel, QLPageNavigator, QLSImageView, QLShowRoomEntranceHandler, QLStarCommentInputView, QLTalkingRoomKeyboardCtl, UIButton, UIView;

@interface QLLiveV3LivingDetailViewCtl : QLBaseDetailViewController <QLPageNavigatorDatasource, QLPageNavigatorDelegate, QLMutilCameraDelegateProtocol, QLMutilCameraDataSourceProtocol, QLSeeBackBusinessStateProtocol, QLLliveV3LivingDetailDataSouce, QLLiveV3DispatchCtlMessage, QLLiveV3TabsViewDelegate, QLMomentDraftManagerDelegate>
{
    NSMutableDictionary *_dicCtls;
    _Bool _keyboardBeforeIsShow;
    UIView *_keyboardMainView;
    NSString *_keyboarMsgid;
    id _keyboardDelegate;
    QLPageNavigator *_pageNavi;
    _Bool _isAddSmallScreen;
    _Bool showedMutilTipButton;
    _Bool shouldShowControlView;
    QLLivev3TicketInfoModel *_ticketInfo;
    _Bool _isInPackUpMode;
    _Bool _pageLoaded;
    _Bool _showedMutilTips;
    _Bool _switchCameraed;
    _Bool _forceRefreshCurrentTabView;
    UIView *_headerBgView;
    QLLiveV3TabsView *_tabsView;
    UIView *_tabsContentView;
    UIView *_contentView;
    UIView *_bottomPayView;
    UIView *_liveEndHeaderView;
    QLSImageView *_liveEndHeaderImgView;
    UIButton *_liveEndPlayBtn;
    unsigned long long _currentLiveIndex;
    QLTalkingRoomKeyboardCtl *_talkRoomKeyboardCtl;
    QLLiveV3DetailModel *_detailModel;
    QLLiveV3DetailPollModel *_detailPollModel;
    QLMutilCameraHandler *_mutilCameraHandler;
    id <QLLiveV3DispatchDelegate><QLShowRoomViewControllerDelegate> _dispatchDelegate;
    QLLiveChatPublishLable *_publishLable;
    UIButton *_loginBtn;
    UIButton *_buyBtn;
    UIButton *_openVipBtn;
    QLASIHTTPRequest *_propRequest;
    unsigned long long _onlineNumber;
    unsigned long long _rankNumber;
    long long _lastPageIndex;
    UIButton *_liveEndSwitchCameraBtn;
    QLMutilCameraTipModel *_cameraTipModel;
    QLMovieItem *_cameraMovieItem;
    QLStarCommentInputView *_starCommentBottomView;
    QLEditInputView *_starReplyCommentInputView;
    QLLiveV3TopBannerView *_topBannerView;
    QLShowRoomEntranceHandler *_showRoomEntranceHandler;
}

+ (id)getTopLivingCtl;
+ (void)reportSubItemExplore:(id)arg1;
+ (void)checkMomentLogin;
+ (void)pushLogin;
@property(retain, nonatomic) QLShowRoomEntranceHandler *showRoomEntranceHandler; // @synthesize showRoomEntranceHandler=_showRoomEntranceHandler;
@property(retain, nonatomic) QLLiveV3TopBannerView *topBannerView; // @synthesize topBannerView=_topBannerView;
@property(retain, nonatomic) QLEditInputView *starReplyCommentInputView; // @synthesize starReplyCommentInputView=_starReplyCommentInputView;
@property(retain, nonatomic) QLStarCommentInputView *starCommentBottomView; // @synthesize starCommentBottomView=_starCommentBottomView;
@property(retain, nonatomic) QLMovieItem *cameraMovieItem; // @synthesize cameraMovieItem=_cameraMovieItem;
@property(retain, nonatomic) QLMutilCameraTipModel *cameraTipModel; // @synthesize cameraTipModel=_cameraTipModel;
@property(retain, nonatomic) UIButton *liveEndSwitchCameraBtn; // @synthesize liveEndSwitchCameraBtn=_liveEndSwitchCameraBtn;
@property(nonatomic) _Bool forceRefreshCurrentTabView; // @synthesize forceRefreshCurrentTabView=_forceRefreshCurrentTabView;
@property(nonatomic) _Bool switchCameraed; // @synthesize switchCameraed=_switchCameraed;
@property(nonatomic) _Bool showedMutilTips; // @synthesize showedMutilTips=_showedMutilTips;
@property long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
@property(nonatomic) unsigned long long rankNumber; // @synthesize rankNumber=_rankNumber;
@property(nonatomic) unsigned long long onlineNumber; // @synthesize onlineNumber=_onlineNumber;
@property(nonatomic) _Bool pageLoaded; // @synthesize pageLoaded=_pageLoaded;
@property(retain, nonatomic) QLASIHTTPRequest *propRequest; // @synthesize propRequest=_propRequest;
@property(nonatomic) _Bool isInPackUpMode; // @synthesize isInPackUpMode=_isInPackUpMode;
@property(retain, nonatomic) UIButton *openVipBtn; // @synthesize openVipBtn=_openVipBtn;
@property(retain, nonatomic) UIButton *buyBtn; // @synthesize buyBtn=_buyBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) QLLiveChatPublishLable *publishLable; // @synthesize publishLable=_publishLable;
@property __weak id <QLLiveV3DispatchDelegate><QLShowRoomViewControllerDelegate> dispatchDelegate; // @synthesize dispatchDelegate=_dispatchDelegate;
@property(retain, nonatomic) QLMutilCameraHandler *mutilCameraHandler; // @synthesize mutilCameraHandler=_mutilCameraHandler;
@property(nonatomic) __weak QLLiveV3DetailPollModel *detailPollModel; // @synthesize detailPollModel=_detailPollModel;
@property(nonatomic) __weak QLLiveV3DetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) QLTalkingRoomKeyboardCtl *talkRoomKeyboardCtl; // @synthesize talkRoomKeyboardCtl=_talkRoomKeyboardCtl;
@property(readonly) QLLivev3TicketInfoModel *ticketInfo; // @synthesize ticketInfo=_ticketInfo;
@property(nonatomic) unsigned long long currentLiveIndex; // @synthesize currentLiveIndex=_currentLiveIndex;
@property(retain, nonatomic) UIButton *liveEndPlayBtn; // @synthesize liveEndPlayBtn=_liveEndPlayBtn;
@property(retain, nonatomic) QLSImageView *liveEndHeaderImgView; // @synthesize liveEndHeaderImgView=_liveEndHeaderImgView;
@property(retain, nonatomic) UIView *liveEndHeaderView; // @synthesize liveEndHeaderView=_liveEndHeaderView;
@property(retain, nonatomic) UIView *bottomPayView; // @synthesize bottomPayView=_bottomPayView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *tabsContentView; // @synthesize tabsContentView=_tabsContentView;
@property(retain, nonatomic) QLLiveV3TabsView *tabsView; // @synthesize tabsView=_tabsView;
@property(retain, nonatomic) UIView *headerBgView; // @synthesize headerBgView=_headerBgView;
- (void).cxx_destruct;
- (void)forceClosePlayerForADJump;
- (void)onSeeBackStateChange:(id)arg1;
- (_Bool)didLiveEnded;
- (_Bool)shouldShowStarTheme;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
- (id)shareExtendInfo;
- (id)shareActionUrl;
- (id)shareContentTail;
- (id)shareContent;
- (id)shareReportInfo;
- (unsigned long long)shareDataType;
- (id)shareVideoInfo;
- (id)shareURL;
- (id)shareImage;
- (id)shareImageURL;
- (id)shareSubTitle;
- (id)shareTitle;
- (id)shareID;
- (_Bool)isPotraitInterface;
- (id)shareDataSource;
- (long long)getOnlineNumber;
- (_Bool)isShowPresentEntry;
- (id)pid;
- (id)getVideoCoverId;
- (void)didClickPhotoBtn;
- (_Bool)playerCanbePlayed;
- (id)getUserIDForDraftSpace;
- (id)getCurrentAttentionItem;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)payBillLoadFinishNotification:(id)arg1;
- (void)handleShowRedDot:(id)arg1;
- (void)tabsView:(id)arg1 didClickItem:(id)arg2;
- (void)_preLoadManHostPage;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)isCurrentCtlContainSubPageCtl;
- (_Bool)isRightModel:(id)arg1;
- (id)getCurrentPageCtl;
- (void)enterPageWithIndex:(long long)arg1;
- (void)leavePageWithIndex:(long long)arg1;
- (id)viewControllerForItem:(id)arg1;
- (_Bool)pageCtlExsist:(id)arg1;
- (double)heightOfPresentedSubViewCtl;
- (int)getLastTabItemClassIndex;
- (id)concertPayInfo;
- (void)refreshBottomViewStatus;
- (void)showBottomPublishView;
- (void)requestModelDidFinishLoad:(id)arg1;
- (id)pageChineseName;
- (void)refreshDetailPayStatus;
- (_Bool)hasPrePlayHeaderThumbClickPlay;
- (void)detailPageNavibarDidClickUnfolderBtn:(id)arg1;
- (void)kkPlayer:(id)arg1 didPackup:(_Bool)arg2;
- (void)showNavbar:(_Bool)arg1;
- (id)headerDefaultImageURL;
- (void)doThingsWhenLoginStateChanged;
- (id)getTalkingRoomKeyboardCtl;
- (id)getStarReplyCommentInputView;
- (id)getStarCommentBottomView;
- (id)getNoticeViewSuperView;
- (_Bool)shouldShowPresentEntry;
- (id)getTalkRoomTabCommentKey;
- (id)getAttentItem;
- (id)getMovieItem;
- (id)getRootPlayer;
- (id)getLivePid;
- (long long)getLiveStatus;
- (long long)getUserProfileType;
- (void)addLiveTopBannerView;
- (long long)headerViewHeight;
- (void)refreshSubCtlWithProfileChanged;
- (void)refreshSubCtlWithDetailPollModel:(id)arg1;
- (void)refreshHeaderView;
- (void)refreshPageThemeColor;
- (void)registerShowRoomEntrance;
- (void)refreshSubCtlWithDetailModel:(id)arg1 needPlay:(_Bool)arg2 newLiveID:(id)arg3;
- (void)refreshSubCtlWithDetailModel:(id)arg1 needPlay:(_Bool)arg2;
- (void)refreshSubCtlWithDetailModel:(id)arg1 needPlay:(_Bool)arg2 streamID:(id)arg3 ignoreDLNA:(_Bool)arg4;
- (void)doGestureConflict;
- (void)doPushFullScreen:(id)arg1;
- (_Bool)hasUnfolderButton;
- (void)doSomethingBeforePopup;
- (void)clickLiveEndShare:(id)arg1;
- (void)clickPlayVodVideo:(id)arg1;
- (void)liveEndSwitchCameraBtnAction;
- (void)configLiveEndSwitchCameraBtn;
- (void)refreshLiveEndStatus;
- (void)showSmallPlayer;
- (void)refreshMainTitle;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)pageNavigatorDidScroll:(id)arg1;
- (void)pageNavigator:(id)arg1 didNaviToIndex:(long long)arg2;
- (_Bool)pageNavigator:(id)arg1 pageExsistAtIndex:(long long)arg2;
- (id)pageNavigator:(id)arg1 viewCtlForIndex:(long long)arg2;
- (long long)numberOfPagesInNavigator:(id)arg1;
- (id)getCommentKey;
- (id)coverCFURLCreateStringByAddingPercentEscapes:(id)arg1 withLegalURL:(id)arg2 withEncodingType:(unsigned int)arg3;
- (_Bool)pageLoadFinished;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelPropRequest;
- (void)_registerStarCommentInputView;
- (void)_registStarReplayCommentInputView:(id)arg1;
- (void)_registStarCommentBottomView:(id)arg1;
- (_Bool)_shouldShowBtttomStarStarCommentView;
- (void)notifyForOpenUrl;
- (void)resetPlayer:(long long)arg1 withHistory:(_Bool)arg2;
- (void)mutilCameraLoadFinish;
- (void)updateFavirateButtonStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)navigationBarHidden;
- (long long)qlStausBarStyle;
- (void)didReceiveMemoryWarning;
- (void)forceShowCameraViewToTop;
- (_Bool)hasMutilCamera;
- (void)updateMutilCameraDataKey:(id)arg1 tips:(id)arg2 tipsCount:(long long)arg3;
- (id)mutilCameraReportDic;
- (_Bool)switchMutilCamera;
- (_Bool)hasMutilCameraTip;
- (_Bool)showMutilCameraTip;
- (_Bool)shouldAutorotateMutilCamera;
- (void)showLiveMutilCameraView;
- (long long)getCurrentPlayLiveStatus;
- (void)changeLiveIDInfo:(id)arg1;
- (void)changePidInfo:(id)arg1;
- (id)currentPlayerMovieItem;
- (id)cameraListTargetView;
- (_Bool)shouldShowControlViewInZhiBo;
- (id)pcidOfMutilCamera;
- (void)showCommentSuccessToast;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutoAuthorizeCheck;
- (_Bool)authRootPlayerCanBePlayed;
- (void)viewDidLoad;
- (void)resetImgsAfterExit;
- (void)prepareImgsForEntering;
- (void)popUp:(_Bool)arg1;
- (_Bool)isFullScreenMode;
- (id)createKKPlayer;
- (void)onPlayerToPlay:(id)arg1;
- (void)onPlayerToPause:(id)arg1;
- (void)registerNotifications;
- (void)setCommonProperties;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDispatchDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

