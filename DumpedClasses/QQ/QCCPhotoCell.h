//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZonePhotoView.h"

@interface QCCPhotoCell : MQZonePhotoView
{
    id <QCCPhotoCellDelegate> _qccDelegate;
}

@property(nonatomic) __weak id <QCCPhotoCellDelegate> qccDelegate; // @synthesize qccDelegate=_qccDelegate;
- (void).cxx_destruct;
- (void)onEditIndex:(long long)arg1 toImage:(id)arg2;
- (void)onDelete:(unsigned long long)arg1;
- (void)didDragCollectionViewCellDeleteBtnClicked:(id)arg1;
- (void)didDragCollectionViewCellClicked:(id)arg1;
- (void)dragCollectionViewCellEndMoving:(id)arg1;
- (int)assetsFilter;
- (void)showLimitTips;
- (_Bool)haveSelectedMostPhoto;
- (void)takeAlbumPhoto;
- (void)takeCameraPhoto;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickAddBtn:(id)arg1;

@end
