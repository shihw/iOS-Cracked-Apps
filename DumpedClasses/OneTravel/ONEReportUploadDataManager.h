//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ONEReportUploadDataManager : NSObject
{
}

+ (void)requestImproveData:(id)arg1 finish:(CDUnknownBlockType)arg2;
+ (void)requestBroadcastData:(id)arg1 finish:(CDUnknownBlockType)arg2;
+ (void)requestUpdateReportWithSelectImageData:(id)arg1 audioData:(id)arg2 params:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)requestReportWindowImageData:(id)arg1 selectImageData:(id)arg2 audioData:(id)arg3 params:(id)arg4 isPerfect:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
+ (id)configReportCacheFile:(id)arg1 inDirectionary:(id)arg2 checkExistDirectory:(_Bool)arg3;

@end

