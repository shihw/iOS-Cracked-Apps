//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HyDES : NSObject
{
}

+ (id)decryptUseDES:(id)arg1 key:(id)arg2;
+ (id)encryptUseDES:(id)arg1 key:(id)arg2;
+ (id)decryptToNSStringWithECB:(id)arg1 key:(id)arg2;
+ (id)encryptToNSStringWithECB:(id)arg1 key:(id)arg2;
+ (id)decryptToNSDataWithNSData:(id)arg1 key:(id)arg2 options:(unsigned int)arg3;
+ (id)encryptToNSDataWithNSData:(id)arg1 key:(id)arg2 options:(unsigned int)arg3;

@end

