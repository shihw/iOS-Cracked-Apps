//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface UPANavController : UINavigationController
{
    _Bool _nowOrientating;
    _Bool _keyBoardShowwing;
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
