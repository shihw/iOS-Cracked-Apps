//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISLRCReadBaseObject.h"

@class NSString;

@interface ISLRCReadFollowAnchor : ISLRCReadBaseObject
{
    _Bool _showChatMessage;
    NSString *_followNum;
    NSString *_nick_name;
    NSString *_badge_level;
    NSString *_userId;
    NSString *_commonLevel;
}

@property(copy, nonatomic) NSString *commonLevel; // @synthesize commonLevel=_commonLevel;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool showChatMessage; // @synthesize showChatMessage=_showChatMessage;
@property(copy, nonatomic) NSString *badge_level; // @synthesize badge_level=_badge_level;
@property(copy, nonatomic) NSString *nick_name; // @synthesize nick_name=_nick_name;
@property(copy, nonatomic) NSString *followNum; // @synthesize followNum=_followNum;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

