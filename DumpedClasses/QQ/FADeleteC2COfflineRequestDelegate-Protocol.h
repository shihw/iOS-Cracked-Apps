//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol FADeleteC2COfflineRequestDelegate <NSObject>

@optional
- (void)onFAC2COfflineFileDeleteFailedWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(NSString *)arg3 error:(NSError *)arg4;
- (void)onFAC2COfflineFileDeleteFinishWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(NSString *)arg3;
@end

