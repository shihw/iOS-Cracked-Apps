//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KQInfoBaseItem : NSObject
{
    NSString *_groupID;
    NSString *_groupName;
    NSString *_groupImgUrl;
    NSString *_isVipGroup;
}

@property(copy, nonatomic) NSString *isVipGroup; // @synthesize isVipGroup=_isVipGroup;
@property(copy, nonatomic) NSString *groupImgUrl; // @synthesize groupImgUrl=_groupImgUrl;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;

@end

