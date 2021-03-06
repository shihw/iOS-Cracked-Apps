//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESPFilterInfo, NSString;

@interface ESPEntryCommonParams : NSObject
{
    NSString *_targetName;
    NSString *_extraFilters;
    unsigned long long _businessFlag;
    NSString *_searchSource;
    NSString *_entryID;
    ESPFilterInfo *_filterInfo;
}

@property(retain, nonatomic) ESPFilterInfo *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(copy, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
@property(copy, nonatomic) NSString *searchSource; // @synthesize searchSource=_searchSource;
@property(nonatomic) unsigned long long businessFlag; // @synthesize businessFlag=_businessFlag;
@property(copy, nonatomic) NSString *extraFilters; // @synthesize extraFilters=_extraFilters;
@property(copy, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
- (void).cxx_destruct;
- (id)initWithParameter:(id)arg1;

@end

