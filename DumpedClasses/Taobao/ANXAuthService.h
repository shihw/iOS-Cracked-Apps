//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANXService.h"

@class ANXAuthServiceModel, ANXOTPManager, NSString;

@interface ANXAuthService : NSObject <ANXService>
{
    _Bool _syncSuccess;
    ANXAuthServiceModel *_authModel;
    CDUnknownBlockType _result;
    ANXOTPManager *_otpManager;
    id <ANXService> _syncServerTimeService;
}

@property _Bool syncSuccess; // @synthesize syncSuccess=_syncSuccess;
@property(retain, nonatomic) id <ANXService> syncServerTimeService; // @synthesize syncServerTimeService=_syncServerTimeService;
@property(retain, nonatomic) ANXOTPManager *otpManager; // @synthesize otpManager=_otpManager;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(retain, nonatomic) ANXAuthServiceModel *authModel; // @synthesize authModel=_authModel;
- (void).cxx_destruct;
- (void)syncServerTime;
- (void)startWithParams:(id)arg1 onResult:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
