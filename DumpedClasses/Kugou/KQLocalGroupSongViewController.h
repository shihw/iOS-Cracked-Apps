//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "SelectMusicBaseCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGDefaultNetErrorView, NSMutableArray, NSString, SongInfo, UITableView;

@interface KQLocalGroupSongViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, SelectMusicBaseCellDelegate>
{
    UITableView *_songTaleView;
    KGDefaultNetErrorView *_errorView;
    long long _groupId;
    NSMutableArray *_songsArray;
    NSMutableArray *_musicStateArr;
    SongInfo *_songPlaying;
    SongInfo *_lastSongE;
    NSMutableArray *_arSelectedSongs;
    id <SelectMusicBaseCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <SelectMusicBaseCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSMutableArray *arSelectedSongs; // @synthesize arSelectedSongs=_arSelectedSongs;
@property(retain, nonatomic) SongInfo *lastSongE; // @synthesize lastSongE=_lastSongE;
@property(retain, nonatomic) SongInfo *songPlaying; // @synthesize songPlaying=_songPlaying;
@property(retain, nonatomic) NSMutableArray *musicStateArr; // @synthesize musicStateArr=_musicStateArr;
@property(retain, nonatomic) NSMutableArray *songsArray; // @synthesize songsArray=_songsArray;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UITableView *songTaleView; // @synthesize songTaleView=_songTaleView;
- (void).cxx_destruct;
- (void)SelectMusicListenClicked:(id)arg1;
- (void)SelectMusicBaseCellClicked:(id)arg1 andToBeSelected:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showTableView;
- (void)showErrorView;
- (_Bool)contrastSongInfoHashWithSongInfoArray:(id)arg1 andSongInfo:(id)arg2;
- (void)requestAgain;
- (void)requestData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithGroupId:(long long)arg1 andSelectedSongs:(id)arg2 andCellDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

