//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface NMArtist : NSObject <NSCopying>
{
    NSString *_artistId;
    NSString *_name;
    NSString *_desc;
    NSString *_img80x80;
    NSString *_cover;
    unsigned long long _albumCount;
    NSString *_accountId;
    _Bool _subscribed;
    NSArray *_alias;
    NSArray *_transNames;
    NSArray *_addtionNames;
    NSString *_nameWithAddtion;
    NSString *_briefDesc;
    NSString *_avatar;
    unsigned long long _mvCount;
    NSString *_alg;
    NSString *_info;
    NSString *_testimontialForSuggestion;
    NSString *_rcmdReason;
    NSString *_initial;
    NSString *_shuangPin;
    NSString *_pinYin;
    NSString *_addtionName;
    NSString *_addtionNamePinyin;
    NSString *_addtionNameShuangpin;
}

+ (id)nameForMultiArtists:(id)arg1;
+ (id)generatePasserArtist;
@property(retain, nonatomic) NSString *addtionNameShuangpin; // @synthesize addtionNameShuangpin=_addtionNameShuangpin;
@property(retain, nonatomic) NSString *addtionNamePinyin; // @synthesize addtionNamePinyin=_addtionNamePinyin;
@property(retain, nonatomic) NSString *addtionName; // @synthesize addtionName=_addtionName;
@property(retain, nonatomic) NSString *pinYin; // @synthesize pinYin=_pinYin;
@property(retain, nonatomic) NSString *shuangPin; // @synthesize shuangPin=_shuangPin;
@property(retain, nonatomic) NSString *initial; // @synthesize initial=_initial;
@property(retain, nonatomic) NSString *rcmdReason; // @synthesize rcmdReason=_rcmdReason;
@property(retain, nonatomic) NSString *testimontialForSuggestion; // @synthesize testimontialForSuggestion=_testimontialForSuggestion;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *alg; // @synthesize alg=_alg;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned long long mvCount; // @synthesize mvCount=_mvCount;
@property(nonatomic) unsigned long long albumCount; // @synthesize albumCount=_albumCount;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *img80x80; // @synthesize img80x80=_img80x80;
@property(retain, nonatomic) NSString *briefDesc; // @synthesize briefDesc=_briefDesc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *nameWithAddtion; // @synthesize nameWithAddtion=_nameWithAddtion;
@property(retain, nonatomic) NSArray *addtionNames; // @synthesize addtionNames=_addtionNames;
@property(retain, nonatomic) NSArray *transNames; // @synthesize transNames=_transNames;
@property(retain, nonatomic) NSArray *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *threadId;
@property(readonly, nonatomic) NSString *link; // @dynamic link;
- (id)initWithArtistId:(id)arg1 name:(id)arg2 desc:(id)arg3 cover:(id)arg4 albumCount:(unsigned long long)arg5;
- (id)initWithDictionary:(id)arg1;
- (void)fillWithDynamicResult:(id)arg1;
- (void)fillWithDictionary:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)proxyForJson;
- (void)parseArtistInitial:(id)arg1;
- (long long)compare:(id)arg1;
- (id)bestMatchAdditionNameForKeywords:(id)arg1;
- (id)bestMatchAdditionNameForKeyword:(id)arg1;

@end

