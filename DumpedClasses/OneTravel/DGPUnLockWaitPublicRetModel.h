//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGCBaseModel.h"

@class NSString;

@interface DGPUnLockWaitPublicRetModel : DGCBaseModel
{
    long long _eta;
    long long _state;
    NSString *_toast;
}

@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long eta; // @synthesize eta=_eta;
- (void).cxx_destruct;

@end

