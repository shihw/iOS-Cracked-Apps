//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray, NSString;

@interface FALCDailyTaskModel : FAModel
{
    NSString *_awardName;
    NSString *_awardNum;
    NSString *_awardPic;
    NSString *_btnName;
    NSString *_desc;
    NSArray *_descArgs;
    NSString *_helpDesc;
    NSString *_helpPic;
    long long _status;
    NSString *_taskId;
    NSString *_taskName;
    NSString *_taskPic;
}

@property(copy, nonatomic) NSString *taskPic; // @synthesize taskPic=_taskPic;
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *helpPic; // @synthesize helpPic=_helpPic;
@property(copy, nonatomic) NSString *helpDesc; // @synthesize helpDesc=_helpDesc;
@property(retain, nonatomic) NSArray *descArgs; // @synthesize descArgs=_descArgs;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *btnName; // @synthesize btnName=_btnName;
@property(copy, nonatomic) NSString *awardPic; // @synthesize awardPic=_awardPic;
@property(copy, nonatomic) NSString *awardNum; // @synthesize awardNum=_awardNum;
@property(copy, nonatomic) NSString *awardName; // @synthesize awardName=_awardName;
- (void).cxx_destruct;

@end

