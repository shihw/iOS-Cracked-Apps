//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMWebpManager : NSObject
{
    _Bool _canHandleWebP;
}

+ (id)defaultManager;
- (void)dealloc;
- (void)start;
- (_Bool)canHandleWebp;
- (void)_refreshCanHandleWebp;
- (id)init;

@end
