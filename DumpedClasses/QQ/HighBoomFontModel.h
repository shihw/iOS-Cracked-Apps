//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class HighBoomModel, NSString;

@interface HighBoomFontModel : NSObject <NSCoding>
{
    long long _fontID;
    long long _fontType;
    long long _fontSource;
    NSString *_fontName;
    long long _status;
    int _progress;
    HighBoomModel *_drawModel;
    long long _tag;
    NSString *_imgUrl;
    NSString *_tagUrl;
    long long _bizType;
}

@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) HighBoomModel *drawModel; // @synthesize drawModel=_drawModel;
@property(nonatomic) int progress; // @synthesize progress=_progress;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) long long fontSource; // @synthesize fontSource=_fontSource;
@property(nonatomic) long long fontType; // @synthesize fontType=_fontType;
@property(nonatomic) long long fontID; // @synthesize fontID=_fontID;
- (id)description;
- (void)dealloc;
- (struct CGSize)styleSizeWithWordCount:(long long)arg1;
- (id)fontStylesModelWithWordCount:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

