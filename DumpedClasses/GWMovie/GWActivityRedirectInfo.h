//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWActivityRedirectInfo : GWObject
{
    int _canClick;
    int _cancelable;
    int _isWriteWala;
    NSString *_joinUrl;
    NSString *_activityDescribe;
}

@property(copy, nonatomic) NSString *activityDescribe; // @synthesize activityDescribe=_activityDescribe;
@property(copy, nonatomic) NSString *joinUrl; // @synthesize joinUrl=_joinUrl;
@property(nonatomic) int isWriteWala; // @synthesize isWriteWala=_isWriteWala;
@property(nonatomic) int cancelable; // @synthesize cancelable=_cancelable;
@property(nonatomic) int canClick; // @synthesize canClick=_canClick;
- (void).cxx_destruct;

@end

