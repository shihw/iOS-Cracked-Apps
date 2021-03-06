//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMCProxyListener.h"

@class FMCSyncProxy, NMIpodMusicListViewController, NMMyDownloadViewController, NMPlayListDetailViewController, NSArray, NSMutableDictionary;

@interface NMFordApplinkManager : NSObject <FMCProxyListener>
{
    FMCSyncProxy *_applinkProxy;
    int _autoIncCorrID;
    _Bool _applinkStarted;
    _Bool _mainViewInitialized;
    _Bool _playerManagerStarted;
    _Bool _locked;
    _Bool _isPlaying;
    _Bool _isWaiting;
    _Bool _networkAlertShown;
    NSArray *_softButtons;
    NSMutableDictionary *_playlistDic;
    NMMyDownloadViewController *_tempDownloadController;
    NMPlayListDetailViewController *_tempPlaylistDetailController;
    NMIpodMusicListViewController *_tempIpodListController;
}

+ (_Bool)locked;
+ (void)start;
+ (id)_manager;
@property(retain, nonatomic) NMIpodMusicListViewController *tempIpodListController; // @synthesize tempIpodListController=_tempIpodListController;
@property(retain, nonatomic) NMPlayListDetailViewController *tempPlaylistDetailController; // @synthesize tempPlaylistDetailController=_tempPlaylistDetailController;
@property(retain, nonatomic) NMMyDownloadViewController *tempDownloadController; // @synthesize tempDownloadController=_tempDownloadController;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
- (void).cxx_destruct;
- (void)onPerformInteractionResponse:(id)arg1;
- (void)_showPlaylistView;
- (void)_createPlaylistView:(id)arg1;
- (void)_deletePlaylistView;
- (void)_gotoPlaylist;
- (void)_setCurrentSong;
- (void)onOnCommand:(id)arg1;
- (void)_createCommands;
- (id)_vrNameForPlayMode:(long long)arg1;
- (void)_alertForLogin;
- (void)_alertForPlayModeSwitch;
- (void)_alertForText:(id)arg1;
- (void)onOnButtonPress:(id)arg1;
- (void)_createPlayModeCommand;
- (void)_subscribeButtons;
- (id)_softButtons;
- (void)_createMainView;
- (void)_playPlaylist:(id)arg1;
- (void)_playLocal;
- (void)_playStatusChanged;
- (void)_songChange;
- (void)_playerManagerStarted;
- (_Bool)_checkLogin;
- (void)onOnLockScreenNotification:(id)arg1;
- (void)_lockOrUnlcikSceen:(_Bool)arg1;
- (void)onProxyClosed;
- (void)onProxyOpened;
- (void)onOnHMIStatus:(id)arg1;
- (void)onOnDriverDistraction:(id)arg1;
- (id)_autoIncCorrID;
- (void)sendRPCRequest:(id)arg1;
- (void)_stopApplink;
- (void)_startApplink;
- (void)dealloc;
- (id)init;

@end

