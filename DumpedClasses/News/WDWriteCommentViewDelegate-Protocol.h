//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WDWriteCommentView;

@protocol WDWriteCommentViewDelegate <NSObject>

@optional
- (_Bool)commentViewWillSendMsg:(WDWriteCommentView *)arg1;
- (void)commentView:(WDWriteCommentView *)arg1 sendCommentWithContent:(NSString *)arg2 replyCommentID:(NSString *)arg3 replyUserID:(NSString *)arg4;
- (void)commentViewCancelled:(WDWriteCommentView *)arg1 replyCommentModel:(id <TTCommentModelProtocol>)arg2;
@end

