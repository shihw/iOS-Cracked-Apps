//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface QYPPError : NSError
{
}

+ (id)parseResponseDic:(id)arg1 responseHeader:(id)arg2 statusCode:(long long)arg3;
- (id)initWithCode:(id)arg1 errorMsg:(id)arg2 originModel:(id)arg3;
- (id)initWithCode:(id)arg1 errorMsg:(id)arg2;

@end

