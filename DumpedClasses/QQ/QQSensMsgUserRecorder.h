//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQSensMsgUserRecorder : NSObject
{
    NSMutableDictionary *_recorder;
    _Bool _gottaNewRecord;
}

+ (id)shareInstance;
- (void)jsonToRecorder;
- (void)recorderToJson;
- (void)flush;
- (void)addKeyword:(id)arg1 forType:(int)arg2;
- (_Bool)isKeywordMatched:(id)arg1 forType:(int)arg2;
- (void)dealloc;
- (id)init;

@end

