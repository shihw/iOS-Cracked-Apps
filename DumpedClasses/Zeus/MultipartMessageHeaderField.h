//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MultipartMessageHeaderField : NSObject
{
    NSString *name;
    NSString *value;
    NSMutableDictionary *params;
}

@property(readonly) NSDictionary *params; // @synthesize params;
@property(readonly) NSString *value; // @synthesize value;
@property(readonly) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)parseHeaderValueBytes:(char *)arg1 length:(int)arg2 encoding:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 contentEncoding:(unsigned long long)arg2;

@end

