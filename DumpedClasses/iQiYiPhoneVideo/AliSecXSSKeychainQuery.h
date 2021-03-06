//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface AliSecXSSKeychainQuery : NSObject
{
    NSString *_account;
    NSString *_service;
    NSString *_label;
    NSData *_passwordData;
    NSString *_accessGroup;
}

+ (id)errorWithCode:(int)arg1;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(copy, nonatomic) NSData *passwordData; // @synthesize passwordData=_passwordData;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)query;
@property(copy, nonatomic) NSString *password;
- (_Bool)fetch:(id *)arg1;
- (id)fetchAll:(id *)arg1;
- (_Bool)deleteItem:(id *)arg1;
- (_Bool)save:(id *)arg1;

@end

