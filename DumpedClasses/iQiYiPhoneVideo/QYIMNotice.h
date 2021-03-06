//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYIMElement.h"

#import "IQYIMNotice-Protocol.h"

@class NSDictionary, NSNumber, NSString, QYIMNode;

@interface QYIMNotice : QYIMElement <IQYIMNotice>
{
    NSString *_business;
    unsigned long long _notiType;
    NSString *_extTypeName;
    NSDictionary *_content;
    QYIMNode *_from;
    QYIMNode *_to;
    NSNumber *_gid;
    NSString *_noticeId;
    long long _createTime;
}

+ (id)convertNoticeFromQENotice:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)stringValue;
- (id)genNoticeId;
- (id)generateNoticeId;
- (id)beforeSendNotice;
@property(nonatomic) long long createTime;
@property(retain, nonatomic) NSString *noticeId;
@property(retain, nonatomic) NSNumber *gid;
@property(retain, nonatomic) QYIMNode *to;
@property(retain, nonatomic) QYIMNode *from;
@property(retain, nonatomic) NSString *extTypeName;
@property(retain, nonatomic) NSDictionary *content;
@property(nonatomic) unsigned long long type;
@property(retain, nonatomic) NSString *business;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

