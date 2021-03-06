//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGLocalMusicBackUpSheetDelegate.h"
#import "KGMusicControlViewControllerDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "RefreshControlDelegate.h"

@class KGDefaultHoldTipsView, KGLocalMusicBackUpDeviceEntity, KGLocalMusicBackUpSheet, KGMusicControlViewController, KGMusicTableViewAdapter, KGThemeButton, KGThemeLabel, NSMutableArray, NSString, UIView;

@interface KGLocalMusicBackUpController : KGViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, KGLocalMusicBackUpSheetDelegate, RefreshControlDelegate, KGMusicControlViewControllerDelegate>
{
    _Bool _isFirstEnter;
    KGMusicTableViewAdapter *_tableViewAdapter;
    KGMusicControlViewController *_musicControl;
    NSMutableArray *_songList;
    NSMutableArray *_deviceList;
    KGLocalMusicBackUpSheet *_sheet;
    UIView *_blankView;
    KGLocalMusicBackUpDeviceEntity *_selectDevice;
    KGDefaultHoldTipsView *_netErrorView;
    KGThemeButton *_topBtn;
    KGThemeLabel *_footView;
    KGThemeLabel *_totalCountLabel;
    KGLocalMusicBackUpSheet *_deviceSheet;
    NSMutableArray *_unShowList;
}

@property(retain, nonatomic) NSMutableArray *unShowList; // @synthesize unShowList=_unShowList;
@property(nonatomic) _Bool isFirstEnter; // @synthesize isFirstEnter=_isFirstEnter;
@property(retain, nonatomic) KGLocalMusicBackUpSheet *deviceSheet; // @synthesize deviceSheet=_deviceSheet;
@property(retain, nonatomic) KGThemeLabel *totalCountLabel; // @synthesize totalCountLabel=_totalCountLabel;
@property(retain, nonatomic) KGThemeLabel *footView; // @synthesize footView=_footView;
@property(nonatomic) __weak KGThemeButton *topBtn; // @synthesize topBtn=_topBtn;
@property(retain, nonatomic) KGDefaultHoldTipsView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) KGLocalMusicBackUpDeviceEntity *selectDevice; // @synthesize selectDevice=_selectDevice;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) KGLocalMusicBackUpSheet *sheet; // @synthesize sheet=_sheet;
@property(retain, nonatomic) NSMutableArray *deviceList; // @synthesize deviceList=_deviceList;
@property(retain, nonatomic) NSMutableArray *songList; // @synthesize songList=_songList;
@property(retain, nonatomic) KGMusicControlViewController *musicControl; // @synthesize musicControl=_musicControl;
@property(retain, nonatomic) KGMusicTableViewAdapter *tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
- (void).cxx_destruct;
- (void)setViewWillHide;
- (void)setViewWillShow;
- (id)refreshSelectItem:(id)arg1 buttonTagType:(int)arg2;
- (void)firstEnterPage;
- (void)didSelectDevice:(id)arg1;
- (void)setTopBtnTitle:(id)arg1;
- (void)requestAgain;
- (void)deleteLocalDataWithSongs:(id)arg1;
- (void)deleteSongs:(id)arg1;
- (void)hinddenKugouErrorView;
- (void)hinddenNetErrorView;
- (void)showNetErrorView;
- (void)hinddeBlankView;
- (void)showBlankView;
- (long long)showPlayBarWay;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)KGUsingControllerState:(int)arg1;
- (void)showDeviceSheee;
- (void)createUI;
- (void)getDevicesAndShowSheet;
- (void)dealloc;
- (void)getDataWithDeviceMid:(id)arg1 withIsShowLoading:(_Bool)arg2;
- (void)changeShotBgColor:(id)arg1 isShow:(_Bool)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

