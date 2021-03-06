//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTProtocol.h"

@class NSArray, UIViewController;

@protocol MTNavigatorProtocol <MTProtocol>
- (_Bool)checkShouldPushViewControllerWithFilterClassNameArray:(NSArray *)arg1;
- (void)pushViewcontrollerToHome:(UIViewController *)arg1 animated:(_Bool)arg2;
- (NSArray *)viewControllers;
- (UIViewController *)rootViewController;
- (UIViewController *)currentViewController;
- (void)popToRootViewControllerWithAnimated:(_Bool)arg1;
- (void)popToViewController:(UIViewController *)arg1 further:(_Bool)arg2 animated:(_Bool)arg3;
- (void)popViewControllerWithAnimated:(_Bool)arg1;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)transitionFromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 options:(unsigned long long)arg3;
- (void)unLockAppRotation;
- (void)lockAppRotation;
@end

