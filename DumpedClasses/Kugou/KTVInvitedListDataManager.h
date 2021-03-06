//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFResourceObject.h"

@class KTVInvitedListBaseNetHelper, NSMutableArray;

@interface KTVInvitedListDataManager : KFResourceObject
{
    _Bool _haveMoreDynamicThanInCache;
    KTVInvitedListBaseNetHelper *_netHelper;
    long long _userId;
    long long _maxOnePageNumber;
    long long _inviteAchiveCount;
    NSMutableArray *_lists;
}

@property(retain, nonatomic) NSMutableArray *lists; // @synthesize lists=_lists;
@property(nonatomic) _Bool haveMoreDynamicThanInCache; // @synthesize haveMoreDynamicThanInCache=_haveMoreDynamicThanInCache;
@property(nonatomic) long long inviteAchiveCount; // @synthesize inviteAchiveCount=_inviteAchiveCount;
@property(nonatomic) long long maxOnePageNumber; // @synthesize maxOnePageNumber=_maxOnePageNumber;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) KTVInvitedListBaseNetHelper *netHelper; // @synthesize netHelper=_netHelper;
- (void).cxx_destruct;
- (void)requestWithObject:(id)arg1 willHanderWhenSuccess:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)addAInvite:(id)arg1;
- (void)clearAllMemoryCache;
- (id)getInviteForInviteKey:(id)arg1;
- (id)getInviteList;
- (void)getOnePageDynamicListEarlyThan:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)updateSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (id)init;

@end

