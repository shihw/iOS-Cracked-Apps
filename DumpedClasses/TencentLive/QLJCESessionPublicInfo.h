//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCESessionInfo, QLJCEShareItem, QLJCEUserInfo;

@interface QLJCESessionPublicInfo : JceObjectV2
{
    int jcev2_p_7_o_userCount;
    int jcev2_p_9_o_userNumber;
    int jcev2_p_10_o_canGuestShare;
    QLJCESessionInfo *jcev2_p_0_r_sessionInfo;
    QLJCEUserInfo *jcev2_p_1_o_creator;
    long long jcev2_p_2_o_createTime;
    NSString *jcev2_p_3_o_sessionName;
    NSString *jcev2_p_4_o_sessionPic;
    NSString *jcev2_p_5_o_description;
    NSString *jcev2_p_6_o_msgKey;
    QLJCEShareItem *jcev2_p_8_o_shareItem;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_canGuestShare, setter=setJce_canGuestShare:) int jcev2_p_10_o_canGuestShare; // @synthesize jcev2_p_10_o_canGuestShare;
@property(nonatomic, getter=jce_userNumber, setter=setJce_userNumber:) int jcev2_p_9_o_userNumber; // @synthesize jcev2_p_9_o_userNumber;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_8_o_shareItem; // @synthesize jcev2_p_8_o_shareItem;
@property(nonatomic, getter=jce_userCount, setter=setJce_userCount:) int jcev2_p_7_o_userCount; // @synthesize jcev2_p_7_o_userCount;
@property(retain, nonatomic, getter=jce_msgKey, setter=setJce_msgKey:) NSString *jcev2_p_6_o_msgKey; // @synthesize jcev2_p_6_o_msgKey;
@property(retain, nonatomic, getter=jce_description, setter=setJce_description:) NSString *jcev2_p_5_o_description; // @synthesize jcev2_p_5_o_description;
@property(retain, nonatomic, getter=jce_sessionPic, setter=setJce_sessionPic:) NSString *jcev2_p_4_o_sessionPic; // @synthesize jcev2_p_4_o_sessionPic;
@property(retain, nonatomic, getter=jce_sessionName, setter=setJce_sessionName:) NSString *jcev2_p_3_o_sessionName; // @synthesize jcev2_p_3_o_sessionName;
@property(nonatomic, getter=jce_createTime, setter=setJce_createTime:) long long jcev2_p_2_o_createTime; // @synthesize jcev2_p_2_o_createTime;
@property(retain, nonatomic, getter=jce_creator, setter=setJce_creator:) QLJCEUserInfo *jcev2_p_1_o_creator; // @synthesize jcev2_p_1_o_creator;
@property(retain, nonatomic, getter=jce_sessionInfo, setter=setJce_sessionInfo:) QLJCESessionInfo *jcev2_p_0_r_sessionInfo; // @synthesize jcev2_p_0_r_sessionInfo;
- (void).cxx_destruct;
- (id)init;

@end

