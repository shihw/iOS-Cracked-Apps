//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface QYEObject : NSObject
{
    int _module;
    int _type;
    NSDictionary *_userInfo;
}

+ (id)engineObjWithModule:(int)arg1 type:(int)arg2 andUserInfo:(id)arg3;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int module; // @synthesize module=_module;
- (void).cxx_destruct;

@end

