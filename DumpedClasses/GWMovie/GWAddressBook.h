//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSMutableDictionary;

@interface GWAddressBook : GWObject
{
    NSMutableDictionary *_addressDict;
}

+ (id)getAddressBookJSONStr;
+ (_Bool)isAuthorized;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *addressDict; // @synthesize addressDict=_addressDict;
- (void).cxx_destruct;
- (id)getTelephoneName:(id)arg1;
- (id)dealWithTelephoneNumber:(id)arg1;
- (id)updateAddressBook;
- (id)init;

@end

