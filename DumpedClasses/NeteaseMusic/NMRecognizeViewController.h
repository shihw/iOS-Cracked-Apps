//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "NMHttpRequestDelegate.h"
#import "NMNewAudioRecoderDelegate.h"
#import "NMTitleTabViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMRecognizeDeleteAllRequest, NMRecognizeHistoryRequest, NMTitleTabView, NSMutableArray, NSString;

@interface NMRecognizeViewController : NMSongCellBaseController <NMTitleTabViewDelegate, NMNewAudioRecoderDelegate, NMHttpRequestDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NMRecognizeHistoryRequest *_historyRequest;
    NSMutableArray *_historyArray;
    _Bool _isEnd;
    _Bool _isLoading;
    _Bool _firstIn;
    NSMutableArray *_deleteRequestArray;
    NSMutableArray *_deletingSongIdArray;
    NMRecognizeDeleteAllRequest *_deleteAllRequest;
    NMTitleTabView *_titleTabView;
}

- (void).cxx_destruct;
- (void)refreshUMG;
- (void)reachabilityChanged:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)audioRecorderRecognizeServerError;
- (void)audioRecorderRecognizeDidFail;
- (void)audioRecorderRecognizeDidSuccess:(id)arg1;
- (void)audioRecorderDidFinish:(id)arg1;
- (void)audioRecorderReceiveInterruption:(id)arg1;
- (void)audioRecorderFailToRecord:(id)arg1;
- (void)audioRecorderDidStartRecord:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)toggleCell:(id)arg1;
- (void)doDeleteAllHistory;
- (void)recognizeDeleteAll;
- (void)navigationPopGestureWillBegin:(id)arg1;
- (void)appResignActive:(id)arg1;
- (void)downloadSongStateChanged:(id)arg1;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)backAction:(id)arg1;
- (void)doStartRecord;
- (void)recognizeButtonClicked:(id)arg1;
- (void)cancelRecognize;
- (_Bool)recognizeUpgrade;
- (_Bool)addRecognizeToDesktop:(_Bool)arg1;
- (void)showAlertForAddRecognizeToDesktop:(_Bool)arg1;
- (void)showModalNoticeForAddRecognizeToDesktop:(_Bool)arg1;
- (void)popAfterAddToDesktopNoticeDissmissed:(_Bool)arg1 buttonClicked:(_Bool)arg2;
- (void)loadHistory;
- (void)doLoadHistory;
- (void)finishLoadHistory;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (void)tabView:(id)arg1 didSelectedAtIndex:(unsigned long long)arg2;
- (void)testRecognizeResult;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)animationView;
- (id)tableView;
- (id)recognizeView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

