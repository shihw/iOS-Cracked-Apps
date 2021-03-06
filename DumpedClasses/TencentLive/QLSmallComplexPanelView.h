//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLPlayerRateSelectPanelDelegate.h"
#import "QLPlayerSleepSelectPanelDelegate.h"

@class NSString, NSTimer, QLPlayerRateSelectPanel, QLPlayerSleepSelectPanel, UIButton, UILabel;

@interface QLSmallComplexPanelView : UIView <QLPlayerRateSelectPanelDelegate, QLPlayerSleepSelectPanelDelegate>
{
    _Bool _favorite;
    _Bool _favoriteBtnEnable;
    _Bool _favoriteBtnHidden;
    _Bool _shareBtnEnable;
    _Bool _shareBtnHidden;
    _Bool _chatRoomBtnEnable;
    _Bool _chatRoomBtnHidden;
    _Bool _sleepBtnEnable;
    _Bool _sleepBtnHidden;
    _Bool _isInSleepMode;
    _Bool _rateBtnEnable;
    _Bool _rateBtnHidden;
    _Bool _isInRateMode;
    _Bool _audioBtnEnable;
    _Bool _audioBtnHidden;
    _Bool _isInAudioMode;
    _Bool _isLiveVideo;
    id <QLSmallComplexPanelViewDelegate> _delegate;
    double _topPadding;
    UIButton *_favoriteButton;
    UIButton *_shareButton;
    UIButton *_chatRoomButton;
    UIButton *_sleepButton;
    UIButton *_rateButton;
    UIButton *_audioButton;
    QLPlayerSleepSelectPanel *_sleepPanel;
    QLPlayerRateSelectPanel *_ratePanel;
    NSTimer *_progressTimer;
    UILabel *_sleepTimeLabel;
}

@property(retain, nonatomic) UILabel *sleepTimeLabel; // @synthesize sleepTimeLabel=_sleepTimeLabel;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) QLPlayerRateSelectPanel *ratePanel; // @synthesize ratePanel=_ratePanel;
@property(retain, nonatomic) QLPlayerSleepSelectPanel *sleepPanel; // @synthesize sleepPanel=_sleepPanel;
@property(nonatomic) _Bool isLiveVideo; // @synthesize isLiveVideo=_isLiveVideo;
@property(retain, nonatomic) UIButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) UIButton *rateButton; // @synthesize rateButton=_rateButton;
@property(retain, nonatomic) UIButton *sleepButton; // @synthesize sleepButton=_sleepButton;
@property(retain, nonatomic) UIButton *chatRoomButton; // @synthesize chatRoomButton=_chatRoomButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool isInAudioMode; // @synthesize isInAudioMode=_isInAudioMode;
@property(nonatomic) _Bool audioBtnHidden; // @synthesize audioBtnHidden=_audioBtnHidden;
@property(nonatomic) _Bool audioBtnEnable; // @synthesize audioBtnEnable=_audioBtnEnable;
@property(nonatomic) _Bool isInRateMode; // @synthesize isInRateMode=_isInRateMode;
@property(nonatomic) _Bool rateBtnHidden; // @synthesize rateBtnHidden=_rateBtnHidden;
@property(nonatomic) _Bool rateBtnEnable; // @synthesize rateBtnEnable=_rateBtnEnable;
@property(nonatomic) _Bool isInSleepMode; // @synthesize isInSleepMode=_isInSleepMode;
@property(nonatomic) _Bool sleepBtnHidden; // @synthesize sleepBtnHidden=_sleepBtnHidden;
@property(nonatomic) _Bool sleepBtnEnable; // @synthesize sleepBtnEnable=_sleepBtnEnable;
@property(nonatomic) _Bool chatRoomBtnHidden; // @synthesize chatRoomBtnHidden=_chatRoomBtnHidden;
@property(nonatomic) _Bool chatRoomBtnEnable; // @synthesize chatRoomBtnEnable=_chatRoomBtnEnable;
@property(nonatomic) _Bool shareBtnHidden; // @synthesize shareBtnHidden=_shareBtnHidden;
@property(nonatomic) _Bool shareBtnEnable; // @synthesize shareBtnEnable=_shareBtnEnable;
@property(nonatomic) _Bool favoriteBtnHidden; // @synthesize favoriteBtnHidden=_favoriteBtnHidden;
@property(nonatomic) _Bool favoriteBtnEnable; // @synthesize favoriteBtnEnable=_favoriteBtnEnable;
@property(nonatomic) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic) __weak id <QLSmallComplexPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1;
- (_Bool)shouldEnabelSleepAfterCurrentPlayback;
- (void)didSelectSleepOption:(_Bool)arg1;
- (void)updateSleepTime;
- (void)stopProgressTimer;
- (void)setupProgressTimer;
- (double)getPlayerRate;
- (void)didSelectRateValue:(double)arg1;
- (void)hideVODButton;
- (void)willShowComplexPanel;
- (void)layoutSubviews;
- (void)onAudioClicked:(id)arg1;
- (void)onRateClicked:(id)arg1;
- (void)onSleepClicked:(id)arg1;
- (void)onChatRoomClicked:(id)arg1;
- (void)onShareClicked:(id)arg1;
- (void)onFavoriteClicked:(id)arg1;
- (void)dismissView;
- (void)tapDismissView:(id)arg1;
- (void)removeDotViewForTag:(int)arg1;
- (id)createDotViewForTag:(int)arg1;
- (void)dealloc;
- (id)createButton:(id)arg1 selImg:(id)arg2 sel:(SEL)arg3 title:(id)arg4;
- (void)addConfigView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

