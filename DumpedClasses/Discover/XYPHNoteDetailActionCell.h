//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "XYPHNoteDetailMultiNoteShareViewDelegate.h"

@class NSString, UIButton, UILabel, XYPHNoteDetailMultiNoteShareView, XYPHNoteDetailRedPacketView;

@interface XYPHNoteDetailActionCell : UICollectionViewCell <XYPHNoteDetailMultiNoteShareViewDelegate>
{
    UILabel *_timeLabel;
    UIButton *_postLocationButton;
    UIButton *_likeButton;
    UIButton *_collectButton;
    id <XYPHNoteCellDelegate> _delegate;
    XYPHNoteDetailRedPacketView *_redPacketView;
    XYPHNoteDetailMultiNoteShareView *_multiNoteShareView;
}

@property(retain, nonatomic) XYPHNoteDetailMultiNoteShareView *multiNoteShareView; // @synthesize multiNoteShareView=_multiNoteShareView;
@property(retain, nonatomic) XYPHNoteDetailRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(nonatomic) id <XYPHNoteCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *postLocationButton; // @synthesize postLocationButton=_postLocationButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)noteDetailMultiNoteShareView:(id)arg1 shareToQQButtonClick:(id)arg2;
- (void)noteDetailMultiNoteShareView:(id)arg1 shareToWeiboButtonClick:(id)arg2;
- (void)noteDetailMultiNoteShareView:(id)arg1 shareToWeChatButtonClick:(id)arg2;
- (void)noteDetailMultiNoteShareView:(id)arg1 shareToMomentButtonClick:(id)arg2;
- (void)LocationButtonClicked;
- (void)collectersButtonClicked;
- (void)likedUserButtonClicked;
- (void)prepareForReuse;
- (void)addMultiShareView;
- (void)initilize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

