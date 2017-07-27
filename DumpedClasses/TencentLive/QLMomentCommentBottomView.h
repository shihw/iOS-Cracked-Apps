//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface QLMomentCommentBottomView : UIView
{
    _Bool _hiddenShareButton;
    UIButton *_comment;
    UIButton *_shareButton;
    UIButton *_likeButton;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *comment; // @synthesize comment=_comment;
@property(nonatomic) _Bool hiddenShareButton; // @synthesize hiddenShareButton=_hiddenShareButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 withActionBlcok:(CDUnknownBlockType)arg2;
- (void)likeAction:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)commentAction:(id)arg1;
- (void)refreshLayoutWhenShareButtonHidden;
- (void)refreshLayout;
@property(nonatomic, getter=isLikedStatus) _Bool likedStatus;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
