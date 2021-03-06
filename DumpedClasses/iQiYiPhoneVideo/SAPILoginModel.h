//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SAPILoginModel : NSObject <NSCopying>
{
    _Bool _incompleteUser;
    NSString *_uname;
    NSString *_bduss;
    NSString *_displayname;
    NSString *_uid;
    NSString *_oauthType;
    NSString *_app;
    NSString *_os_headImgURLString;
    NSString *_sourceTPL;
}

@property(copy, nonatomic) NSString *sourceTPL; // @synthesize sourceTPL=_sourceTPL;
@property(nonatomic) _Bool incompleteUser; // @synthesize incompleteUser=_incompleteUser;
@property(copy, nonatomic) NSString *os_headImgURLString; // @synthesize os_headImgURLString=_os_headImgURLString;
@property(copy, nonatomic) NSString *app; // @synthesize app=_app;
@property(copy, nonatomic) NSString *oauthType; // @synthesize oauthType=_oauthType;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *displayname; // @synthesize displayname=_displayname;
@property(copy, nonatomic) NSString *bduss; // @synthesize bduss=_bduss;
@property(copy, nonatomic) NSString *uname; // @synthesize uname=_uname;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)setStoken:(id)arg1;
- (void)setPtoken:(id)arg1;
- (id)stoken;
- (id)ptoken;
- (id)description;
- (id)stringFromObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

