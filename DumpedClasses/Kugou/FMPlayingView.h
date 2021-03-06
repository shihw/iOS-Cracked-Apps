//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel;

@interface FMPlayingView : UIView
{
    long long interval;
    NSTimer *timer;
    int tapInt;
    int _index;
    UIImage *_blackgoundImage;
    UIImageView *_blackgroundView;
    UIButton *_likeButton;
    UIButton *_unLikeButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_listenLabel;
    UILabel *_TimeLabel;
    UILabel *_TimeLabel2;
    UIImageView *_listenPic;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_divider;
    UILabel *_rateTips;
    UILabel *_programLittle;
    UILabel *_hzLabel;
    UIImageView *_programImage;
    UIImageView *_programImageBackground;
    UILabel *_programNameLabel;
    UIImageView *_animationBackgrond;
    UIImageView *_animationImageView;
    UIButton *_programListButton;
    UIImageView *_fmLabelBgView;
    UILabel *_zhuboLabel;
}

@property(retain, nonatomic) UILabel *zhuboLabel; // @synthesize zhuboLabel=_zhuboLabel;
@property(retain, nonatomic) UIImageView *fmLabelBgView; // @synthesize fmLabelBgView=_fmLabelBgView;
@property(retain, nonatomic) UIButton *programListButton; // @synthesize programListButton=_programListButton;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) UIImageView *animationBackgrond; // @synthesize animationBackgrond=_animationBackgrond;
@property(retain, nonatomic) UILabel *programNameLabel; // @synthesize programNameLabel=_programNameLabel;
@property(retain, nonatomic) UIImageView *programImageBackground; // @synthesize programImageBackground=_programImageBackground;
@property(retain, nonatomic) UIImageView *programImage; // @synthesize programImage=_programImage;
@property(retain, nonatomic) UILabel *hzLabel; // @synthesize hzLabel=_hzLabel;
@property(retain, nonatomic) UILabel *programLittle; // @synthesize programLittle=_programLittle;
@property(retain, nonatomic) UILabel *rateTips; // @synthesize rateTips=_rateTips;
@property(retain, nonatomic) UIImageView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *listenPic; // @synthesize listenPic=_listenPic;
@property(retain, nonatomic) UILabel *TimeLabel2; // @synthesize TimeLabel2=_TimeLabel2;
@property(retain, nonatomic) UILabel *TimeLabel; // @synthesize TimeLabel=_TimeLabel;
@property(retain, nonatomic) UILabel *listenLabel; // @synthesize listenLabel=_listenLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *unLikeButton; // @synthesize unLikeButton=_unLikeButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIImageView *blackgroundView; // @synthesize blackgroundView=_blackgroundView;
@property(retain, nonatomic) UIImage *blackgoundImage; // @synthesize blackgoundImage=_blackgoundImage;
@property(nonatomic) int index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)setImageAnimationState:(_Bool)arg1;
- (void)imageTap:(id)arg1;
- (void)okFavoriteTips;
- (void)refreshView:(int)arg1;
- (void)fixHZLable:(id)arg1;
- (void)beginView;
- (void)fixListenerPosition:(long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)like;
- (void)clikeLikeButton:(id)arg1;
- (void)showProgramListView:(id)arg1;
- (void)clikeUnLikeButton:(id)arg1;
- (void)stopTimer;
- (void)changeTime;
- (void)startTimerToCount;
- (void)tapClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 index:(int)arg2;

@end

