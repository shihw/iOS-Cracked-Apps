//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTShareAdapterSetting : NSObject
{
    id <TTShareAppMethodSource> _methodSource;
}

+ (id)sharedService;
@property(retain, nonatomic) id <TTShareAppMethodSource> methodSource; // @synthesize methodSource=_methodSource;
- (void).cxx_destruct;
- (void)activityHasSharedWith:(id)arg1 error:(id)arg2 desc:(id)arg3;
- (void)activityWillSharedWith:(id)arg1;
- (id)topmostViewController;
- (_Bool)isZoneVersion;
- (_Bool)isPadDevice;

@end

