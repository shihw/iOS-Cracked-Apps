//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InfoEntity.h"

@class NSString;

@interface AccountSettingInfoEntity : InfoEntity
{
    _Bool _isMain;
    _Bool _hasBinded;
    NSString *_subName;
    NSString *_detailDesc;
}

@property(nonatomic) _Bool hasBinded; // @synthesize hasBinded=_hasBinded;
@property(retain, nonatomic) NSString *detailDesc; // @synthesize detailDesc=_detailDesc;
@property(retain, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(nonatomic) _Bool isMain; // @synthesize isMain=_isMain;
- (void).cxx_destruct;
- (id)init;

@end

