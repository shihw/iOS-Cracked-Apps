//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAUpRequestC2C.h"

@class NSInvocationOperation;

@interface FAUpRequestBigFileC2C : FAUpRequestC2C
{
    NSInvocationOperation *_opHASH;
}

- (void)onRspApplyUpV2Hit:(const basic_string_075b6133 *)arg1;
- (void)calcSHA:(id)arg1;
- (void)OnRequestSend:(unsigned int)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)onRspApplyUpForNewUrl:(const basic_string_075b6133 *)arg1;
- (id)onRspApplyUpForOldUrl:(const basic_string_075b6133 *)arg1;
- (_Bool)onRspApplyUp:(const basic_string_075b6133 *)arg1;
- (const char *)makeReqBody:(struct CPBMessageEncoder *)arg1;
- (_Bool)canBeDelete;
- (void)cancel;
- (void)stop;
- (void)dealloc;
- (void)stopHashCalcThread;

@end

