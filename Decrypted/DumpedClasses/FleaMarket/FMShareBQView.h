//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMFloatView.h"

@class FMBottomButtonView, FMImageView, UIImageView, UILabel;

@interface FMShareBQView : FMFloatView
{
    FMImageView *shareImage;
    UILabel *shareText;
    UIImageView *shareBQImage;
    FMBottomButtonView *bottomButton;
}

- (void).cxx_destruct;
- (void)imagePickerCameraWriteToAlbumCompletion:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)bottomBtnTapped;
- (_Bool)setShareContent:(id)arg1;
- (id)initFloatDialog;

@end
