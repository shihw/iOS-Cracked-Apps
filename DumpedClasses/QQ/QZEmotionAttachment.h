//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZTextAttachment.h"

@class NSString;

@interface QZEmotionAttachment : QZTextAttachment
{
    unsigned int _emSvrIndex;
    NSString *_url;
    NSString *_emtionId;
}

+ (void)initialize;
@property(nonatomic) unsigned int emSvrIndex; // @synthesize emSvrIndex=_emSvrIndex;
@property(retain, nonatomic) NSString *emtionId; // @synthesize emtionId=_emtionId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)getDrawItem;
- (id)copyableText;
- (id)voiceText;

@end

