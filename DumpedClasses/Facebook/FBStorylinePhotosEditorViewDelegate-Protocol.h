//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBStorylinePhotosEditorView, NSString;

@protocol FBStorylinePhotosEditorViewDelegate
- (void)storylinePhotosEditorView:(FBStorylinePhotosEditorView *)arg1 assetForAssetID:(NSString *)arg2 completion:(void (^)(AVAsset *))arg3;
- (void)storylinePhotosEditorView:(FBStorylinePhotosEditorView *)arg1 didDeselectAssetAtIndex:(long long)arg2;
- (void)storylinePhotosEditorView:(FBStorylinePhotosEditorView *)arg1 didSelectAssetAtIndex:(long long)arg2;
- (void)storylinePhotosEditorViewDidStartReordering:(FBStorylinePhotosEditorView *)arg1;
- (void)storylinePhotosEditorViewDidRequestToAddPhotos:(FBStorylinePhotosEditorView *)arg1;
- (void)storylinePhotosEditorView:(FBStorylinePhotosEditorView *)arg1 didMovePhotoAtIndex:(long long)arg2 toIndex:(long long)arg3 deleteItemAtIndexAfterReorder:(long long)arg4;
- (void)storylinePhotosEditorView:(FBStorylinePhotosEditorView *)arg1 didDeletePhotoAtIndex:(long long)arg2;
@end

