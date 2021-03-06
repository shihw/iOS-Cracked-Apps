//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBMomentsAppPromotionViewControllerDelegate-Protocol.h"

@class FBKVOController, FBSegmentedContainerViewController, FBUserSession, NSString, SBMomentsAppDataSource, SBMomentsAppInfo, SBMomentsAppSegueView;

@interface SBMomentsAppSegueViewController : UIViewController <SBMomentsAppPromotionViewControllerDelegate>
{
    FBUserSession *_session;
    FBSegmentedContainerViewController *_segmentedContainerVC;
    SBMomentsAppDataSource *_momentsAppDataSource;
    SBMomentsAppInfo *_momentsAppInfo;
    FBKVOController *_kvoController;
    _Bool _hasShownInterstitial;
    SBMomentsAppSegueView *_segueView;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)momentsAppPromotionViewControllerDidFinish:(id)arg1;
- (void)_didTapSegueAction:(id)arg1;
- (void)_ensureSegueView;
- (void)viewWillLayoutSubviews;
- (id)_viewStateForLogging;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_configureTitleFromProps:(id)arg1;
- (void)_configureViewFromProps;
- (void)_dataSourceChanged;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 segmentedContainerVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

