//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADBannerBLL : NSObject
{
}

- (void)getSingleSongShowAdInfoWithSucc:(CDUnknownBlockType)arg1 andError:(CDUnknownBlockType)arg2;
- (void)getMusicBuyViewAdBannerInfoWithSingName:(id)arg1 withSucc:(CDUnknownBlockType)arg2 andError:(CDUnknownBlockType)arg3;
- (void)getDownloadSheetShowAdInfoWithSucc:(CDUnknownBlockType)arg1 andError:(CDUnknownBlockType)arg2;
- (void)updateDownloadSheetBannerImg:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (_Bool)isDisplaySingList;
- (_Bool)isDisplayYueku;
- (void)getAlbumAdBannerInfoWithAlbumId:(long long)arg1 AndRep:(CDUnknownBlockType)arg2 AndException:(CDUnknownBlockType)arg3;
- (void)getAdBannerInfoWithSingId:(long long)arg1 AndRep:(CDUnknownBlockType)arg2 AndException:(CDUnknownBlockType)arg3;
- (void)getYuekuAdBannerInfoWithRep:(CDUnknownBlockType)arg1 AndException:(CDUnknownBlockType)arg2;

@end

