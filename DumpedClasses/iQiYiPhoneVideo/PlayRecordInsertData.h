//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QY_Album, QY_Tvset;

@interface PlayRecordInsertData : NSObject
{
    QY_Album *_album;
    QY_Tvset *_tvset;
    NSString *_seek_time;
    NSString *_value;
    NSString *_nextTvid;
    NSString *_nextPurchase;
    NSString *_nextCType;
    NSString *_terminalId;
    NSString *_childId;
    NSString *_sourceId;
    NSString *_video_type;
    NSString *_feedId;
}

@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *video_type; // @synthesize video_type=_video_type;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *childId; // @synthesize childId=_childId;
@property(copy, nonatomic) NSString *terminalId; // @synthesize terminalId=_terminalId;
@property(copy, nonatomic) NSString *nextCType; // @synthesize nextCType=_nextCType;
@property(copy, nonatomic) NSString *nextPurchase; // @synthesize nextPurchase=_nextPurchase;
@property(copy, nonatomic) NSString *nextTvid; // @synthesize nextTvid=_nextTvid;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *seek_time; // @synthesize seek_time=_seek_time;
@property(retain, nonatomic) QY_Tvset *tvset; // @synthesize tvset=_tvset;
@property(retain, nonatomic) QY_Album *album; // @synthesize album=_album;
- (void).cxx_destruct;

@end

