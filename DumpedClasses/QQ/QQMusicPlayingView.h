//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, KSLyricPannel, NSString, UIButton, UIColor, UIImageView, UILabel;

@interface QQMusicPlayingView : UIView
{
    _Bool _useBlurEffectOnAlbumCoverImage;
    NSString *_albumCoverImageUrl;
    NSString *_songName;
    NSString *_singerName;
    NSString *_songCopyRightInfoTips;
    id <QQMusicPlayingViewDelegate> _delegate;
    UIImageView *_albumCoverView;
    UIImageView *_albumCoverFillBlankView;
    UILabel *_songInfoLabel;
    UILabel *_singerInfoLabel;
    KSLyricPannel *_lyricPannel;
    UILabel *_songCopyRightInfoLabel;
    UIColor *_lyricColor;
    UIColor *_backgroundColor;
    UIButton *_playBtn;
    UIButton *_favBtn;
    UIButton *_downloadBtn;
    UIImageView *_popoverTipsImageView;
    UILabel *_lyricTips;
    CAGradientLayer *_gradientTopLayer;
    CAGradientLayer *_gradientBottomLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientBottomLayer; // @synthesize gradientBottomLayer=_gradientBottomLayer;
@property(retain, nonatomic) CAGradientLayer *gradientTopLayer; // @synthesize gradientTopLayer=_gradientTopLayer;
@property(retain, nonatomic) UILabel *lyricTips; // @synthesize lyricTips=_lyricTips;
@property(retain, nonatomic) UIImageView *popoverTipsImageView; // @synthesize popoverTipsImageView=_popoverTipsImageView;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(retain, nonatomic) UIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *lyricColor; // @synthesize lyricColor=_lyricColor;
@property(retain, nonatomic) UILabel *songCopyRightInfoLabel; // @synthesize songCopyRightInfoLabel=_songCopyRightInfoLabel;
@property(retain, nonatomic) KSLyricPannel *lyricPannel; // @synthesize lyricPannel=_lyricPannel;
@property(retain, nonatomic) UILabel *singerInfoLabel; // @synthesize singerInfoLabel=_singerInfoLabel;
@property(retain, nonatomic) UILabel *songInfoLabel; // @synthesize songInfoLabel=_songInfoLabel;
@property(retain, nonatomic) UIImageView *albumCoverFillBlankView; // @synthesize albumCoverFillBlankView=_albumCoverFillBlankView;
@property(retain, nonatomic) UIImageView *albumCoverView; // @synthesize albumCoverView=_albumCoverView;
@property(nonatomic) __weak id <QQMusicPlayingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useBlurEffectOnAlbumCoverImage; // @synthesize useBlurEffectOnAlbumCoverImage=_useBlurEffectOnAlbumCoverImage;
@property(retain, nonatomic) NSString *songCopyRightInfoTips; // @synthesize songCopyRightInfoTips=_songCopyRightInfoTips;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *albumCoverImageUrl; // @synthesize albumCoverImageUrl=_albumCoverImageUrl;
- (void).cxx_destruct;
- (void)onClickDownloadBtn:(id)arg1;
- (void)onClickFavBtn:(id)arg1;
- (void)onClickPlayBtn:(id)arg1;
- (void)getImageDownloadErrorNotification:(id)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (void)hideFavTipsPopoverView;
- (void)showFavTipsPopoverView;
- (void)setLyricTipsHidden:(_Bool)arg1;
- (void)setDownloadBtnHidden:(_Bool)arg1;
- (void)setFavouriteBtnHidden:(_Bool)arg1;
- (void)setPlayBtnState:(_Bool)arg1;
- (void)setFavouriteBtnState:(_Bool)arg1;
- (void)updateLyricProgress:(double)arg1;
- (void)loadLyricString:(id)arg1;
- (void)loadLyricPath:(id)arg1;
- (void)lyricColorDidChange;
- (void)updateAlbumCoverImage;
- (void)layoutSubviews;
- (void)addCopyRightView;
- (void)addBtnView;
- (void)addLyricPannelView;
- (void)addSongInfoAndSingerInfoView;
- (void)addBackGroundAndAlbumViewToPlayView;
- (void)constructPlayingView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

