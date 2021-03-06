//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBNASharingOptionControlling-Protocol.h"

@class NSString, UIPasteboard;
@protocol FBNavigationCoordinator;

@interface FBNASharingOptionCopyLinkController : NSObject <FBNASharingOptionControlling>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    UIPasteboard *_pasteboard;
}

@property(readonly, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void).cxx_destruct;
- (void)_displayConfirmationDialog;
- (id)performActionWithShareable:(id)arg1;
- (id)prepareActionWithShareable:(id)arg1;
- (_Bool)canPerformActionWithShareable:(id)arg1;
@property(readonly, copy, nonatomic) NSString *analyticsShareType;
@property(readonly, nonatomic) unsigned long long actionGlyphName;
@property(readonly, copy, nonatomic) NSString *actionDescription;
@property(readonly, copy, nonatomic) NSString *actionTitle;
- (id)initWithNavigationCoordinator:(id)arg1 pasteboard:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

