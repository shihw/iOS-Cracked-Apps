//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QBPreferencesRsp : JceObjectV2
{
    int jcev2_p_0_r_iRspTime;
    NSArray *jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue;
    NSString *jcev2_p_2_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sContentMd5, setter=setJce_sContentMd5:) NSString *jcev2_p_2_o_sContentMd5; // @synthesize jcev2_p_2_o_sContentMd5;
@property(retain, nonatomic, getter=jce_vPreferencesKeyValue, setter=setJce_vPreferencesKeyValue:) NSArray *jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue; // @synthesize jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue;
@property(nonatomic, getter=jce_iRspTime, setter=setJce_iRspTime:) int jcev2_p_0_r_iRspTime; // @synthesize jcev2_p_0_r_iRspTime;
- (void).cxx_destruct;
- (id)init;

@end

