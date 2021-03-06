//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsynDownloadImageObserver.h"

@class NSString;

@interface QQVIPFunctionComicIconDownloader : NSObject <IAsynDownloadImageObserver>
{
    _Bool _downloadingGirlHeadImage;
}

+ (id)sharedInstance;
- (void)notifyDownloadImageStatusIfNeed:(id)arg1;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (void)downloadImage:(id)arg1;
- (void)downloadImage:(id)arg1 withObserver:(id)arg2;
- (id)getIconPath:(id)arg1;
- (_Bool)checkLoadingImageExist:(id)arg1;
- (void)tryDownloadReaderClickChangePageGuideImage;
- (void)tryDownloadGirlHeadImgOfDanmuColorTipsView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

