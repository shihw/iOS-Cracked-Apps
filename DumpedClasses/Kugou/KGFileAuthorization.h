//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KGFileAuthorization : NSObject
{
    _Bool _bFree;
    NSString *_module;
    NSString *_behavior;
    NSString *_payAlbumID;
}

@property(nonatomic) _Bool bFree; // @synthesize bFree=_bFree;
@property(copy, nonatomic) NSString *payAlbumID; // @synthesize payAlbumID=_payAlbumID;
@property(retain, nonatomic) NSString *behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)initWithFree:(_Bool)arg1 formModule:(int)arg2 albumId:(id)arg3;
- (id)initWithFree:(_Bool)arg1 isCollect:(_Bool)arg2 payAlbumID:(id)arg3;
- (id)initWithFree:(_Bool)arg1 isCollect:(_Bool)arg2;

@end

