//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QRReadSettingInfo : NSObject
{
    _Bool _isNightMode;
    _Bool _isLightFollowSys;
    _Bool _hasSettingChanced;
    float _lightOfDay;
    float _lightOfNight;
    long long _timeStamp;
    long long _readerStyle;
    long long _textSize;
    long long _titleSize;
    NSString *_fontChiName;
    NSString *_fontEngName;
    double _fontSetTime;
    NSString *_md5Str;
}

@property(copy, nonatomic) NSString *md5Str; // @synthesize md5Str=_md5Str;
@property(nonatomic) double fontSetTime; // @synthesize fontSetTime=_fontSetTime;
@property(nonatomic) _Bool hasSettingChanced; // @synthesize hasSettingChanced=_hasSettingChanced;
@property(copy, nonatomic) NSString *fontEngName; // @synthesize fontEngName=_fontEngName;
@property(copy, nonatomic) NSString *fontChiName; // @synthesize fontChiName=_fontChiName;
@property(nonatomic) long long titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) long long textSize; // @synthesize textSize=_textSize;
@property(nonatomic) float lightOfNight; // @synthesize lightOfNight=_lightOfNight;
@property(nonatomic) float lightOfDay; // @synthesize lightOfDay=_lightOfDay;
@property(nonatomic) _Bool isLightFollowSys; // @synthesize isLightFollowSys=_isLightFollowSys;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
@property(nonatomic) long long readerStyle; // @synthesize readerStyle=_readerStyle;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;
- (void)setUserSettingExceptNightMode:(id)arg1;
- (id)getSettingJsonDic;
@property(copy, nonatomic) NSString *fontIDStr;
- (id)init;

@end

