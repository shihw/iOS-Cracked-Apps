//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMDA_NSCEncryption : NSObject
{
}

+ (struct __SecKey *)createPublicKey;
+ (id)generateAES128Key;
+ (int)getIntValueFormChar:(unsigned short)arg1;
+ (id)toHexString:(id)arg1;
+ (id)encryptRSAData:(id)arg1;
+ (id)decryptAES128Data:(id)arg1 withKey:(id)arg2;
+ (id)encryptAES128Data:(id)arg1 withKey:(id)arg2;

@end

