//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDDMTools : NSObject
{
}

+ (id)convertToJSONData:(id)arg1;
+ (id)gb2312toutf8:(id)arg1;
+ (id)getCodeFromURL:(id)arg1 codeName:(id)arg2 length:(long long)arg3;
+ (id)getErrorCodeFromSchemeUrl:(id)arg1;
+ (id)getCodeFromURLJson:(id)arg1;
+ (id)getCodeFromURL:(id)arg1;
+ (id)handleSchemeUrl:(id)arg1;
+ (long long)getSchemeLength:(id)arg1;
+ (id)getProductUrlFromSku_id:(id)arg1 andToken:(id)arg2;
+ (id)getProductUrlFromSku_id:(id)arg1;
+ (id)generateMD5:(id)arg1;
+ (id)requestTokenUrlWithAppKey:(id)arg1 WithRedirectURI:(id)arg2 WithSecretKey:(id)arg3 WithCode:(id)arg4;
+ (id)requestCodeUrlWithAppKey:(id)arg1 WithRedirectURI:(id)arg2;
+ (_Bool)isNeededSchemeRegistered:(id)arg1;

@end

