//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWStarDetailProvider : GWObject
{
    NSString *_starid;
}

@property(copy, nonatomic) NSString *starid; // @synthesize starid=_starid;
- (void).cxx_destruct;
- (id)parseResponed:(id)arg1 error:(id *)arg2;
- (void)requestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithSender:(id)arg1;

@end

