//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEMultiLanguageInfo : JceObjectV2
{
    NSString *jcev2_p_0_o_curLanguageId;
    NSArray *jcev2_p_1_o_allLanguages__b0x9i_VOQLJCELanguageInfo;
    NSArray *jcev2_p_2_o_languageSwitchInfos__b0x9i_VOQLJCELanguageSwitchInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_languageSwitchInfos, setter=setJce_languageSwitchInfos:) NSArray *jcev2_p_2_o_languageSwitchInfos__b0x9i_VOQLJCELanguageSwitchInfo; // @synthesize jcev2_p_2_o_languageSwitchInfos__b0x9i_VOQLJCELanguageSwitchInfo;
@property(retain, nonatomic, getter=jce_allLanguages, setter=setJce_allLanguages:) NSArray *jcev2_p_1_o_allLanguages__b0x9i_VOQLJCELanguageInfo; // @synthesize jcev2_p_1_o_allLanguages__b0x9i_VOQLJCELanguageInfo;
@property(retain, nonatomic, getter=jce_curLanguageId, setter=setJce_curLanguageId:) NSString *jcev2_p_0_o_curLanguageId; // @synthesize jcev2_p_0_o_curLanguageId;
- (void).cxx_destruct;
- (id)init;

@end
