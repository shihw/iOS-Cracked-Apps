//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt64Array;

@interface ConnMasterGetIfOnlineReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) int role; // @dynamic role;
@property(retain, nonatomic) GPBUInt64Array *userIdArray; // @dynamic userIdArray;
@property(readonly, nonatomic) unsigned long long userIdArray_Count; // @dynamic userIdArray_Count;

@end

