//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface _priv_NBSLensCustomerAPIBusyItems : NSObject
{
    NSMutableDictionary *activit_events;
    NSLock *lockObj;
}

+ (id)sharedObject;
- (void).cxx_destruct;
- (id)unregisterEvent:(id)arg1;
- (id)getObjOfEvent:(id)arg1;
- (void)registerEvent:(id)arg1 withObject:(id)arg2;
- (id)init;

@end

