//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YYMemoryCache;

@interface HotelDetailCacheManager : NSObject
{
    YYMemoryCache *_detailCache;
}

+ (id)hotelID:(int)arg1 isForInn:(_Bool)arg2;
@property(retain, nonatomic) YYMemoryCache *detailCache; // @synthesize detailCache=_detailCache;
- (void).cxx_destruct;
- (id)getHotelDetailCache:(int)arg1 isForInn:(_Bool)arg2;
- (void)saveHotelDetailCache:(id)arg1 isForInn:(_Bool)arg2;
- (id)init;

@end

