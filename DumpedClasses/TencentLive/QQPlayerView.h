//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQPlayer, QQSelfPlayerVideoView;

@interface QQPlayerView : UIView
{
    QQSelfPlayerVideoView *_mQQSelfView;
    int _mPlayerType;
    QQPlayer *_qqPlayer;
    NSString *_videoGravity;
}

+ (Class)layerClass;
@property(copy) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(retain, nonatomic, getter=getQQPlayer) QQPlayer *qqPlayer; // @synthesize qqPlayer=_qqPlayer;
- (void).cxx_destruct;
- (_Bool)checkPlayerLayerIsShow;
- (void)dealloc;
- (void)resetPlayerView;
- (void)setVideoFillMode:(id)arg1;
- (void)setPlayer:(id)arg1 playerType:(int)arg2;
- (id)playerLayer;
- (id)initWithFrame:(struct CGRect)arg1 playerType:(int)arg2;

@end

