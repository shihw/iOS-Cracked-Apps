//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface FM_CollectionBean : NSObject
{
    NSNumber *_ID;
    NSNumber *channelkey;
    NSString *channelname;
    NSNumber *type;
    NSNumber *committime;
    NSString *programname;
    NSNumber *online;
    NSString *posterurl;
    NSString *hz;
}

@property(retain, nonatomic) NSString *hz; // @synthesize hz;
@property(retain, nonatomic) NSString *posterurl; // @synthesize posterurl;
@property(retain, nonatomic) NSNumber *online; // @synthesize online;
@property(retain, nonatomic) NSString *programname; // @synthesize programname;
@property(retain, nonatomic) NSNumber *committime; // @synthesize committime;
@property(retain, nonatomic) NSNumber *type; // @synthesize type;
@property(retain, nonatomic) NSString *channelname; // @synthesize channelname;
@property(retain, nonatomic) NSNumber *channelkey; // @synthesize channelkey;
@property(retain, nonatomic) NSNumber *_ID; // @synthesize _ID;
- (void).cxx_destruct;
- (void)copyFromResultSet:(id)arg1;

@end

