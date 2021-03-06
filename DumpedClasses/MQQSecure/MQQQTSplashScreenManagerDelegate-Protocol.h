//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQQTSplashScreenItem, MQQQTSplashScreenManager;

@protocol MQQQTSplashScreenManagerDelegate <NSObject>

@optional
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 clickItem:(MQQQTSplashScreenItem *)arg2 shouldNavigate:(_Bool *)arg3;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 skipItem:(MQQQTSplashScreenItem *)arg2 willSkip:(_Bool)arg3;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 finishItem:(MQQQTSplashScreenItem *)arg2;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 didDismissItem:(MQQQTSplashScreenItem *)arg2;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 willDismissItem:(MQQQTSplashScreenItem *)arg2;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 didDisplayItem:(MQQQTSplashScreenItem *)arg2;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 willDisplayItem:(MQQQTSplashScreenItem *)arg2;
- (MQQQTSplashScreenItem *)splashScreenManager:(MQQQTSplashScreenManager *)arg1 itemToDisplay:(MQQQTSplashScreenItem *)arg2;
- (void)splashScreenManager:(MQQQTSplashScreenManager *)arg1 isValidItemExist:(_Bool)arg2;
@end

