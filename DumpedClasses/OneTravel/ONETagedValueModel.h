//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ONETagedValueModel : NSObject
{
    NSString *_tag;
    NSString *_value;
}

+ (id)valueWithRawString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)rawString;
- (id)initWithTag:(id)arg1 value:(id)arg2;
- (id)initWithRawString:(id)arg1;
- (id)init;

@end
