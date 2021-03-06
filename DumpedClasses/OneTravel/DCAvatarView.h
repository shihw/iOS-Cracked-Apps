//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIImage, UIImageView;

@interface DCAvatarView : UIView
{
    CALayer *_roundMaskLayer;
    CALayer *_genderLayer;
    _Bool _roundCorner;
    _Bool _roundCornerWithMask;
    _Bool _showAnimation;
    _Bool _cornerImage;
    NSString *_avatarUri;
    UIImageView *_avatarImageView;
    double _customCornerRadius;
    UIImage *_placeholder;
    CDUnknownBlockType _avatarDidClicked;
}

@property(copy, nonatomic) CDUnknownBlockType avatarDidClicked; // @synthesize avatarDidClicked=_avatarDidClicked;
@property(nonatomic) _Bool cornerImage; // @synthesize cornerImage=_cornerImage;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(retain, nonatomic) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) double customCornerRadius; // @synthesize customCornerRadius=_customCornerRadius;
@property(nonatomic) _Bool roundCornerWithMask; // @synthesize roundCornerWithMask=_roundCornerWithMask;
@property(nonatomic) _Bool roundCorner; // @synthesize roundCorner=_roundCorner;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) NSString *avatarUri; // @synthesize avatarUri=_avatarUri;
- (void).cxx_destruct;
- (void)clickedAvatar;
- (void)updateImage:(id)arg1;
- (void)setAvatarUri:(id)arg1 placeholder:(id)arg2;
- (void)setAvatarUri:(id)arg1;
- (void)cleanCorner;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

