//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIViewController;
@protocol QYCameraDelegate;

@protocol QYCameraProtocol <NSObject>
+ (void)autoAequestCameraAuth:(void (^)(unsigned long long))arg1;
+ (_Bool)isCameraAvailable;
@property(nonatomic) __weak id <QYCameraDelegate> delegate;
- (void)dismissCameraController:(UIViewController *)arg1;
- (void)showCameraController:(UIViewController *)arg1 mediaTypes:(NSArray *)arg2;
@end

