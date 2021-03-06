//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTAlphaThemedButton, WDListViewModel;

@interface WDListQuestionHeaderFollowInviteView : SSThemedView
{
    WDListViewModel *_viewModel;
    TTAlphaThemedButton *_concernButton;
    TTAlphaThemedButton *_inviteBtn;
    SSThemedView *_topLine;
    SSThemedView *_verticalLine;
}

@property(retain, nonatomic) SSThemedView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) SSThemedView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) TTAlphaThemedButton *inviteBtn; // @synthesize inviteBtn=_inviteBtn;
@property(retain, nonatomic) TTAlphaThemedButton *concernButton; // @synthesize concernButton=_concernButton;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)followAction;
- (void)followQuestion:(id)arg1;
- (void)tapToMoreInviteUsers;
- (void)updateFrame;
- (void)updateContent;
- (void)fontChanged;
- (void)reload;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

@end

