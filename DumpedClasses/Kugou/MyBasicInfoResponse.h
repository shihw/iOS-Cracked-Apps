//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalInfoManagerBasicResponse.h"

@class MyBasicInfo;

@interface MyBasicInfoResponse : PersonalInfoManagerBasicResponse
{
    MyBasicInfo *_myBasicInfo;
}

+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) MyBasicInfo *myBasicInfo; // @synthesize myBasicInfo=_myBasicInfo;
- (void).cxx_destruct;

@end

