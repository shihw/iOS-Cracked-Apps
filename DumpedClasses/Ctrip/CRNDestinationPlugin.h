//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRNPlugin.h"

@interface CRNDestinationPlugin : CRNPlugin
{
}

- (void)handleSetCityHistory:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)handleSetFootPrint:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)handleGetShareFlag:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)handleSelectCity:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)handleSetHomeCity:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)handleSetWeChatMessageID:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)callFunction:(id)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

