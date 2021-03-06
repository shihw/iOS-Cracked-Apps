//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ClientLog, Crash, Custom, Exception, Network, SKPBPageShowtime;

@interface ApmLog : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ClientLog *clientLog; // @dynamic clientLog;
@property(retain, nonatomic) Crash *crash; // @dynamic crash;
@property(retain, nonatomic) Custom *custom; // @dynamic custom;
@property(retain, nonatomic) Exception *exception; // @dynamic exception;
@property(nonatomic) long long generateTime; // @dynamic generateTime;
@property(nonatomic) int id_p; // @dynamic id_p;
@property(readonly, nonatomic) int logRecordOneOfCase; // @dynamic logRecordOneOfCase;
@property(retain, nonatomic) Network *network; // @dynamic network;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(retain, nonatomic) SKPBPageShowtime *pageShowtime; // @dynamic pageShowtime;

@end

