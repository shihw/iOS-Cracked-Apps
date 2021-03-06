//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTTrainTableViewSectionModel : NSObject
{
    _Bool _isShowSeparateLine;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    long long _rowCount;
    long long _section;
    NSMutableArray *_cellModelArray;
}

@property(retain, nonatomic) NSMutableArray *cellModelArray; // @synthesize cellModelArray=_cellModelArray;
@property(nonatomic) _Bool isShowSeparateLine; // @synthesize isShowSeparateLine=_isShowSeparateLine;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property(nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
- (void).cxx_destruct;
- (id)initWithSection:(unsigned long long)arg1 headerHeight:(double)arg2;
- (id)initWithSection:(unsigned long long)arg1;
- (id)init;

@end

