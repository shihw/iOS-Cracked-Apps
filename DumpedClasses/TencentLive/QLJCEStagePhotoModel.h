//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class MoabCache, NSString;

@interface QLJCEStagePhotoModel : QLPageDataBaseModel
{
    MoabCache *_cahce;
    NSString *_cid;
}

@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (id)initWithCid:(id)arg1;

@end
