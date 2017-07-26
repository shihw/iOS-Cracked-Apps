//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, StyleKitContext;

@interface UIView (StyleKit)
+ (id)viewWithId:(id)arg1 groupID:(id)arg2 styleKitContext:(id)arg3;
+ (id)viewWithId:(id)arg1 styleKitContext:(id)arg2;
+ (id)styleKitStyleWithId:(id)arg1 groupID:(id)arg2 context:(id)arg3;
+ (id)styleKitStyleWithId:(id)arg1 context:(id)arg2;
- (void)setupFrame;
- (void)styleSetup;
- (id)styleKitStyle;
@property(copy, nonatomic) NSString *groupID; // @dynamic groupID;
@property(nonatomic) __weak StyleKitContext *styleKitContext; // @dynamic styleKitContext;
@property(copy, nonatomic) NSString *styleKitId; // @dynamic styleKitId;
@end
