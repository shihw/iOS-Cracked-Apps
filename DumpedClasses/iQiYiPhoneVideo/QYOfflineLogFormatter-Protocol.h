//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QYOfflineLogMessage;
@protocol QYOfflineLogger;

@protocol QYOfflineLogFormatter <NSObject>
- (NSString *)formatLogMessage:(QYOfflineLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <QYOfflineLogger>)arg1;
- (void)didAddToLogger:(id <QYOfflineLogger>)arg1;
@end

