//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMBaseDataModel.h"

@interface IOMLiveRoomNumModel : IOMBaseDataModel
{
    CDUnknownBlockType _handleRoomNumModel;
    CDUnknownBlockType _handleRoomInfoModel;
}

@property(copy, nonatomic) CDUnknownBlockType handleRoomInfoModel; // @synthesize handleRoomInfoModel=_handleRoomInfoModel;
@property(copy, nonatomic) CDUnknownBlockType handleRoomNumModel; // @synthesize handleRoomNumModel=_handleRoomNumModel;
- (void).cxx_destruct;
- (void)responseLiveInfo:(id)arg1;
- (void)responseOjectInfo:(id)arg1;
- (void)requestRoomInfoWithLiveId:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRoomNumWithLiveId:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

