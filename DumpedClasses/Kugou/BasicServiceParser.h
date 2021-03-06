//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasicParser.h"

@class BasicUPnPService, NSString, StateVariable, StateVariableList, StateVariableRange;

@interface BasicServiceParser : BasicParser
{
    BasicUPnPService *service;
    NSString *descriptionURL;
    NSString *eventURL;
    NSString *controlURL;
    NSString *serviceType;
    _Bool mCollectingStateVar;
    int mCachedType;
    StateVariableList *mStatevarListCache;
    StateVariableRange *mStatevarRangeCache;
    StateVariable *mStatevarCache;
}

@property(readonly, retain) BasicUPnPService *service; // @synthesize service;
@property(retain) NSString *controlURL; // @synthesize controlURL;
@property(retain) NSString *eventURL; // @synthesize eventURL;
@property(retain) NSString *descriptionURL; // @synthesize descriptionURL;
@property(retain) NSString *serviceType; // @synthesize serviceType;
- (void)setAllowedValue:(id)arg1;
- (void)allowedValueList:(id)arg1;
- (void)allowedValueRange:(id)arg1;
- (void)stateVariable:(id)arg1;
- (void)serviceTag:(id)arg1;
- (int)parse;
- (void)dealloc;
- (id)initWithUPnPService:(id)arg1;

@end

