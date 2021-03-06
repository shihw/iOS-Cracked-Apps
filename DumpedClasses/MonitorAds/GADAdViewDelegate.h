//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdViewDelegate-Protocol.h"

@class GADOpener, NSMutableArray, NSString;

@interface GADAdViewDelegate : NSObject <GADAdViewDelegate>
{
    BOOL _hasLoadedAtLeastOnce;
    GADOpener *_opener;
    NSMutableArray *_gmsgHandlers;
}

@property(readonly, nonatomic) NSMutableArray *gmsgHandlers; // @synthesize gmsgHandlers=_gmsgHandlers;
@property(readonly, nonatomic) BOOL hasLoadedAtLeastOnce; // @synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce;
@property(retain, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)handleDeeplinkPlusURL:(id)arg1;
- (void)handleGMSGURL:(id)arg1 adView:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)addGMSGHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

