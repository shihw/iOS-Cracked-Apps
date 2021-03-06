//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBFormViewController.h>

#import "CKComponentProvider-Protocol.h"

@class CKComponentHostingView, FBFullscreenSpinnerController, FBMemAlbum, FBProfileSetsAnalytics, FBProfileSetsRequestManager, FBUserSession, NSString;

@interface FBProfileEditSetViewController : FBFormViewController <CKComponentProvider>
{
    FBProfileSetsAnalytics *_profileSetsAnalytics;
    NSString *_profileSetsSessionID;
    _Bool _creatingNew;
    FBUserSession *_session;
    FBMemAlbum *_album;
    NSString *_suggestedTitle;
    FBProfileSetsRequestManager *_requestManager;
    FBFullscreenSpinnerController *_spinnerController;
    CKComponentHostingView *_promptLabelView;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) CKComponentHostingView *promptLabelView; // @synthesize promptLabelView=_promptLabelView;
@property(readonly, nonatomic) FBFullscreenSpinnerController *spinnerController; // @synthesize spinnerController=_spinnerController;
@property(readonly, nonatomic) FBProfileSetsRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(readonly, copy, nonatomic) NSString *suggestedTitle; // @synthesize suggestedTitle=_suggestedTitle;
@property(readonly, nonatomic) _Bool creatingNew; // @synthesize creatingNew=_creatingNew;
@property(readonly, nonatomic) FBMemAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didUpdateFormElement:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)dismissAndNavigateToSet:(id)arg1;
- (void)dismiss;
- (void)toggleSaveButtonEnabled;
- (void)performInitialConfiguration;
- (void)didFinishEditingSet:(id)arg1;
- (void)editSetCreatingNew:(_Bool)arg1 albumId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willStartEditingSet;
- (void)didTapSave;
- (void)didTapCancel;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 album:(id)arg2 creatingNew:(_Bool)arg3 suggestedTitle:(id)arg4 profileSetsAnalytics:(id)arg5 profileSetsSessionID:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

