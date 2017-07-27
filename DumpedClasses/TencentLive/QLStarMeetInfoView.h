//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLJCEStarMeetInfo, QLSImageView, UIButton, UILabel;

@interface QLStarMeetInfoView : UIView
{
    struct CGSize mAttentionBtnSize;
    QLSImageView *_starImageView;
    UILabel *_firstLineLbl;
    UILabel *_secondLineLbl;
    UILabel *_thirdLineLbl;
    UIButton *_reserveBtn;
    QLJCEStarMeetInfo *_innerItem;
}

@property(retain, nonatomic) QLJCEStarMeetInfo *innerItem; // @synthesize innerItem=_innerItem;
@property(retain, nonatomic) UIButton *reserveBtn; // @synthesize reserveBtn=_reserveBtn;
@property(retain, nonatomic) UILabel *thirdLineLbl; // @synthesize thirdLineLbl=_thirdLineLbl;
@property(retain, nonatomic) UILabel *secondLineLbl; // @synthesize secondLineLbl=_secondLineLbl;
@property(retain, nonatomic) UILabel *firstLineLbl; // @synthesize firstLineLbl=_firstLineLbl;
@property(retain, nonatomic) QLSImageView *starImageView; // @synthesize starImageView=_starImageView;
- (void).cxx_destruct;
- (struct CGSize)adaptiveReserveBtnSize:(_Bool)arg1;
- (void)onClickStarImageView:(id)arg1;
- (void)onClickReserveButton:(id)arg1;
- (void)refreshReserveButtonSelected:(_Bool)arg1;
- (_Bool)refreshReserveButton;
- (struct CGSize)adaptiveSize;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
