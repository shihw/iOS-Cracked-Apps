//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTextCheckingResult, OHAttributedLabel, UIColor;

@protocol OHAttributedLabelDelegate <NSObject>

@optional
- (UIColor *)attributedLabel:(OHAttributedLabel *)arg1 colorForLink:(NSTextCheckingResult *)arg2 underlineStyle:(int *)arg3;
- (_Bool)attributedLabel:(OHAttributedLabel *)arg1 shouldFollowLink:(NSTextCheckingResult *)arg2;
@end

