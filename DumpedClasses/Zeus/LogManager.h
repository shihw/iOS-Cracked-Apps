//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LogManager : NSObject
{
    _Bool _mLogEnable;
    int _mAllowLevel;
}

+ (id)getInstance;
@property(nonatomic) int mAllowLevel; // @synthesize mAllowLevel=_mAllowLevel;
@property(nonatomic) _Bool mLogEnable; // @synthesize mLogEnable=_mLogEnable;
- (void)WKLog:(int)arg1 tag:(id)arg2 message:(id)arg3;
- (void)setLogLevel:(int)arg1;
- (void)setLogEnable:(_Bool)arg1;
- (id)init;

@end

