//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEAccountInfo : JceObjectV2
{
    int jcev2_p_1_r_accounttype;
    NSString *jcev2_p_0_r_account;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_accounttype, setter=setJce_accounttype:) int jcev2_p_1_r_accounttype; // @synthesize jcev2_p_1_r_accounttype;
@property(retain, nonatomic, getter=jce_account, setter=setJce_account:) NSString *jcev2_p_0_r_account; // @synthesize jcev2_p_0_r_account;
- (void).cxx_destruct;
- (id)init;

@end

