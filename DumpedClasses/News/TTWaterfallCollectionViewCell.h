//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ExploreAvatarView, ExploreOrderedData, SSThemedImageView, SSThemedLabel, TTImageView;

@interface TTWaterfallCollectionViewCell : UICollectionViewCell
{
    ExploreOrderedData *_data;
    TTImageView *_imageView;
    ExploreAvatarView *_avatarView;
    SSThemedLabel *_nameLabel;
    SSThemedImageView *_digIcon;
    SSThemedLabel *_countLabel;
}

+ (double)infoBarHeight;
@property(retain, nonatomic) SSThemedLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) SSThemedImageView *digIcon; // @synthesize digIcon=_digIcon;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) ExploreAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TTImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) ExploreOrderedData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)layoutPic;
- (void)updatePic;
- (void)refreshUI;
- (void)refreshWithData:(id)arg1;
- (id)cellData;
- (void)layoutSubviews;
- (void)tt_themeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

