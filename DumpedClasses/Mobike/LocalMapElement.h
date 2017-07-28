//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LocalMapElement : NSObject
{
    int _cityId;
    NSString *_cityName;
    struct BMPoint _center;
    int _dataSize;
    int _ratio;
    _Bool _isUpdate;
    int _mapLevel;
    int _downloadStatus;
    int _serverSize;
}

@property(nonatomic) int serverSize; // @synthesize serverSize=_serverSize;
@property(nonatomic) int mapLevel; // @synthesize mapLevel=_mapLevel;
@property(nonatomic) int downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) struct BMPoint center; // @synthesize center=_center;
@property(nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
@property(nonatomic) int radio; // @synthesize radio=_ratio;
@property(nonatomic) int dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
