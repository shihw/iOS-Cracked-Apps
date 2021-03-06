//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTUserProtocol.h"

@class NSString;

@interface MTUserProvider : NSObject <MTUserProtocol>
{
}

- (void)dealloc;
- (_Bool)isFXLogined;
- (void)getUserBasisInfoWithUserID:(id)arg1 AndToken:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)stopUpdateFollowOnLineNumTimer;
- (void)startUpdateFollowOnLineNumTimer;
- (void)setMobileLiveStarStatus:(id)arg1;
- (void)getAuthenPlayStatusSuccess:(CDUnknownBlockType)arg1 Error:(CDUnknownBlockType)arg2;
- (void)cancelBlackListWithBlackId:(long long)arg1;
- (void)addBlackListWithBlackId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (_Bool)checkIsBlackListWithId:(long long)arg1;
- (void)getRelationWithUser:(int)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (long long)getTotalMobileLiveTimeNum;
- (void)setUserCoin:(long long)arg1;
- (void)saveWatchRoomId:(long long)arg1;
- (id)liveRoomBottomInfo;
- (id)weiboUserID;
- (void)setLiveRoomBottomInfo:(id)arg1;
- (void)setDicmShowWhichGuidance:(id)arg1;
- (void)setIsShowGameGuidance:(_Bool)arg1;
- (_Bool)deleteLocalRecordAiYanWithKey:(id)arg1 andFilePath:(id)arg2;
- (id)getAllLocalRecordAiYan;
- (id)dicmShowWhichGuidance;
- (_Bool)isShowGameGuidance;
- (long long)partnerid;
- (void)getLocalViewingRecord:(CDUnknownBlockType)arg1;
- (void)onlyGetLoginUserInfo:(CDUnknownBlockType)arg1 failHandler:(CDUnknownBlockType)arg2;
- (_Bool)systemMsgHasUpdate;
- (_Bool)needSignin;
- (void)setCloakingWithStatus:(unsigned long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)logout;
- (void)saveWithFXLoginInfo;
- (void)setIsManager:(_Bool)arg1;
- (_Bool)isManager;
- (void)getLoginUserInfo:(CDUnknownBlockType)arg1 failHandler:(CDUnknownBlockType)arg2;
- (id)weiboAccessToken;
- (long long)kugouId;
- (id)token;
- (long long)vip;
- (void)updateUserCoin;
- (_Bool)isNeverCharge;
- (void)getUser:(CDUnknownBlockType)arg1;
- (id)userWithUserInfo:(id)arg1;
- (id)getUser;
- (_Bool)isLoginFromOther;
- (_Bool)isLogined;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

