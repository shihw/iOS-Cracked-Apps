//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UIScrollViewDelegate.h"

@class NSLayoutConstraint, NSString, SSThemedTableView, TTAlphaThemedButton, TTProfileHeaderView;

@interface TTProfileViewController : SSViewControllerBase <UIScrollViewDelegate>
{
    _Bool _backButtonClicked;
    SSThemedTableView *_tableView;
    TTAlphaThemedButton *_padBackButton;
    NSLayoutConstraint *_tableViewTop;
    NSLayoutConstraint *_tableViewLeft;
    NSLayoutConstraint *_tableViewBottom;
    NSLayoutConstraint *_tableViewRight;
    TTProfileHeaderView *_tableHeaderView;
    TTAlphaThemedButton *_backButton;
}

+ (id)entryForIndexPath:(id)arg1;
+ (int)visitorTypeForIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool backButtonClicked; // @synthesize backButtonClicked=_backButtonClicked;
@property(retain, nonatomic) TTAlphaThemedButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak TTProfileHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) __weak NSLayoutConstraint *tableViewRight; // @synthesize tableViewRight=_tableViewRight;
@property(nonatomic) __weak NSLayoutConstraint *tableViewBottom; // @synthesize tableViewBottom=_tableViewBottom;
@property(nonatomic) __weak NSLayoutConstraint *tableViewLeft; // @synthesize tableViewLeft=_tableViewLeft;
@property(nonatomic) __weak NSLayoutConstraint *tableViewTop; // @synthesize tableViewTop=_tableViewTop;
@property(nonatomic) __weak TTAlphaThemedButton *padBackButton; // @synthesize padBackButton=_padBackButton;
@property(nonatomic) __weak SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)followCellTouched:(id)arg1;
- (void)historyBtnTouched:(id)arg1;
- (void)favBtnTouched:(id)arg1;
- (void)backBtnTouched;
- (void)iPhoneBackButtonClick:(id)arg1;
- (void)showViewController:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadTableView;
- (void)reloadTableViewLater;
- (void)refreshUserHistoryInfo;
- (void)refreshUserInfoView;
- (void)updateHeaderControls;
- (void)themeChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)requestUserAuditInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)visitorView:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;
- (void)ttSettingMineTabManagerRefreshedNotification:(id)arg1;
- (void)customThemeChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)followArrayDidChange:(id)arg1;
- (void)tipNewChanged:(id)arg1;
- (void)reportArticleBadgeManagerRefreshedNotification:(id)arg1;
- (void)pgcAccountChangedNotification:(id)arg1;
- (void)reportGetAccountStatesFinishedNotification:(id)arg1;
- (void)reportAccountStateChangedNotification:(id)arg1;
- (void)reportSSEditUserProfileViewAvatarChangedNotification:(id)arg1;
- (void)receiveMineTabbarClickedNotification:(id)arg1;
- (void)avatarChangedNotification:(id)arg1;
- (void)responseUpdateUserInfoDidFinishNotification:(id)arg1;
- (void)reportAccountBoundForbidAlertShowNotification:(id)arg1;
- (void)registerNotifications;
- (void)openProfileViewControllerWithSource:(id)arg1;
- (void)headerContainerTapped:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)sinaButtonClicked:(id)arg1;
- (void)qqButtonClicked:(id)arg1;
- (void)weixinButtonClicked:(id)arg1;
- (void)phoneButtonClicked:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
