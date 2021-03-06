//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYPPCircleFeedMTLModel, UIButton, UILabel;

@interface QPRelatedVideoFeedbar : UIView
{
    _Bool _showCircle;
    CDUnknownBlockType _shareClick;
    CDUnknownBlockType _avatarClick;
    CDUnknownBlockType _nickNameClick;
    CDUnknownBlockType _commentClick;
    CDUnknownBlockType _favoriteClick;
    CDUnknownBlockType _circleTap;
    UILabel *_circleLabel;
    UIButton *_circleBtn;
    UIButton *_commentButton;
    UIButton *_favoriteButton;
    UIButton *_shareButton;
    QYPPCircleFeedMTLModel *_feedModel;
}

@property(retain, nonatomic) QYPPCircleFeedMTLModel *feedModel; // @synthesize feedModel=_feedModel;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *circleBtn; // @synthesize circleBtn=_circleBtn;
@property(retain, nonatomic) UILabel *circleLabel; // @synthesize circleLabel=_circleLabel;
@property(copy, nonatomic) CDUnknownBlockType circleTap; // @synthesize circleTap=_circleTap;
@property(copy, nonatomic) CDUnknownBlockType favoriteClick; // @synthesize favoriteClick=_favoriteClick;
@property(copy, nonatomic) CDUnknownBlockType commentClick; // @synthesize commentClick=_commentClick;
@property(copy, nonatomic) CDUnknownBlockType nickNameClick; // @synthesize nickNameClick=_nickNameClick;
@property(copy, nonatomic) CDUnknownBlockType avatarClick; // @synthesize avatarClick=_avatarClick;
@property(copy, nonatomic) CDUnknownBlockType shareClick; // @synthesize shareClick=_shareClick;
@property(nonatomic) _Bool showCircle; // @synthesize showCircle=_showCircle;
- (void).cxx_destruct;
- (void)enterCircle;
- (void)favoriteClick:(id)arg1;
- (void)commentClick:(id)arg1;
- (void)clickName;
- (void)clickAvatar;
- (void)sharePingBack;
- (void)shareClick:(id)arg1;
- (void)updateUnfavorite:(long long)arg1;
- (void)updateSharedCount:(id)arg1;
- (void)updateFavorite:(long long)arg1 animate:(_Bool)arg2;
- (void)updateCommentCount:(id)arg1;
- (void)updateFavoriteCount:(id)arg1;
- (void)updateViewWithFeedModel:(id)arg1;
- (void)layoutSubviews;
- (void)adjustSubViews;
- (id)createButton:(struct CGRect)arg1 normalImageString:(id)arg2 selectedImageString:(id)arg3 action:(SEL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

