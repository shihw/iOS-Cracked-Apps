//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface QIYIPaopaoXMPPCore : UIViewController
{
    NSArray *validPhoneNumber;
    NSArray *validUserName;
    NSArray *validUserNumberAndName;
    NSArray *validEmailAndUid;
    NSDate *lastMessageDate;
    NSMutableDictionary *viewIdToBeUpdateDic;
    NSMutableDictionary *dictSessionsToBeUpdate;
    NSObject<OS_dispatch_source> *_updateTimer;
    NSObject<OS_dispatch_source> *_globalBubbleTimer;
    _Bool canPostGlobalBubbleChat;
    _Bool canPostGlobalBubbleNotice;
    NSMutableArray *bubbleQueue;
    NSMutableDictionary *bubbleDic;
    NSObject<OS_dispatch_queue> *bubbleDispatchQueue;
    NSObject<OS_dispatch_source> *chatBubbleTimer;
    NSObject<OS_dispatch_queue> *sessionUpdateQueue;
    NSObject<OS_dispatch_queue> *sessionArrayQueue;
    long long needPostUpdateCount;
    long long needPostUnread4Cartoon;
    NSMutableDictionary *cartoonMsgDict;
    _Bool needDownLoad;
    _Bool isCheckResult;
    _Bool _isAutoAuth;
    NSMutableDictionary *xmppRoomDic;
    NSMutableDictionary *roomContactDic;
    NSString *deviceTokenStr;
    NSString *currentRoomJIDStr;
    NSMutableDictionary *starShowTimeDic;
    CDUnknownBlockType _finishDownloadBlock;
    NSArray *_sessionArrayMainThread;
    NSMutableArray *_sessionArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(retain, nonatomic) NSArray *sessionArrayMainThread; // @synthesize sessionArrayMainThread=_sessionArrayMainThread;
@property(nonatomic) _Bool isAutoAuth; // @synthesize isAutoAuth=_isAutoAuth;
@property(copy, nonatomic) CDUnknownBlockType finishDownloadBlock; // @synthesize finishDownloadBlock=_finishDownloadBlock;
@property(retain, nonatomic) NSMutableDictionary *starShowTimeDic; // @synthesize starShowTimeDic;
@property(nonatomic) _Bool isCheckResult; // @synthesize isCheckResult;
@property(retain, nonatomic) NSArray *validUserNumberAndName; // @synthesize validUserNumberAndName;
@property(retain, nonatomic) NSArray *validEmailAndUid; // @synthesize validEmailAndUid;
@property(retain, nonatomic) NSString *deviceTokenStr; // @synthesize deviceTokenStr;
@property(nonatomic) _Bool needDownLoad; // @synthesize needDownLoad;
@property(retain, nonatomic) NSMutableDictionary *roomContactDic; // @synthesize roomContactDic;
@property(retain, nonatomic) NSMutableDictionary *xmppRoomDic; // @synthesize xmppRoomDic;
- (void).cxx_destruct;
- (void)clearUnreadCountForCartoon;
- (void)handleCartoonMsgwithUid:(long long)arg1;
- (void)updateSessionViewIdwithMsg:(id)arg1;
- (void)insertmessageOK:(id)arg1;
- (_Bool)allowsUpdateSessionWithIType:(id)arg1;
- (double)getDiffTime;
- (void)scheduleUpdateChatSessionWithInerval:(unsigned long long)arg1 withLeeWay:(unsigned long long)arg2;
- (id)getContactWithJidStr:(id)arg1;
- (void)setConstactWithJidStr:(id)arg1 dic:(id)arg2;
- (id)getRoomJIDWithJidStr:(id)arg1;
- (void)resetUnreadCountUserdefaultForBaselineWithDict:(id)arg1;
- (void)didEnterMessageVC;
- (void)updateTaiwanReddotWithUnReadCount:(long long)arg1;
- (void)didUpdateSessionArray;
- (id)unreadInfoWithSessionArray:(id)arg1;
- (void)refreshSessions:(id)arg1;
- (void)deleteSession:(id)arg1;
- (void)updateSession:(id)arg1;
- (_Bool)isToperSession:(id)arg1 thanSession:(id)arg2;
- (void)clearUnreadCountForBaseLine;
- (void)didAccountChange;
- (void)refreshSessionsWithSessionArray:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)refreshSessionsWithSessionArray:(id)arg1;
- (id)dictForJumpWithBizSubId:(long long)arg1 jid:(id)arg2;
- (id)dictGlobalBubbleWithType:(int)arg1;
- (void)scheduleGlobalBubble;
- (void)handleChatGlobalTipWithSessionDict:(id)arg1;
- (_Bool)isP2PChatSession:(id)arg1;
- (void)postGlobalMessageTipAtAppLaunch;
- (void)clearGlobalBubble;
- (void)clearGlobalBubbleWithType:(long long)arg1;
- (void)closeGlobalBubble:(id)arg1;
- (void)postGlobalBubbleNotificationWithDictionary:(id)arg1 isPacked:(_Bool)arg2;
- (_Bool)canShowCircleNoticeTip;
- (_Bool)canShowChatTip;
- (double)intervalOfCommentBubble;
- (void)setupWithSessionArray:(id)arg1;
- (void)resetDatabases;
- (void)setupPaopaoChatVar;
- (id)init;
@property(retain, nonatomic) NSString *currentRoomJIDStr; // @synthesize currentRoomJIDStr;

@end

