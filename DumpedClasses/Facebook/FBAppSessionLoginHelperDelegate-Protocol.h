//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAuthenticationManager, NSString, UIViewController;
@protocol FBAppSessionLoginHelping, FBAuthenticationControlling, FBThirdPartyAppAuthViewControlling;

@protocol FBAppSessionLoginHelperDelegate <NSObject>
- (UIViewController<FBThirdPartyAppAuthViewControlling> *)thirdPartyAuthViewControllerForAppSessionLoginHelper:(id <FBAppSessionLoginHelping>)arg1 accessToken:(NSString *)arg2;
- (UIViewController<FBAuthenticationControlling> *)authenticationViewControllerForAppSessionLoginHelper:(id <FBAppSessionLoginHelping>)arg1 authenticationManager:(FBAuthenticationManager *)arg2 defaultLoginCredential:(NSString *)arg3;
- (void)appSessionLoginHelper:(id <FBAppSessionLoginHelping>)arg1 didCompleteLoginInBackground:(_Bool)arg2;

@optional
- (void)appSessionLoginHelperWillPresentLoginUI:(id <FBAppSessionLoginHelping>)arg1;
- (void)logLoginInterruptionForAppSessionLoginHelper:(id <FBAppSessionLoginHelping>)arg1 interruptionReason:(NSString *)arg2 applicationState:(long long)arg3 background:(_Bool)arg4;
@end

