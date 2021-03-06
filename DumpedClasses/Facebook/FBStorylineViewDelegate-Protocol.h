//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBStorylineVideoDataBundle, NSArray, NSString;
@protocol FBStorylineViewProtocol;

@protocol FBStorylineViewDelegate <NSObject>

@optional
- (void)storylineViewVideoExportCancelled:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewVideoExportFinished:(id <FBStorylineViewProtocol>)arg1 videoPath:(NSString *)arg2 withBundle:(FBStorylineVideoDataBundle *)arg3;
- (void)storylineViewVideoExportUpdated:(id <FBStorylineViewProtocol>)arg1 progress:(float)arg2;
- (void)storylineViewDidTapShareButton:(id <FBStorylineViewProtocol>)arg1;
- (NSString *)storylineView:(id <FBStorylineViewProtocol>)arg1 assetIDForCollaboratorID:(NSString *)arg2;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didPickMoodKey:(NSString *)arg2 moodName:(NSString *)arg3;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didDeletePhotoAtIndex:(long long)arg2;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didUpdateCollaboratorsFromSuggestedCollaborators:(NSArray *)arg2;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didUpdateAttachments:(NSArray *)arg2;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didUpdateAssets:(NSArray *)arg2;
- (void)storylineViewDidRequestToTagPeople:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidRequestToAddPhotos:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidCancelEditingVideoFrame:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidEndCroppingImage:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidStartCroppingImage:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidEndEditingVideoFrame:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidStartEditingVideoFrame:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidCancelEditingTitle:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidCancelEditingTaggedPeople:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidEndEditingTaggedPeople:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidStartEditingTaggedPeople:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidEndEditingTitle:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineViewDidStartEditingTitle:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didChangeToAppMode:(NSString *)arg2 withData:(id)arg3;
- (void)storylineViewDidReceiveStorylineCancel:(id <FBStorylineViewProtocol>)arg1;
- (void)storylineView:(id <FBStorylineViewProtocol>)arg1 didReceiveStorylineSharePayload:(NSString *)arg2 coverPhotoURI:(NSString *)arg3 title:(NSString *)arg4;
@end

