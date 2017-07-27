//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface FriendsVerifyMsgActionInfoModel : NSObject <NSCoding>
{
    unsigned int _type;
    unsigned long long _group_code;
    NSString *_sig;
    NSString *_msg;
    unsigned int _group_id;
    NSString *_remark;
    _Bool _blacklist;
    int _xo;
    _Bool _isShieldMine;
    _Bool _isSetUncommon;
}

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool blacklist; // @dynamic blacklist;
@property(nonatomic) unsigned long long group_code; // @dynamic group_code;
@property(nonatomic) unsigned int group_id; // @dynamic group_id;
@property(nonatomic) _Bool isSetUncommon; // @dynamic isSetUncommon;
@property(nonatomic) _Bool isShieldMine; // @dynamic isShieldMine;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(retain, nonatomic) NSString *sig; // @dynamic sig;
@property(nonatomic) unsigned int type; // @dynamic type;

@end
