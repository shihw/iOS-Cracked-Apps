//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDbBase.h"

@class NSString;

@interface QY_Category : QYDbBase
{
    NSString *Category_Name;
    NSString *groupID;
    NSString *n_url;
    NSString *h_url;
    long long Category_Id;
    NSString *_defaultType;
    NSString *_catShowType;
    NSString *_hasToplist;
    NSString *_allSorts;
    NSString *_defaultSort;
    NSString *_defaultLabels;
    NSString *_h5_url;
}

+ (id)getCategoryWithCatId:(id)arg1;
+ (id)categoryFromResSet:(id)arg1;
+ (id)getCategoryArray;
@property(copy, nonatomic) NSString *h5_url; // @synthesize h5_url=_h5_url;
@property(copy, nonatomic) NSString *defaultLabels; // @synthesize defaultLabels=_defaultLabels;
@property(copy, nonatomic) NSString *defaultSort; // @synthesize defaultSort=_defaultSort;
@property(copy, nonatomic) NSString *allSorts; // @synthesize allSorts=_allSorts;
@property(copy, nonatomic) NSString *hasToplist; // @synthesize hasToplist=_hasToplist;
@property(copy, nonatomic) NSString *catShowType; // @synthesize catShowType=_catShowType;
@property(copy, nonatomic) NSString *defaultType; // @synthesize defaultType=_defaultType;
@property(copy, nonatomic) NSString *h_url; // @synthesize h_url;
@property(copy, nonatomic) NSString *n_url; // @synthesize n_url;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID;
@property(copy, nonatomic) NSString *Category_Name; // @synthesize Category_Name;
@property(nonatomic) long long Category_Id; // @synthesize Category_Id;
- (void).cxx_destruct;
- (id)description;
- (int)write_to_database:(id)arg1;
- (id)init;
- (void)dealloc;

@end

