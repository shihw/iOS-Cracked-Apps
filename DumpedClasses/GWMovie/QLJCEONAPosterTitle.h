//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction;

@interface QLJCEONAPosterTitle : JceObjectV2
{
    BOOL jcev2_p_4_o_style;
    NSString *jcev2_p_0_r_title;
    NSString *jcev2_p_1_o_subhead;
    QLJCEAction *jcev2_p_2_o_action;
    NSArray *jcev2_p_3_o_markLabelList__b0x9i_VOQLJCEMarkLabel;
    NSArray *jcev2_p_5_o_subMarkLabelList__b0x9i_VOQLJCEMarkLabel;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_subMarkLabelList, setter=setJce_subMarkLabelList:) NSArray *jcev2_p_5_o_subMarkLabelList__b0x9i_VOQLJCEMarkLabel; // @synthesize jcev2_p_5_o_subMarkLabelList__b0x9i_VOQLJCEMarkLabel;
@property(nonatomic, getter=jce_style, setter=setJce_style:) BOOL jcev2_p_4_o_style; // @synthesize jcev2_p_4_o_style;
@property(retain, nonatomic, getter=jce_markLabelList, setter=setJce_markLabelList:) NSArray *jcev2_p_3_o_markLabelList__b0x9i_VOQLJCEMarkLabel; // @synthesize jcev2_p_3_o_markLabelList__b0x9i_VOQLJCEMarkLabel;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_2_o_action; // @synthesize jcev2_p_2_o_action;
@property(retain, nonatomic, getter=jce_subhead, setter=setJce_subhead:) NSString *jcev2_p_1_o_subhead; // @synthesize jcev2_p_1_o_subhead;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_0_r_title; // @synthesize jcev2_p_0_r_title;
- (void)dealloc;
- (id)init;

@end

