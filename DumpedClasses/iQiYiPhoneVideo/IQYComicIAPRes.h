//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IQYComicIAPRes : NSObject
{
    NSString *_comicTag;
    NSString *_title;
    NSString *_episodeCount;
    NSString *_pic;
    NSString *_authorsName;
    NSString *_comicId;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
@property(retain, nonatomic) NSString *authorsName; // @synthesize authorsName=_authorsName;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *episodeCount; // @synthesize episodeCount=_episodeCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *comicTag; // @synthesize comicTag=_comicTag;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

