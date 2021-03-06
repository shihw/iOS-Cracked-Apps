//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDModeManager.h"

#import "IMDProjectionMode.h"

@class MDProjectionStrategyConfiguration, NSMutableArray, NSString;

@interface MDProjectionStrategyManager : MDModeManager <IMDProjectionMode>
{
    NSMutableArray *_directors;
    MDProjectionStrategyConfiguration *_configuration;
}

@property(retain, nonatomic) MDProjectionStrategyConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSMutableArray *directors; // @synthesize directors=_directors;
- (void).cxx_destruct;
- (id)getDirectors;
- (id)getObject3D;
- (id)createModes;
- (void)on;
- (id)createStrategy:(int)arg1;
- (id)initWithDefault:(int)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

