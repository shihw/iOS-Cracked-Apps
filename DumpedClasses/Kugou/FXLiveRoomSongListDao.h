//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@interface FXLiveRoomSongListDao : FXBasisHttpDao
{
}

- (_Bool)reportDiversion:(long long)arg1 roomId:(long long)arg2 songListId:(long long)arg3 error:(id *)arg4;
- (id)getLiveRoomSongSupportListInfo:(long long)arg1 page:(long long)arg2 pagesize:(long long)arg3 error:(id *)arg4;
- (id)getCountdown:(long long)arg1 error:(id *)arg2;
- (id)getSongList:(long long)arg1 error:(id *)arg2;

@end

