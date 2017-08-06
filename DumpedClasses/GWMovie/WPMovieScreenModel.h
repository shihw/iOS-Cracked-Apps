//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSString;

@interface WPMovieScreenModel : GWObject
{
    _Bool _isMovieDis;
    NSString *_movieId;
    NSString *_movieName;
    NSString *_actor;
    NSArray *_scheduleArray;
    NSArray *_discountArray;
    NSArray *_starMeetLabel;
    NSString *_score;
    long long _scoreCount;
    long long _wantCount;
    long long _seenCount;
    NSString *_longs;
    NSString *_posterUrl;
    NSString *_director;
    NSString *_version;
    NSString *_date;
    NSString *_tags;
    NSArray *_bankPrivilege;
}

+ (long long)indexOfMovie:(id)arg1 inArray:(id)arg2;
+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *bankPrivilege; // @synthesize bankPrivilege=_bankPrivilege;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *director; // @synthesize director=_director;
@property(retain, nonatomic) NSString *posterUrl; // @synthesize posterUrl=_posterUrl;
@property(retain, nonatomic) NSString *longs; // @synthesize longs=_longs;
@property(nonatomic) long long seenCount; // @synthesize seenCount=_seenCount;
@property(nonatomic) long long wantCount; // @synthesize wantCount=_wantCount;
@property(nonatomic) long long scoreCount; // @synthesize scoreCount=_scoreCount;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSArray *starMeetLabel; // @synthesize starMeetLabel=_starMeetLabel;
@property(retain, nonatomic) NSArray *discountArray; // @synthesize discountArray=_discountArray;
@property(retain, nonatomic) NSArray *scheduleArray; // @synthesize scheduleArray=_scheduleArray;
@property(nonatomic) _Bool isMovieDis; // @synthesize isMovieDis=_isMovieDis;
@property(retain, nonatomic) NSString *actor; // @synthesize actor=_actor;
@property(retain, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(retain, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
- (void).cxx_destruct;
- (id)cinemaDiscountModelAtIndex:(long long)arg1;
- (long long)indexOfDateInScheduleArrayWithDateStr:(id)arg1;
- (id)dateDiscountArray;
- (id)dateArray;

@end
