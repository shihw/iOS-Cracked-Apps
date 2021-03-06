//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface WPShowSeatViewModel : GWObject
{
    _Bool _isFull;
    int _totalAmount;
    int _endTime;
    int _maxChooseCount;
    int _realityStartCol;
    int _realityStartRow;
    NSArray *_seats;
    NSArray *_prices;
    NSMutableArray *_userSelectSeatModels;
    NSMutableArray *_userSeats;
    NSDictionary *_areaInfo;
    NSString *_areaId;
    NSString *_onlineId;
    NSString *_showId;
    NSMutableArray *_colFlags;
    NSMutableArray *_rowFlags;
    NSMutableArray *_seatNumbers;
}

+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) int realityStartRow; // @synthesize realityStartRow=_realityStartRow;
@property(nonatomic) int realityStartCol; // @synthesize realityStartCol=_realityStartCol;
@property(retain, nonatomic) NSMutableArray *seatNumbers; // @synthesize seatNumbers=_seatNumbers;
@property(retain, nonatomic) NSMutableArray *rowFlags; // @synthesize rowFlags=_rowFlags;
@property(retain, nonatomic) NSMutableArray *colFlags; // @synthesize colFlags=_colFlags;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *onlineId; // @synthesize onlineId=_onlineId;
@property(retain, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(retain, nonatomic) NSDictionary *areaInfo; // @synthesize areaInfo=_areaInfo;
@property(nonatomic) int maxChooseCount; // @synthesize maxChooseCount=_maxChooseCount;
@property(nonatomic) int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSMutableArray *userSeats; // @synthesize userSeats=_userSeats;
@property(retain, nonatomic) NSMutableArray *userSelectSeatModels; // @synthesize userSelectSeatModels=_userSelectSeatModels;
@property(retain, nonatomic) NSArray *prices; // @synthesize prices=_prices;
@property(retain, nonatomic) NSArray *seats; // @synthesize seats=_seats;
- (void).cxx_destruct;
- (void)filterSeatData:(id)arg1;
- (void)fixSeatNumer:(id)arg1 toMaxCount:(int)arg2;
- (void)fixArray:(id)arg1 toMaxCount:(int)arg2;
- (void)setupData;
- (id)init;

@end

