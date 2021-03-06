//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLMomentUser;

@interface QLMomentLoginAccount : NSObject
{
    _Bool _qqRelationshipEnabled;
    _Bool _wxRelationshipEnabled;
    NSString *_session;
    NSString *_userID;
    unsigned long long _loginType;
    QLMomentUser *_user;
    double _expireTime;
}

+ (void)clearExtensionAccount;
+ (void)archiveExtensionAccount;
+ (id)extensionAccount;
+ (void)clearDefaultAccount;
+ (void)archiveDefaultAccount;
+ (id)defaultAccount;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) _Bool wxRelationshipEnabled; // @synthesize wxRelationshipEnabled=_wxRelationshipEnabled;
@property(nonatomic) _Bool qqRelationshipEnabled; // @synthesize qqRelationshipEnabled=_qqRelationshipEnabled;
@property(retain, nonatomic) QLMomentUser *user; // @synthesize user=_user;
@property unsigned long long loginType; // @synthesize loginType=_loginType;
@property(retain) NSString *userID; // @synthesize userID=_userID;
@property(retain) NSString *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)isMainLoginAccount;
- (_Bool)isValidAccount;
- (void)clearAccount;
- (id)init;

@end

