//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;

@interface DGPMetroBusScheduleModel : JSONModel
{
    long long _signal;
    NSString *_type;
    NSArray *_workday;
    NSArray *_holiday;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray *holiday; // @synthesize holiday=_holiday;
@property(retain, nonatomic) NSArray *workday; // @synthesize workday=_workday;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long signal; // @synthesize signal=_signal;
- (void).cxx_destruct;

@end
