//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface QMessageReceipt : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long gid; // @dynamic gid;
@property(nonatomic) _Bool hasGid; // @dynamic hasGid;
@property(nonatomic) _Bool hasMessageId; // @dynamic hasMessageId;
@property(nonatomic) _Bool hasMessageStatus; // @dynamic hasMessageStatus;
@property(nonatomic) _Bool hasReadTotal; // @dynamic hasReadTotal;
@property(nonatomic) _Bool hasSendTotal; // @dynamic hasSendTotal;
@property(nonatomic) _Bool hasStoreId; // @dynamic hasStoreId;
@property(nonatomic) _Bool hasTotal; // @dynamic hasTotal;
@property(copy, nonatomic) NSString *messageId; // @dynamic messageId;
@property(nonatomic) int messageStatus; // @dynamic messageStatus;
@property(nonatomic) int readTotal; // @dynamic readTotal;
@property(nonatomic) int sendTotal; // @dynamic sendTotal;
@property(nonatomic) long long storeId; // @dynamic storeId;
@property(nonatomic) int total; // @dynamic total;

@end

