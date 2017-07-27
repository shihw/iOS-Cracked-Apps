//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface QQVipDanmuTextModel : NSObject
{
    NSString *_comicID;
    NSString *_sectionID;
    NSString *_danmuID;
    NSString *_text;
    double _fontSize;
    UIColor *_fontColor;
    NSString *_posterUin;
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(retain, nonatomic) NSString *posterUin; // @synthesize posterUin=_posterUin;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *danmuID; // @synthesize danmuID=_danmuID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *comicID; // @synthesize comicID=_comicID;
- (void).cxx_destruct;

@end
