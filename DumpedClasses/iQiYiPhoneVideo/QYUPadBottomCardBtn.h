//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class QYBisonAlbum, UIImageView, UILabel;

@interface QYUPadBottomCardBtn : UIButton
{
    UILabel *_titleLabel;
    UIImageView *_rightArrow;
    QYBisonAlbum *_bison;
}

@property(retain, nonatomic) QYBisonAlbum *bison; // @synthesize bison=_bison;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)init;

@end

