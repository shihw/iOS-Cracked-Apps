//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBAccountRecoverySearchSectionComponentState : NSObject
{
    NSArray *_users;
    NSString *_endOfListTag;
    NSString *_queryString;
}

@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, copy, nonatomic) NSString *endOfListTag; // @synthesize endOfListTag=_endOfListTag;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)initWithUsers:(id)arg1 endOfListTag:(id)arg2 queryString:(id)arg3;

@end

