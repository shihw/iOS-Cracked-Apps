//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "KTVJudgeProgressViewDelegate.h"

@class KTVCompetitionAgainstInfo, KTVJudgePlayImageView, KTVJudgeProgressView, NSIndexPath, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface KTVCompetitionAgainstInfoCell : UITableViewCell <KTVJudgeProgressViewDelegate>
{
    _Bool _isCurrentIndexPath;
    _Bool _isPlaying;
    NSIndexPath *_indexPath;
    KTVCompetitionAgainstInfo *_againstInfo;
    unsigned long long _playSource;
    id <KTVCompetitionAgainstInfoCellDelegate> _delegate;
    UIView *_showView;
    UIImageView *_backgroundImg;
    UIImageView *_stripeImg;
    KTVJudgePlayImageView *_leftPlayerImg;
    KTVJudgePlayImageView *_rightPlayerImg;
    UILabel *_leftNamelb;
    UILabel *_rightNamelb;
    UILabel *_leftVotelb;
    UILabel *_rightVotelb;
    UIImageView *_pkImg;
    UIButton *_playBtn;
    KTVJudgeProgressView *_progressView;
    UIView *_blackView;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(retain, nonatomic) KTVJudgeProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIImageView *pkImg; // @synthesize pkImg=_pkImg;
@property(retain, nonatomic) UILabel *rightVotelb; // @synthesize rightVotelb=_rightVotelb;
@property(retain, nonatomic) UILabel *leftVotelb; // @synthesize leftVotelb=_leftVotelb;
@property(retain, nonatomic) UILabel *rightNamelb; // @synthesize rightNamelb=_rightNamelb;
@property(retain, nonatomic) UILabel *leftNamelb; // @synthesize leftNamelb=_leftNamelb;
@property(retain, nonatomic) KTVJudgePlayImageView *rightPlayerImg; // @synthesize rightPlayerImg=_rightPlayerImg;
@property(retain, nonatomic) KTVJudgePlayImageView *leftPlayerImg; // @synthesize leftPlayerImg=_leftPlayerImg;
@property(retain, nonatomic) UIImageView *stripeImg; // @synthesize stripeImg=_stripeImg;
@property(retain, nonatomic) UIImageView *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
@property(nonatomic) __weak id <KTVCompetitionAgainstInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long playSource; // @synthesize playSource=_playSource;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) KTVCompetitionAgainstInfo *againstInfo; // @synthesize againstInfo=_againstInfo;
@property(nonatomic) _Bool isCurrentIndexPath; // @synthesize isCurrentIndexPath=_isCurrentIndexPath;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)getVoteAttributeStringWithVoteNum:(long long)arg1;
- (void)actionFirstTap;
- (void)actionProgress:(float)arg1;
- (void)actionPause;
- (void)actionPlay;
- (void)actionPlay:(id)arg1;
- (void)endLoading;
- (void)startLoding;
- (void)stopWaveAnimation;
- (void)startWaveAnimation;
- (void)setAgainstInfoStopState;
- (void)setAgainstInfoPlayState;
- (void)updateProgressPlayTime:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

