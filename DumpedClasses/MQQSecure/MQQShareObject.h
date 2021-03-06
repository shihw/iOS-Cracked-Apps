//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

@interface MQQShareObject : NSObject
{
    long long _shareType;
    NSString *_text;
    NSString *_title;
    UIImage *_image;
    double _imageQuality;
    UIImage *_thumbnail;
    NSString *_webPageURL;
}

+ (id)objectWithText:(id)arg1 image:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *webPageURL; // @synthesize webPageURL=_webPageURL;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) double imageQuality; // @synthesize imageQuality=_imageQuality;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(readonly, retain, nonatomic) NSData *imageData;
- (void)dealloc;
- (id)initWithText:(id)arg1 image:(id)arg2;
- (id)init;

@end

