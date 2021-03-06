//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMRadioDummySong, NMSong, NMSportFmLoadSongRequest, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface NMRunFMManager : NSObject <NMHttpRequestDelegate>
{
    _Bool _isWorking;
    NSMutableArray *_songs;
    NMRadioDummySong *_dummySong;
    NMSong *_currentSong;
    NMSportFmLoadSongRequest *_loadRequest;
    _Bool _isLoading;
    long long _retryCount;
    long long _lastBPMLevel;
    NSMutableArray *_listenedSongIds;
    unsigned long long _minBpmStartTimes;
    _Bool _offlineAlertShown;
    NSMutableDictionary *_bpmInfoDic;
    _Bool _maybeUsing;
}

+ (long long)convertToBpmLevel:(long long)arg1;
+ (id)defaultManager;
@property(nonatomic) _Bool maybeUsing; // @synthesize maybeUsing=_maybeUsing;
@property(readonly, retain, nonatomic) NSDictionary *bpmInfoDic; // @synthesize bpmInfoDic=_bpmInfoDic;
- (void).cxx_destruct;
- (void)_alertOffline;
- (_Bool)changeToOfflinePageMuisc;
- (void)reachabilityChanged;
- (void)auditionStatusChanged:(id)arg1;
- (void)requestCancelled:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
@property(readonly, nonatomic) NSArray *rankBpmSongArray;
@property(readonly, nonatomic) NMSong *currentSong;
- (void)addSong:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *listenedSongIds;
- (void)trashNext;
- (void)_findAndPlayNext;
- (void)playNext:(_Bool)arg1;
- (void)resetData;
- (_Bool)isCurrentSongValidForResult;
- (void)stopPlay;
- (void)_loadSongFromOfflinePackage;
- (void)_loadSongFromServer;
- (void)loadMoreSongs;
- (void)bpmChange:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

