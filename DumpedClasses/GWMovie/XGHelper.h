//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class XGEnv;

@interface XGHelper : NSObject
{
    XGEnv *env;
}

+ (id)getMacAddress;
+ (_Bool)isWiFiAvailable;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (id)getInstance;
- (id)getCompanyDomain;
- (id)getLanguage;
- (int)secondsBetweenTimes:(id)arg1 endTime:(id)arg2;
- (id)strToTime:(id)arg1;
- (id)timeToStr:(id)arg1;
- (id)getCurrentTime;
- (id)md5:(id)arg1;
- (id)fetchSSIDInfo;
- (id)getAppVersion;
- (_Bool)IsSimulatorDevice;
- (id)DeviceTypeName;
- (id)json2Obj:(id)arg1;
- (id)getJson:(id)arg1;
- (id)getEnv;
- (id)init;

@end

