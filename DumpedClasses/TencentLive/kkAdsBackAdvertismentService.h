//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerEventProtocol.h"

@class NSString;

@interface kkAdsBackAdvertismentService : NSObject <KKMediaPlayerEventProtocol>
{
    _Bool _isRequestBackAdvertisement;
    _Bool _didFinishedRequestBackAdvertisement;
    _Bool _currentPlaybackDidFinished;
    double _currentTime;
    double _jumpEndTime;
    double _duration;
    double _backAdvertisementRequestDuration;
    _Bool _isPlayingBackAdvertisement;
    unsigned long long _playFinishedRoute;
    id <KKbackAdvertismentAddedProtocol> _delegate;
}

@property id <KKbackAdvertismentAddedProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPlayingBackAdvertisement; // @synthesize isPlayingBackAdvertisement=_isPlayingBackAdvertisement;
@property(readonly, nonatomic) unsigned long long playFinishedRoute; // @synthesize playFinishedRoute=_playFinishedRoute;
- (void)didMediaPlayerScreenChanged:(_Bool)arg1;
- (void)didMediaPlayerProgressUpdated:(double)arg1 duration:(double)arg2;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)backAdsRequestWithPlayerProgressUpdated:(double)arg1 jumpEndTime:(double)arg2 duration:(double)arg3;
- (_Bool)isPlayBackAdvertisement:(unsigned long long)arg1;
- (void)setJumpEndTimeLength:(double)arg1;
- (void)setCurrentTimeLength:(double)arg1;
- (_Bool)isBackAdsReady;
- (void)playingBackAdvertisement:(_Bool)arg1;
- (void)setBackAdsReady:(_Bool)arg1;
- (_Bool)isPlaybackFinished;
- (void)resetValue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
