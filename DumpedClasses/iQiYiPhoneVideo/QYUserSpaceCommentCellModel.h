//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYUserSpaceCommentServiceDelegate-Protocol.h"

@class NSDictionary, NSString, NSURL, QYUserSpaceCommentService;
@protocol QYUserSpaceCommentCellModelDelegate;

@interface QYUserSpaceCommentCellModel : NSObject <QYUserSpaceCommentServiceDelegate>
{
    QYUserSpaceCommentService *commentService;
    _Bool _isEnterUserSpace;
    _Bool _isCanResponseToSelect;
    _Bool _isCanLike;
    _Bool _isLike;
    _Bool _isAnonymous;
    _Bool _isLoveChannel;
    _Bool _isReply;
    _Bool _replyIsEnterUserSpace;
    _Bool _replyIsAnonymous;
    id <QYUserSpaceCommentCellModelDelegate> _delegate;
    NSString *_commentId;
    NSString *_userId;
    NSURL *_userAvatarUrl;
    NSString *_userName;
    NSString *_commentTime;
    NSString *_commentContent;
    NSString *_loveChannelIconType;
    long long _likeNumber;
    NSString *_replyUserId;
    NSString *_replyUserName;
    NSDictionary *_dataDict;
}

@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) _Bool replyIsAnonymous; // @synthesize replyIsAnonymous=_replyIsAnonymous;
@property(nonatomic) _Bool replyIsEnterUserSpace; // @synthesize replyIsEnterUserSpace=_replyIsEnterUserSpace;
@property(retain, nonatomic) NSString *replyUserName; // @synthesize replyUserName=_replyUserName;
@property(retain, nonatomic) NSString *replyUserId; // @synthesize replyUserId=_replyUserId;
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(nonatomic) _Bool isLoveChannel; // @synthesize isLoveChannel=_isLoveChannel;
@property(nonatomic) long long likeNumber; // @synthesize likeNumber=_likeNumber;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) _Bool isCanLike; // @synthesize isCanLike=_isCanLike;
@property(nonatomic) _Bool isCanResponseToSelect; // @synthesize isCanResponseToSelect=_isCanResponseToSelect;
@property(retain, nonatomic) NSString *loveChannelIconType; // @synthesize loveChannelIconType=_loveChannelIconType;
@property(nonatomic) _Bool isEnterUserSpace; // @synthesize isEnterUserSpace=_isEnterUserSpace;
@property(retain, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(retain, nonatomic) NSString *commentTime; // @synthesize commentTime=_commentTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSURL *userAvatarUrl; // @synthesize userAvatarUrl=_userAvatarUrl;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(nonatomic) id <QYUserSpaceCommentCellModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userSpaceCommentDataRequestFailed:(id)arg1 commentServiceType:(unsigned long long)arg2;
- (void)userSpaceCommentDataRequestSuccess:(id)arg1 commentServiceType:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)dateStringFromTimestamp:(id)arg1;
- (void)copyComment;
- (void)unlikeComment;
- (void)userLoginSuccessed:(id)arg1;
- (void)likeComment;
- (void)gotoReplyUserSpace;
- (void)gotoUserSpace;
- (void)parseData:(id)arg1;
- (void)commonInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

