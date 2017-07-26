//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TPShareContent, TPShareHandler, TPShareShortenAdapter, TaoPasswordShareService;

@interface TaoPasswordShare : NSObject
{
    _Bool _mutex;
    TPShareContent *_content;
    TPShareShortenAdapter *_shorten;
    TPShareHandler *_handler;
    TaoPasswordShareService *_service;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TaoPasswordShareService *service; // @synthesize service=_service;
@property(retain, nonatomic) TPShareHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) TPShareShortenAdapter *shorten; // @synthesize shorten=_shorten;
@property(retain, nonatomic) TPShareContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)finished:(id)arg1 delegate:(id)arg2;
- (void)cancel;
- (void)doTaoPassword:(id)arg1 delegate:(id)arg2;
- (void)doCopy:(id)arg1 delegate:(id)arg2;
- (_Bool)isUseful;
- (void)cacheSelfPicPassword:(id)arg1;
- (void)cacheSelfTaoPassword:(id)arg1;
- (void)share:(id)arg1 delegate:(id)arg2;
- (_Bool)canOpen:(unsigned long long)arg1;
- (id)init;

@end
