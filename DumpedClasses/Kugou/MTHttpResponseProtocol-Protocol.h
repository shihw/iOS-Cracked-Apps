//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTProtocol.h"

@class NSDictionary, NSString;

@protocol MTHttpResponseProtocol <MTProtocol>
@property(copy, nonatomic) id raw;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(nonatomic) long long times;
@property(copy, nonatomic) id data;
@property(copy, nonatomic) NSString *message;
@property(nonatomic) long long code;
@end

