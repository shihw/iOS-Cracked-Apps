//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface KGUsersByMobilesManager : NSObject
{
    NSArray *_users;
    NSDate *_lastDate;
}

@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)storeUsersData:(id)arg1;
- (id)usersByMobiles;
- (_Bool)shouldRequestData;
- (void)readData;

@end
