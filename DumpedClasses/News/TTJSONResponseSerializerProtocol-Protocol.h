//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<TTJSONResponseSerializerProtocol>, NSSet, TTHttpResponse;

@protocol TTJSONResponseSerializerProtocol <NSObject>
+ (NSObject<TTJSONResponseSerializerProtocol> *)serializer;
@property(copy, nonatomic) NSSet *acceptableContentTypes;
- (id)responseObjectForResponse:(TTHttpResponse *)arg1 jsonObj:(id)arg2 responseError:(NSError *)arg3 resultError:(id *)arg4;
@end

