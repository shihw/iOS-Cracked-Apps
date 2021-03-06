//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeImageView, KGThemeLabel, NSIndexPath, NSLayoutConstraint, UIImageView, UIView, UIViewController<KGUploadSonglistDelegateForSubmitBtn>;

@interface MySongListContributionCell : MusicBaseCell
{
    KGThemeLabel *_collectListName;
    KGThemeLabel *_collectInfo;
    long long _offlineStateAngle;
    _Bool _animating;
    NSIndexPath *_currentIndexPath;
    KGThemeLabel *_labelRightStatus;
    KGThemeImageView *_arrow;
    UIViewController<KGUploadSonglistDelegateForSubmitBtn> *_delegateForSubmitBtn;
    UIImageView *_collectCover;
    NSLayoutConstraint *_collectCoverCenterXLayCstrt;
    NSLayoutConstraint *_collectCoverCenterYLayCstrt;
    UIView *_viewNeedSetAlpha;
}

@property(retain, nonatomic) UIView *viewNeedSetAlpha; // @synthesize viewNeedSetAlpha=_viewNeedSetAlpha;
@property(retain, nonatomic) NSLayoutConstraint *collectCoverCenterYLayCstrt; // @synthesize collectCoverCenterYLayCstrt=_collectCoverCenterYLayCstrt;
@property(retain, nonatomic) NSLayoutConstraint *collectCoverCenterXLayCstrt; // @synthesize collectCoverCenterXLayCstrt=_collectCoverCenterXLayCstrt;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIImageView *collectCover; // @synthesize collectCover=_collectCover;
@property(retain, nonatomic) KGThemeLabel *collectListName; // @synthesize collectListName=_collectListName;
@property(nonatomic) __weak UIViewController<KGUploadSonglistDelegateForSubmitBtn> *delegateForSubmitBtn; // @synthesize delegateForSubmitBtn=_delegateForSubmitBtn;
- (void).cxx_destruct;
- (void)setCollectMusicCount:(long long)arg1;
- (void)setCollectName:(id)arg1;
- (void)setCoverURL:(id)arg1;
- (void)setCoverURL:(id)arg1 defaultImageName:(id)arg2;
- (void)setCoverImageName:(id)arg1;
- (void)layoutSubviews;
- (void)makeShadow;
- (void)configCellWithImageURL:(id)arg1 CollectionName:(id)arg2 SongCount:(long long)arg3 ApplyStatus:(int)arg4;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

