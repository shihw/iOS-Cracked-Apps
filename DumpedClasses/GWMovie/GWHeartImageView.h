//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

@interface GWHeartImageView : UIImageView
{
    UIImage *_heartOnImage;
    UIImage *_heartOffImage;
    UIImage *_leftHeartImage;
    UIImage *_rightHeartImage;
}

@property(copy, nonatomic) UIImage *rightHeartImage; // @synthesize rightHeartImage=_rightHeartImage;
@property(copy, nonatomic) UIImage *leftHeartImage; // @synthesize leftHeartImage=_leftHeartImage;
@property(copy, nonatomic) UIImage *heartOffImage; // @synthesize heartOffImage=_heartOffImage;
@property(copy, nonatomic) UIImage *heartOnImage; // @synthesize heartOnImage=_heartOnImage;
- (void).cxx_destruct;
- (void)animationForHeartBroken;
- (void)animationForHeart;

@end

