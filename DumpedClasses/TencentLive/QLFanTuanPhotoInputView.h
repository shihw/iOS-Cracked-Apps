//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentPhotoCell.h"

@interface QLFanTuanPhotoInputView : QLMomentPhotoCell
{
    id <QLFanTuanPhotoBrowserBackDelegate> _backDelegate;
    long long _tagIndex;
}

@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
@property(nonatomic) id <QLFanTuanPhotoBrowserBackDelegate> backDelegate; // @synthesize backDelegate=_backDelegate;
- (void)photoBrowserBack;
- (void)onDeleteAction:(id)arg1;
- (void)didPressPhotoButtonAction:(id)arg1;
- (void)pushPhotoBowserViewCtrler:(id)arg1;
- (id)photoViewWithPhoto:(id)arg1;
- (void)layoutSubviews;
- (void)setPhotoViews:(id)arg1;

@end

