//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLChannelAdManager, TADItemInfo;

@protocol QLTADVideoItemProtocol <NSObject>
@property(nonatomic) _Bool played;
@property(nonatomic) long long streamType;
@property(retain, nonatomic) TADItemInfo *adItem;
@property(nonatomic) __weak QLChannelAdManager *adDelegate;
@end

