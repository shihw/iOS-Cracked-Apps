//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QLOnlineConfigInfo : NSObject
{
    int _valueType;
    NSString *_configKey;
    NSString *_localKey;
    id _defaultValue;
}

+ (id)infoWithKey:(id)arg1 local:(id)arg2 type:(int)arg3 default:(id)arg4;
@property int valueType; // @synthesize valueType=_valueType;
@property(retain) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain) NSString *localKey; // @synthesize localKey=_localKey;
@property(retain) NSString *configKey; // @synthesize configKey=_configKey;
- (id)init:(id)arg1 local:(id)arg2 type:(int)arg3 default:(id)arg4;

@end

