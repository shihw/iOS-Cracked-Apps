//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLJCEProtocolPackage : NSObject
{
    unsigned long long _uin;
}

@property(readonly, nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (id)fetchResponseCommand:(id)arg1 errorInfo:(id *)arg2;
- (id)fetchRequestCommand:(int)arg1 requestID:(int)arg2 withRequestJCEObject:(id)arg3;
- (id)fetchRequestHead:(int)arg1 requestID:(int)arg2;
- (id)fetcheQUA;
- (id)generateJCETokens;

@end

