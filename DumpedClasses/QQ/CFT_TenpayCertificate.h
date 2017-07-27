//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CFT_TenpayCertificate : NSObject
{
    CDStruct_a6f2965a m_keyPublic;
    CDStruct_e32d4e0c m_keyPrivate;
    struct Certificate *_certificate;
    int _lastError;
}

@property(nonatomic) int lastError; // @synthesize lastError=_lastError;
- (void)writeToFile:(id)arg1 pubKey:(CDStruct_a6f2965a)arg2 priKey:(CDStruct_e32d4e0c)arg3;
- (id)privateDecrypt:(id)arg1 certId:(id)arg2;
- (_Bool)isCertExist:(id)arg1;
- (_Bool)delCert:(id)arg1;
- (id)certSign:(id)arg1 certId:(id)arg2;
- (_Bool)importCert:(id)arg1;
- (id)getCSR:(id)arg1 structureName:(id)arg2;
- (void)setCertKey:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
