//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@interface FBSearchRequestRetryErrorViewComponent : CKCompositeComponent
{
    unsigned long long _errorType;
    id _target;
    SEL _action;
}

+ (id)newWithErrorType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3 useDarkStyle:(_Bool)arg4;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (void)openSettingsApp;
- (void)retryTapped:(id)arg1;

@end

