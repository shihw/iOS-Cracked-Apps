//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGDownloadStatistics;

@protocol KGFMStatisticsProtocol <NSObject>
- (void)onDownloadComplete:(unsigned long long)arg1 downMode:(int)arg2 info:(KGDownloadStatistics *)arg3;
- (void)onDownloadFailed:(unsigned long long)arg1 downMode:(int)arg2 errorCode:(int)arg3 info:(KGDownloadStatistics *)arg4;
@end

